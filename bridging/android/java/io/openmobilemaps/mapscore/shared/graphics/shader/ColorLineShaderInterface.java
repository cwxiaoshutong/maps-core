// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

package io.openmobilemaps.mapscore.shared.graphics.shader;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class ColorLineShaderInterface {
    public abstract void setStyle(io.openmobilemaps.mapscore.shared.map.layers.line.LineStyle lineStyle);

    public abstract void setHighlighted(boolean highlighted);

    public abstract ShaderProgramInterface asShaderProgramInterface();

    public static final class CppProxy extends ColorLineShaderInterface
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

        @Override
        public void setStyle(io.openmobilemaps.mapscore.shared.map.layers.line.LineStyle lineStyle)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setStyle(this.nativeRef, lineStyle);
        }
        private native void native_setStyle(long _nativeRef, io.openmobilemaps.mapscore.shared.map.layers.line.LineStyle lineStyle);

        @Override
        public void setHighlighted(boolean highlighted)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setHighlighted(this.nativeRef, highlighted);
        }
        private native void native_setHighlighted(long _nativeRef, boolean highlighted);

        @Override
        public ShaderProgramInterface asShaderProgramInterface()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_asShaderProgramInterface(this.nativeRef);
        }
        private native ShaderProgramInterface native_asShaderProgramInterface(long _nativeRef);
    }
}
