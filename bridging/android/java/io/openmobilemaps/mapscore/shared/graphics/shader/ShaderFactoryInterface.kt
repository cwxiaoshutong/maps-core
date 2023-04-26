// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

package io.openmobilemaps.mapscore.shared.graphics.shader

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class ShaderFactoryInterface {

    abstract fun createAlphaShader(): AlphaShaderInterface

    abstract fun createAlphaInstancedShader(): AlphaInstancedShaderInterface

    abstract fun createColorLineShader(): ColorLineShaderInterface

    abstract fun createLineGroupShader(): LineGroupShaderInterface

    abstract fun createColorShader(): ColorShaderInterface

    abstract fun createColorCircleShader(): ColorCircleShaderInterface

    abstract fun createPolygonGroupShader(): PolygonGroupShaderInterface

    abstract fun createTextShader(): TextShaderInterface

    abstract fun createRasterShader(): RasterShaderInterface

    abstract fun createStretchShader(): StretchShaderInterface

    private class CppProxy : ShaderFactoryInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        external fun nativeDestroy(nativeRef: Long)

        override fun createAlphaShader(): AlphaShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createAlphaShader(this.nativeRef)
        }
        private external fun native_createAlphaShader(_nativeRef: Long): AlphaShaderInterface

        override fun createAlphaInstancedShader(): AlphaInstancedShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createAlphaInstancedShader(this.nativeRef)
        }
        private external fun native_createAlphaInstancedShader(_nativeRef: Long): AlphaInstancedShaderInterface

        override fun createColorLineShader(): ColorLineShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createColorLineShader(this.nativeRef)
        }
        private external fun native_createColorLineShader(_nativeRef: Long): ColorLineShaderInterface

        override fun createLineGroupShader(): LineGroupShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createLineGroupShader(this.nativeRef)
        }
        private external fun native_createLineGroupShader(_nativeRef: Long): LineGroupShaderInterface

        override fun createColorShader(): ColorShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createColorShader(this.nativeRef)
        }
        private external fun native_createColorShader(_nativeRef: Long): ColorShaderInterface

        override fun createColorCircleShader(): ColorCircleShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createColorCircleShader(this.nativeRef)
        }
        private external fun native_createColorCircleShader(_nativeRef: Long): ColorCircleShaderInterface

        override fun createPolygonGroupShader(): PolygonGroupShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createPolygonGroupShader(this.nativeRef)
        }
        private external fun native_createPolygonGroupShader(_nativeRef: Long): PolygonGroupShaderInterface

        override fun createTextShader(): TextShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createTextShader(this.nativeRef)
        }
        private external fun native_createTextShader(_nativeRef: Long): TextShaderInterface

        override fun createRasterShader(): RasterShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createRasterShader(this.nativeRef)
        }
        private external fun native_createRasterShader(_nativeRef: Long): RasterShaderInterface

        override fun createStretchShader(): StretchShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createStretchShader(this.nativeRef)
        }
        private external fun native_createStretchShader(_nativeRef: Long): StretchShaderInterface
    }
}
