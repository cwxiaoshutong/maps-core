<h1 align="center">Open Mobile Maps</h1>

<br />

<div align="center">
  <img width="200" height="45" src="../logo.svg" />
  <br />
  <br />
  The lightweight and modern Map SDK for Android (6.0+) and iOS (10+)
  <br />
  <br />
  <a href="https://openmobilemaps.io/">openmobilemaps.io</a>
</div>

<br />

<div align="center">
    <!-- License -->
    <a href="https://github.com/openmobilemaps/maps-core/blob/master/LICENSE">
      <img alt="License: MPL 2.0"
      src="https://img.shields.io/badge/License-MPL%202.0-brightgreen.svg">
    </a>
</div>


<h1>Android</h1>

## How to build

Make sure you have all submodules initialized and updated. to do this use

```
git submodule init
git submodule update
```

### Updating Djinni bridging files

The bridging interface between Kotlin and C++ are defined in the djinni files under [djinni](../djinni). After modifying those files the new bridging code can be generated by running

```make clean djinni```

in the folder [djinni](../djinni). This generates the Kotlin bindings, the C++ header files as well as all the JNI glue code.

### Building the Android Library

The Android library can be opened as an Android Studio project in the [android](.) folder. Alternatively you can build the library using gradle from the command line using

```
./gradlew assemble
```

and you find the generated .aar library under build/outputs/aar/. For development, it is easiest to include this library directly as a module into a wrapping Android application project that can be run on a device.

<h2>Installation</h2>

Either include the Android fold as a module in the Android project or moving the generated .aar to e.g. the `app/libs` folder of the project and including it in the project via the apps `build.gradle`:

```
implementation fileTree(dir: 'libs', include: ['*.aar'])
```

### Dependencies

When Open Maps Mobile is included as .aar, the following dependencies in the apps `build.gradle` are necessary:

```
implementation "androidx.activity:activity-ktx:1.1.0"
implementation "androidx.lifecycle:lifecycle-runtime-ktx:2.2.0"
implementation "org.jetbrains.kotlinx:kotlinx-coroutines-android:1.4.2"
implementation 'com.squareup.okhttp3:okhttp:4.7.2' // used for the default TextureLoader
```

<h2>How to use</h2>

### MapView

The main ui element to use open mobile maps is the MapView provided with it. To use it, the following steps are necessary to set it up:

```kotlin
val mapView = findViewById<MapView>(R.id.mapView)
mapView.setupMap(MapConfig(...))
mapView.registerLifecycle(lifecycle)
```

The map needs to be initialized with a MapConfig, which specifies the coordinate system used and the respective bounds and zoom levels that the camera operates in. Additionally the MapView needs to be registered to a lifecycle that also provides a coroutine context, in which the maps tasks can be scheduled (e.g. for tile loading).

### Displaying a Tiled Raster Map

