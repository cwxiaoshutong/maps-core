// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#import "MCQuadCoord.h"


@implementation MCQuadCoord

- (nonnull instancetype)initWithTopLeft:(nonnull MCCoord *)topLeft
                               topRight:(nonnull MCCoord *)topRight
                            bottomRight:(nonnull MCCoord *)bottomRight
                             bottomLeft:(nonnull MCCoord *)bottomLeft
{
    if (self = [super init]) {
        _topLeft = topLeft;
        _topRight = topRight;
        _bottomRight = bottomRight;
        _bottomLeft = bottomLeft;
    }
    return self;
}

+ (nonnull instancetype)quadCoordWithTopLeft:(nonnull MCCoord *)topLeft
                                    topRight:(nonnull MCCoord *)topRight
                                 bottomRight:(nonnull MCCoord *)bottomRight
                                  bottomLeft:(nonnull MCCoord *)bottomLeft
{
    return [[self alloc] initWithTopLeft:topLeft
                                topRight:topRight
                             bottomRight:bottomRight
                              bottomLeft:bottomLeft];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[MCQuadCoord class]]) {
        return NO;
    }
    MCQuadCoord *typedOther = (MCQuadCoord *)other;
    return [self.topLeft isEqual:typedOther.topLeft] &&
            [self.topRight isEqual:typedOther.topRight] &&
            [self.bottomRight isEqual:typedOther.bottomRight] &&
            [self.bottomLeft isEqual:typedOther.bottomLeft];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.topLeft.hash ^
            self.topRight.hash ^
            self.bottomRight.hash ^
            self.bottomLeft.hash;
}

- (NSComparisonResult)compare:(MCQuadCoord *)other
{
    NSComparisonResult tempResult;
    tempResult = [self.topLeft compare:other.topLeft];
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    tempResult = [self.topRight compare:other.topRight];
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    tempResult = [self.bottomRight compare:other.bottomRight];
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    tempResult = [self.bottomLeft compare:other.bottomLeft];
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    return NSOrderedSame;
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p topLeft:%@ topRight:%@ bottomRight:%@ bottomLeft:%@>", self.class, (void *)self, self.topLeft, self.topRight, self.bottomRight, self.bottomLeft];
}

#endif
@end
