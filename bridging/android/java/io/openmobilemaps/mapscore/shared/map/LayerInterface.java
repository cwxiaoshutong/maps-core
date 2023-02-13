// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.map;

import com.snapchat.djinni.NativeObjectManager;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class LayerInterface {
    public abstract void setMaskingObject(io.openmobilemaps.mapscore.shared.graphics.objects.MaskingObjectInterface maskingObject);

    public abstract void update();

    public abstract ArrayList<io.openmobilemaps.mapscore.shared.graphics.RenderPassInterface> buildRenderPasses();

    public abstract void onAdded(MapInterface mapInterface, int layerIndex);

    public abstract void onRemoved();

    public abstract void pause();

    public abstract void resume();

    public abstract void hide();

    public abstract void show();

    public abstract void setAlpha(float alpha);

    public abstract float getAlpha();

    /** optional rectangle, remove scissoring when not set */
    public abstract void setScissorRect(io.openmobilemaps.mapscore.shared.graphics.common.RectI scissorRect);

    public abstract LayerReadyState isReadyToRenderOffscreen();

    public abstract void enableAnimations(boolean enabled);

    public abstract void setErrorManager(io.openmobilemaps.mapscore.shared.map.ErrorManager errorManager);

    public abstract void forceReload();

    public static final class CppProxy extends LayerInterface
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
        public void setMaskingObject(io.openmobilemaps.mapscore.shared.graphics.objects.MaskingObjectInterface maskingObject)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setMaskingObject(this.nativeRef, maskingObject);
        }
        private native void native_setMaskingObject(long _nativeRef, io.openmobilemaps.mapscore.shared.graphics.objects.MaskingObjectInterface maskingObject);

        @Override
        public void update()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_update(this.nativeRef);
        }
        private native void native_update(long _nativeRef);

        @Override
        public ArrayList<io.openmobilemaps.mapscore.shared.graphics.RenderPassInterface> buildRenderPasses()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_buildRenderPasses(this.nativeRef);
        }
        private native ArrayList<io.openmobilemaps.mapscore.shared.graphics.RenderPassInterface> native_buildRenderPasses(long _nativeRef);

        @Override
        public void onAdded(MapInterface mapInterface, int layerIndex)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_onAdded(this.nativeRef, mapInterface, layerIndex);
        }
        private native void native_onAdded(long _nativeRef, MapInterface mapInterface, int layerIndex);

        @Override
        public void onRemoved()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_onRemoved(this.nativeRef);
        }
        private native void native_onRemoved(long _nativeRef);

        @Override
        public void pause()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_pause(this.nativeRef);
        }
        private native void native_pause(long _nativeRef);

        @Override
        public void resume()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_resume(this.nativeRef);
        }
        private native void native_resume(long _nativeRef);

        @Override
        public void hide()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_hide(this.nativeRef);
        }
        private native void native_hide(long _nativeRef);

        @Override
        public void show()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_show(this.nativeRef);
        }
        private native void native_show(long _nativeRef);

        @Override
        public void setAlpha(float alpha)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setAlpha(this.nativeRef, alpha);
        }
        private native void native_setAlpha(long _nativeRef, float alpha);

        @Override
        public float getAlpha()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getAlpha(this.nativeRef);
        }
        private native float native_getAlpha(long _nativeRef);

        @Override
        public void setScissorRect(io.openmobilemaps.mapscore.shared.graphics.common.RectI scissorRect)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setScissorRect(this.nativeRef, scissorRect);
        }
        private native void native_setScissorRect(long _nativeRef, io.openmobilemaps.mapscore.shared.graphics.common.RectI scissorRect);

        @Override
        public LayerReadyState isReadyToRenderOffscreen()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_isReadyToRenderOffscreen(this.nativeRef);
        }
        private native LayerReadyState native_isReadyToRenderOffscreen(long _nativeRef);

        @Override
        public void enableAnimations(boolean enabled)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_enableAnimations(this.nativeRef, enabled);
        }
        private native void native_enableAnimations(long _nativeRef, boolean enabled);

        @Override
        public void setErrorManager(io.openmobilemaps.mapscore.shared.map.ErrorManager errorManager)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setErrorManager(this.nativeRef, errorManager);
        }
        private native void native_setErrorManager(long _nativeRef, io.openmobilemaps.mapscore.shared.map.ErrorManager errorManager);

        @Override
        public void forceReload()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_forceReload(this.nativeRef);
        }
        private native void native_forceReload(long _nativeRef);
    }
}
