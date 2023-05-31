// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCShaderProgramInterface.h"
#import <Foundation/Foundation.h>
@protocol MCLineGroup2dInterface;
@protocol MCPolygon2dInterface;
@protocol MCPolygonGroup2dInterface;
@protocol MCPolygonPatternGroup2dInterface;
@protocol MCQuad2dInstancedInterface;
@protocol MCQuad2dInterface;
@protocol MCQuad2dStretchedInstancedInterface;
@protocol MCTextInstancedInterface;
@protocol MCTextInterface;


@protocol MCGraphicsObjectFactoryInterface

- (nullable id<MCQuad2dInterface>)createQuad:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCPolygon2dInterface>)createPolygon:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCQuad2dInstancedInterface>)createQuadInstanced:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCQuad2dStretchedInstancedInterface>)createQuadStretchedInstanced:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCLineGroup2dInterface>)createLineGroup:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCPolygonGroup2dInterface>)createPolygonGroup:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCPolygonPatternGroup2dInterface>)createPolygonPatternGroup:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCQuad2dInterface>)createQuadMask;

- (nullable id<MCPolygon2dInterface>)createPolygonMask;

- (nullable id<MCTextInterface>)createText:(nullable id<MCShaderProgramInterface>)shader;

- (nullable id<MCTextInstancedInterface>)createTextInstanced:(nullable id<MCShaderProgramInterface>)shader;

@end
