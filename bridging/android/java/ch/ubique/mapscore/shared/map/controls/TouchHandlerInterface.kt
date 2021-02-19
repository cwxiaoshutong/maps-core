// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

package ch.ubique.mapscore.shared.map.controls

import java.util.concurrent.atomic.AtomicBoolean

abstract class TouchHandlerInterface {

    abstract fun onTouchEvent(touchEvent: TouchEvent)

    abstract fun addListener(listener: TouchInterface)

    abstract fun removeListener(listener: TouchInterface)

    private class CppProxy : TouchHandlerInterface {
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

        override fun onTouchEvent(touchEvent: TouchEvent) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onTouchEvent(this.nativeRef, touchEvent)
        }
        private external fun native_onTouchEvent(_nativeRef: Long, touchEvent: TouchEvent)

        override fun addListener(listener: TouchInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addListener(this.nativeRef, listener)
        }
        private external fun native_addListener(_nativeRef: Long, listener: TouchInterface)

        override fun removeListener(listener: TouchInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_removeListener(this.nativeRef, listener)
        }
        private external fun native_removeListener(_nativeRef: Long, listener: TouchInterface)
    }
}