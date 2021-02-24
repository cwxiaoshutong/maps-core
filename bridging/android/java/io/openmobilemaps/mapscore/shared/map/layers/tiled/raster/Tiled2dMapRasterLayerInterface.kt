// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_raster_layer.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.raster

import java.util.concurrent.atomic.AtomicBoolean

abstract class Tiled2dMapRasterLayerInterface {

    abstract fun setAlpha(alpha: Double)

    abstract fun getAlpha(): Double

    abstract fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface

    companion object {
        @JvmStatic
        fun create(layerConfig: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig, textureLoader: io.openmobilemaps.mapscore.shared.map.loader.TextureLoaderInterface): Tiled2dMapRasterLayerInterface {
            return CppProxy.create(layerConfig, textureLoader)
        }
    }

    private class CppProxy : Tiled2dMapRasterLayerInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
        }

        private external fun nativeDestroy(nativeRef: Long)
        fun _djinni_private_destroy() {
            val destroyed = this.destroyed.getAndSet(true)
            if (!destroyed) nativeDestroy(this.nativeRef)
        }
        protected fun finalize() {
            _djinni_private_destroy()
        }

        override fun setAlpha(alpha: Double) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setAlpha(this.nativeRef, alpha)
        }
        private external fun native_setAlpha(_nativeRef: Long, alpha: Double)

        override fun getAlpha(): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getAlpha(this.nativeRef)
        }
        private external fun native_getAlpha(_nativeRef: Long): Double

        override fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asLayerInterface(this.nativeRef)
        }
        private external fun native_asLayerInterface(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.LayerInterface

        companion object {
            @JvmStatic
            external fun create(layerConfig: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig, textureLoader: io.openmobilemaps.mapscore.shared.map.loader.TextureLoaderInterface): Tiled2dMapRasterLayerInterface
        }
    }
}
