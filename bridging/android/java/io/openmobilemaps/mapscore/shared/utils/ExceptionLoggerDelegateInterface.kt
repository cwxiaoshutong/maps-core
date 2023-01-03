// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception_logger.djinni

package io.openmobilemaps.mapscore.shared.utils

import java.util.concurrent.atomic.AtomicBoolean

abstract class ExceptionLoggerDelegateInterface {

    abstract fun logMessage(errorDomain: String, code: Int, customValues: HashMap<String, String>)

    private class CppProxy : ExceptionLoggerDelegateInterface {
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

        override fun logMessage(errorDomain: String, code: Int, customValues: HashMap<String, String>) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_logMessage(this.nativeRef, errorDomain, code, customValues)
        }
        private external fun native_logMessage(_nativeRef: Long, errorDomain: String, code: Int, customValues: HashMap<String, String>)
    }
}
