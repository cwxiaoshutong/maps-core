// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#import "MCRenderVerticesDescription.h"


@implementation MCRenderVerticesDescription

- (nonnull instancetype)initWithVertices:(nonnull NSArray<MCVec2D *> *)vertices
                              styleIndex:(int32_t)styleIndex
{
    if (self = [super init]) {
        _vertices = [vertices copy];
        _styleIndex = styleIndex;
    }
    return self;
}

+ (nonnull instancetype)renderVerticesDescriptionWithVertices:(nonnull NSArray<MCVec2D *> *)vertices
                                                   styleIndex:(int32_t)styleIndex
{
    return [(MCRenderVerticesDescription*)[self alloc] initWithVertices:vertices
                                                             styleIndex:styleIndex];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p vertices:%@ styleIndex:%@>", self.class, (void *)self, self.vertices, @(self.styleIndex)];
}

@end