A standard use-case is to display content from a tile-server as a layer in the map, e.g. one containing data from [OpenStreetMap](https://wiki.openstreetmap.org/). In this example case, the map is a projection in the EPSG:3857 system. Thus the MapView is recommended to be initialized with a matching MapConfig.

```kotlin
mapView.setupMap(MapConfig(CoordinateSystemFactory.getEpsg3857System(), 500000000.0, 1000.0))
```

To display the tiles, a Tiled2dMapRasterLayer must be created with both a Tiled2dMapLayerConfig and the implementation of a TextureLoader.

```kotlin
val tiledLayer = Tiled2dMapRasterLayerInterface.create(layerConfig, textureLoader)
```

Open Maps Mobile provides a default implementation for a TextureLoader which uses OkHttp to load a bitmap from a given URL. Of course, a custom implementation of the TextureLoaderInterface can be used as well.

```kotlin
val textureLoader = TextureLoader(this, cacheDir, 50L * 1024L * 1024L)
```

The LayerConfig contains the information needed for the layer to compute the visible tiles in the current camera configuration, as well as to load and display them.

```kotlin
val layerConfig = object : Tiled2dMapLayerConfig() {
			// Defines the bounds of the layer and implicitly the coordinate system used by the layer as well
			override fun getBounds(): RectCoord = RectCoord(
				Coord(CoordinateSystemIdentifiers.EPSG3857(), -20026376.39, 20048966.10, 0.0),
				Coord(CoordinateSystemIdentifiers.EPSG3857(), 20026376.39, -20048966.10, 0.0)
			)

			// Pattern to create a tile identifier used internally 
			override fun getTileIdentifier(x: Int, y: Int, zoom: Int): String = "OSM_" + zoom + "_" + x + "_" + y

			// Defines the url-pattern to load tiles. Enter a valid OSM tile server here
			override fun getTileUrl(x: Int, y: Int, zoom: Int): String = 
				"https://add-osm-web-server-address-here/$zoom/$x/$y.png"

			// Defines both an additional scale factor for the tiles, as well as how many
			// layers above the ideal one should be loaded an displayed as well.
			override fun getZoomInfo(): Tiled2dMapZoomInfo = Tiled2dMapZoomInfo(1.2f, 2)

			// List of valid zoom-levels and their target zoom-value, the tile size in
			// the layers coordinate system, the number of tiles on that level and the
			// zoom identifier used for the tile-url (see getTileUrl above)
			override fun getZoomLevelInfos(): ArrayList<Tiled2dMapZoomLevelInfo> = ArrayList(
					listOf(
						Tiled2dMapZoomLevelInfo(500000000.0, 40075016f, 1, 1, 0),
						Tiled2dMapZoomLevelInfo(250000000.0, 20037508f, 2, 2, 1),
						Tiled2dMapZoomLevelInfo(150000000.0, 10018754f, 4, 4, 2),
						Tiled2dMapZoomLevelInfo(70000000.0, 5009377.1f, 8, 8, 3),
						Tiled2dMapZoomLevelInfo(35000000.0, 2504688.5f, 16, 16, 4),
						Tiled2dMapZoomLevelInfo(15000000.0, 1252344.3f, 32, 32, 5),
						Tiled2dMapZoomLevelInfo(10000000.0, 626172.1f, 64, 64, 6),
						Tiled2dMapZoomLevelInfo(4000000.0, 313086.1f, 128, 128, 7),
						Tiled2dMapZoomLevelInfo(2000000.0, 156543f, 256, 256, 8),
						Tiled2dMapZoomLevelInfo(1000000.0, 78271.5f, 512, 512, 9),
						Tiled2dMapZoomLevelInfo(500000.0, 39135.8f, 1024, 1024, 10),
						Tiled2dMapZoomLevelInfo(250000.0, 19567.9f, 2048, 2048, 11),
						Tiled2dMapZoomLevelInfo(150000.0, 9783.94f, 4096, 4096, 12),
						Tiled2dMapZoomLevelInfo(70000.0, 4891.97f, 8192, 8192, 13),
						Tiled2dMapZoomLevelInfo(35000.0, 2445.98f, 16384, 16384, 14),
						Tiled2dMapZoomLevelInfo(15000.0, 1222.99f, 32768, 32768, 15),
						Tiled2dMapZoomLevelInfo(8000.0, 611.496f, 65536, 65536, 16),
						Tiled2dMapZoomLevelInfo(4000.0, 305.748f, 131072, 131072, 17),
						Tiled2dMapZoomLevelInfo(2000.0, 152.874f, 262144, 262144, 18),
						Tiled2dMapZoomLevelInfo(1000.0, 76.437f, 524288, 524288, 19)
					)
				)
			}
		}
```

Finally, the layer can be added to the MapView.

```kotlin
mapView.addLayer(tiledLayer.asLayerInterface())
```

### Adjusting the Camera

The camera position and zoom can easily be adjusted by manipulating the Camera2dInterface received from the map. E.g. to set a custom location:

```kotlin
mapView.getCamera().moveToCenterPositionZoom(
    Coord(CoordinateSystemIdentifiers.EPSG4326(), 8.378232525377973, 46.962592372639634, 0.0), 
    10000000.0, false)
```

## License

This project is licensed under the terms of the MPL 2 license. See the [LICENSE](../LICENSE) file.