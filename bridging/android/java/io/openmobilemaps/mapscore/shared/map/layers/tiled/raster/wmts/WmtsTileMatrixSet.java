// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from wmts_capabilities.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.raster.wmts;

import java.util.ArrayList;

public final class WmtsTileMatrixSet {


    /*package*/ final String identifier;

    /*package*/ final String coordinateSystemIdentifier;

    /*package*/ final ArrayList<WmtsTileMatrix> matrices;

    public WmtsTileMatrixSet(
            String identifier,
            String coordinateSystemIdentifier,
            ArrayList<WmtsTileMatrix> matrices) {
        this.identifier = identifier;
        this.coordinateSystemIdentifier = coordinateSystemIdentifier;
        this.matrices = matrices;
    }

    public String getIdentifier() {
        return identifier;
    }

    public String getCoordinateSystemIdentifier() {
        return coordinateSystemIdentifier;
    }

    public ArrayList<WmtsTileMatrix> getMatrices() {
        return matrices;
    }

    @Override
    public String toString() {
        return "WmtsTileMatrixSet{" +
                "identifier=" + identifier +
                "," + "coordinateSystemIdentifier=" + coordinateSystemIdentifier +
                "," + "matrices=" + matrices +
        "}";
    }

}
