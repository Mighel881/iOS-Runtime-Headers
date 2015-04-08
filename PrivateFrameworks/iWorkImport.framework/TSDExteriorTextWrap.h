/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying> {
    float _alphaThreshold;
    int _direction;
    int _fitType;
    BOOL _isHTMLWrap;
    float _margin;
    int _type;
}

@property(readonly) float alphaThreshold;
@property(readonly) int direction;
@property(readonly) int fitType;
@property(readonly) BOOL isHTMLWrap;
@property(readonly) float margin;
@property(readonly) int type;

+ (id)exteriorTextWrap;
+ (id)exteriorTextWrapWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(float)arg5 alphaThreshold:(float)arg6;

- (float)alphaThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)direction;
- (int)fitType;
- (id)init;
- (id)initWithArchive:(const struct ExteriorTextWrapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; bool x10; }*)arg1;
- (id)initWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(float)arg5 alphaThreshold:(float)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHTMLWrap;
- (float)margin;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)saveToArchive:(struct ExteriorTextWrapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; bool x10; }*)arg1 archiver:(id)arg2;
- (int)type;

@end
