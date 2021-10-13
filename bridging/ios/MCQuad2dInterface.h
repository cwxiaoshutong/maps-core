// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#import "MCQuad2dD.h"
#import "MCRectD.h"
#import "MCRenderingContextInterface.h"
#import <Foundation/Foundation.h>
@protocol MCGraphicsObjectInterface;
@protocol MCMaskingObjectInterface;
@protocol MCTextureHolderInterface;


@protocol MCQuad2dInterface

- (void)setFrame:(nonnull MCQuad2dD *)frame
textureCoordinates:(nonnull MCRectD *)textureCoordinates;

- (void)loadTexture:(nullable id<MCRenderingContextInterface>)context
      textureHolder:(nullable id<MCTextureHolderInterface>)textureHolder;

- (void)removeTexture;

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject;

- (nullable id<MCMaskingObjectInterface>)asMaskingObject;

@end
