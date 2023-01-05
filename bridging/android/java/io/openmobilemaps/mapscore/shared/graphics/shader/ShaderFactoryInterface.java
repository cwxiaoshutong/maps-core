// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

package io.openmobilemaps.mapscore.shared.graphics.shader;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class ShaderFactoryInterface {
    public abstract AlphaShaderInterface createAlphaShader();

    public abstract ColorLineShaderInterface createColorLineShader();

    public abstract LineGroupShaderInterface createLineGroupShader();

    public abstract ColorShaderInterface createColorShader();

    public abstract ColorCircleShaderInterface createColorCircleShader();

    public abstract PolygonGroupShaderInterface createPolygonGroupShader();

    public abstract TextShaderInterface createTextShader();

    public static final class CppProxy extends ShaderFactoryInterface
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
        public AlphaShaderInterface createAlphaShader()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_createAlphaShader(this.nativeRef);
        }
        private native AlphaShaderInterface native_createAlphaShader(long _nativeRef);

        @Override
        public ColorLineShaderInterface createColorLineShader()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_createColorLineShader(this.nativeRef);
        }
        private native ColorLineShaderInterface native_createColorLineShader(long _nativeRef);

        @Override
        public LineGroupShaderInterface createLineGroupShader()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_createLineGroupShader(this.nativeRef);
        }
        private native LineGroupShaderInterface native_createLineGroupShader(long _nativeRef);

        @Override
        public ColorShaderInterface createColorShader()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_createColorShader(this.nativeRef);
        }
        private native ColorShaderInterface native_createColorShader(long _nativeRef);

        @Override
        public ColorCircleShaderInterface createColorCircleShader()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_createColorCircleShader(this.nativeRef);
        }
        private native ColorCircleShaderInterface native_createColorCircleShader(long _nativeRef);

        @Override
        public PolygonGroupShaderInterface createPolygonGroupShader()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_createPolygonGroupShader(this.nativeRef);
        }
        private native PolygonGroupShaderInterface native_createPolygonGroupShader(long _nativeRef);

        @Override
        public TextShaderInterface createTextShader()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_createTextShader(this.nativeRef);
        }
        private native TextShaderInterface native_createTextShader(long _nativeRef);
    }
}
