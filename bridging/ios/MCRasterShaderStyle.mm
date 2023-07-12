// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#import "MCRasterShaderStyle.h"


@implementation MCRasterShaderStyle

- (nonnull instancetype)initWithOpacity:(float)opacity
                          brightnessMin:(float)brightnessMin
                          brightnessMax:(float)brightnessMax
                               contrast:(float)contrast
                             saturation:(float)saturation
                                  gamma:(float)gamma
{
    if (self = [super init]) {
        _opacity = opacity;
        _brightnessMin = brightnessMin;
        _brightnessMax = brightnessMax;
        _contrast = contrast;
        _saturation = saturation;
        _gamma = gamma;
    }
    return self;
}

+ (nonnull instancetype)rasterShaderStyleWithOpacity:(float)opacity
                                       brightnessMin:(float)brightnessMin
                                       brightnessMax:(float)brightnessMax
                                            contrast:(float)contrast
                                          saturation:(float)saturation
                                               gamma:(float)gamma
{
    return [[self alloc] initWithOpacity:opacity
                           brightnessMin:brightnessMin
                           brightnessMax:brightnessMax
                                contrast:contrast
                              saturation:saturation
                                   gamma:gamma];
}

+ (MCRasterShaderStyle * __nonnull)defaultStyle
{
    static MCRasterShaderStyle * const s_defaultStyle = [[MCRasterShaderStyle alloc] initWithOpacity:1.0f
            brightnessMin:0.0f
            brightnessMax:1.0f
            contrast:0.0f
            saturation:0.0f
            gamma:1.0f];
    return s_defaultStyle;
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[MCRasterShaderStyle class]]) {
        return NO;
    }
    MCRasterShaderStyle *typedOther = (MCRasterShaderStyle *)other;
    return self.opacity == typedOther.opacity &&
            self.brightnessMin == typedOther.brightnessMin &&
            self.brightnessMax == typedOther.brightnessMax &&
            self.contrast == typedOther.contrast &&
            self.saturation == typedOther.saturation &&
            self.gamma == typedOther.gamma;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            (NSUInteger)self.opacity ^
            (NSUInteger)self.brightnessMin ^
            (NSUInteger)self.brightnessMax ^
            (NSUInteger)self.contrast ^
            (NSUInteger)self.saturation ^
            (NSUInteger)self.gamma;
}

- (NSComparisonResult)compare:(MCRasterShaderStyle *)other
{
    NSComparisonResult tempResult;
    if (self.opacity < other.opacity) {
        tempResult = NSOrderedAscending;
    } else if (self.opacity > other.opacity) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    if (self.brightnessMin < other.brightnessMin) {
        tempResult = NSOrderedAscending;
    } else if (self.brightnessMin > other.brightnessMin) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    if (self.brightnessMax < other.brightnessMax) {
        tempResult = NSOrderedAscending;
    } else if (self.brightnessMax > other.brightnessMax) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    if (self.contrast < other.contrast) {
        tempResult = NSOrderedAscending;
    } else if (self.contrast > other.contrast) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    if (self.saturation < other.saturation) {
        tempResult = NSOrderedAscending;
    } else if (self.saturation > other.saturation) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    if (self.gamma < other.gamma) {
        tempResult = NSOrderedAscending;
    } else if (self.gamma > other.gamma) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    return NSOrderedSame;
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p opacity:%@ brightnessMin:%@ brightnessMax:%@ contrast:%@ saturation:%@ gamma:%@>", self.class, (void *)self, @(self.opacity), @(self.brightnessMin), @(self.brightnessMax), @(self.contrast), @(self.saturation), @(self.gamma)];
}

#endif
@end
