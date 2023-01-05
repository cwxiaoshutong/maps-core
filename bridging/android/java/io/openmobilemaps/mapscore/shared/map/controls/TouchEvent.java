// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from touch_handler.djinni

package io.openmobilemaps.mapscore.shared.map.controls;

import java.util.ArrayList;

public final class TouchEvent {


    /*package*/ final ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F> pointers;

    /*package*/ final TouchAction touchAction;

    public TouchEvent(
            ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F> pointers,
            TouchAction touchAction) {
        this.pointers = pointers;
        this.touchAction = touchAction;
    }

    public ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F> getPointers() {
        return pointers;
    }

    public TouchAction getTouchAction() {
        return touchAction;
    }

    @Override
    public String toString() {
        return "TouchEvent{" +
                "pointers=" + pointers +
                "," + "touchAction=" + touchAction +
        "}";
    }

}
