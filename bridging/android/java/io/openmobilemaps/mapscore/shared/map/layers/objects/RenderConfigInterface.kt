// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from layer_object.djinni

package io.openmobilemaps.mapscore.shared.map.layers.objects

import java.util.concurrent.atomic.AtomicBoolean

abstract class RenderConfigInterface {

    abstract fun getGraphicsObject(): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectInterface

    abstract fun getRenderIndex(): Int

    private class CppProxy : RenderConfigInterface {
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

        override fun getGraphicsObject(): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getGraphicsObject(this.nativeRef)
        }
        private external fun native_getGraphicsObject(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectInterface

        override fun getRenderIndex(): Int {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRenderIndex(this.nativeRef)
        }
        private external fun native_getRenderIndex(_nativeRef: Long): Int
    }
}