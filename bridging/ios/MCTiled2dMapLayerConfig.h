// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#import "MCTiled2dMapZoomInfo.h"
#import "MCTiled2dMapZoomLevelInfo.h"
#import <Foundation/Foundation.h>


@protocol MCTiled2dMapLayerConfig

- (nonnull NSString *)getCoordinateSystemIdentifier;

- (nonnull NSString *)getTileUrl:(int32_t)x
                               y:(int32_t)y
                            zoom:(int32_t)zoom;

- (nonnull NSArray<MCTiled2dMapZoomLevelInfo *> *)getZoomLevelInfos;

- (nonnull MCTiled2dMapZoomInfo *)getZoomInfo;

- (nonnull NSString *)getLayerName;

@end
