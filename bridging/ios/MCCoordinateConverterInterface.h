// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#import "MCCoord.h"
#import <Foundation/Foundation.h>


@protocol MCCoordinateConverterInterface

- (nonnull MCCoord *)convert:(nonnull MCCoord *)coordinate;

- (nonnull NSString *)getFrom;

- (nonnull NSString *)getTo;

@end