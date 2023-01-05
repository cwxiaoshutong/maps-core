// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from touch_handler.djinni

package io.openmobilemaps.mapscore.shared.map.controls;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class DefaultTouchHandlerInterface {
    public static native TouchHandlerInterface create(io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface scheduler, float density);

    public static final class CppProxy extends DefaultTouchHandlerInterface
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
            NativeObjectManager.register(this, nativeRef);
        }
        public static native void nativeDestroy(long nativeRef);
    }
}
