// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from text.djinni

#import "MCCoord.h"
#import "MCFont.h"
#import <Foundation/Foundation.h>
@protocol MCTextInfoInterface;


@interface MCTextFactory : NSObject

+ (nullable id<MCTextInfoInterface>)createText:(nonnull NSString *)text
                                    coordinate:(nonnull MCCoord *)coordinate
                                          font:(nonnull MCFont *)font;

@end