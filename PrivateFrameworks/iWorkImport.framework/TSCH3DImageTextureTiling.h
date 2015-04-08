/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling {
    int _face;
    int _mode;
    BOOL _reveal;
    int _sContinuity;
    int _tContinuity;
    int _wrap;
    int _xPosition;
    int _yPosition;
}

@property int face;
@property int mode;
@property BOOL reveal;
@property int scontinuity;
@property int tcontinuity;
@property int wrap;
@property int xposition;
@property int yposition;

+ (id)instanceWithArchive:(const struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DBaseImageTextureTilingArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; bool x13; }*)arg1 unarchiver:(id)arg2;

- (void)copyFromBaseImageTextureTiling:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)face;
- (unsigned int)hash;
- (id)initWithArchive:(const struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DBaseImageTextureTilingArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; bool x13; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)mode;
- (void)restoreDefault;
- (BOOL)reveal;
- (void)saveToArchive:(struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DBaseImageTextureTilingArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; bool x13; }*)arg1 archiver:(id)arg2;
- (int)scontinuity;
- (void)setFace:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setReveal:(BOOL)arg1;
- (void)setScontinuity:(int)arg1;
- (void)setTcontinuity:(int)arg1;
- (void)setWrap:(int)arg1;
- (void)setXposition:(int)arg1;
- (void)setYposition:(int)arg1;
- (int)tcontinuity;
- (int)wrap;
- (int)xposition;
- (int)yposition;

@end
