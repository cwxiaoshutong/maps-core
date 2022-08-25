// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#import "MCLoaderInterface.h"
#import "MCTiled2dMapLayerConfig.h"
#import "MCTiled2dMapRasterLayerInterface.h"
#import "MCTiled2dMapZoomInfo.h"
#import "MCWmtsLayerDescription.h"
#import <Foundation/Foundation.h>
@class MCWmtsCapabilitiesResource;


@interface MCWmtsCapabilitiesResource : NSObject

+ (nullable MCWmtsCapabilitiesResource *)create:(nonnull NSString *)xml;

- (nullable MCTiled2dMapRasterLayerInterface *)createLayer:(nonnull NSString *)identifier
                                               tileLoaders:(nonnull NSArray<id<MCLoaderInterface>> *)tileLoaders;

- (nullable MCTiled2dMapRasterLayerInterface *)createLayerWithZoomInfo:(nonnull NSString *)identifier
                                                           tileLoaders:(nonnull NSArray<id<MCLoaderInterface>> *)tileLoaders
                                                              zoomInfo:(nonnull MCTiled2dMapZoomInfo *)zoomInfo;

- (nullable id<MCTiled2dMapLayerConfig>)createLayerConfig:(nonnull NSString *)identifier;

- (nullable id<MCTiled2dMapLayerConfig>)createLayerConfigWithZoomInfo:(nonnull NSString *)identifier
                                                             zoomInfo:(nonnull MCTiled2dMapZoomInfo *)zoomInfo;

- (nonnull NSArray<MCWmtsLayerDescription *> *)getAllLayers;

@end
