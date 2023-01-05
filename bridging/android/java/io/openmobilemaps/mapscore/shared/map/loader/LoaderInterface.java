// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from loader.djinni

package io.openmobilemaps.mapscore.shared.map.loader;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class LoaderInterface {
    public abstract TextureLoaderResult loadTexture(String url, String etag);

    public abstract DataLoaderResult loadData(String url, String etag);

    public static final class CppProxy extends LoaderInterface
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
        public TextureLoaderResult loadTexture(String url, String etag)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_loadTexture(this.nativeRef, url, etag);
        }
        private native TextureLoaderResult native_loadTexture(long _nativeRef, String url, String etag);

        @Override
        public DataLoaderResult loadData(String url, String etag)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_loadData(this.nativeRef, url, etag);
        }
        private native DataLoaderResult native_loadData(long _nativeRef, String url, String etag);
    }
}
