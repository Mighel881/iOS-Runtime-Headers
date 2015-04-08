/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSUColor;

@interface TSDGradientStop : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    TSUColor *mColor;
    float mFraction;
    float mInflection;
}

@property(copy,readonly) TSUColor * color;
@property(readonly) float fraction;
@property(readonly) float inflection;

+ (id)gradientStopWithColor:(id)arg1 fraction:(float)arg2;
+ (id)gradientStopWithColor:(id)arg1 fraction:(float)arg2 inflection:(float)arg3;

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (float)fraction;
- (id)gradientStopWithColor:(id)arg1;
- (id)gradientStopWithInflection:(float)arg1;
- (unsigned int)hash;
- (float)inflection;
- (id)initWithArchive:(const struct GradientArchive_GradientStop { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; }*)arg1 unarchiver:(id)arg2;
- (id)initWithColor:(id)arg1 fraction:(float)arg2;
- (id)initWithColor:(id)arg1 fraction:(float)arg2 inflection:(float)arg3;
- (id)initWithGradientStop:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)p_setColor:(id)arg1;
- (void)p_setFraction:(float)arg1;
- (void)p_setInflection:(float)arg1;
- (void)saveToArchive:(struct GradientArchive_GradientStop { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; }*)arg1 archiver:(id)arg2;

@end
