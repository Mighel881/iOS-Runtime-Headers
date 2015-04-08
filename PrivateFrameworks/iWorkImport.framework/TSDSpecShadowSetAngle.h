/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDSpecShadowSetAngle : TSDSpecShadow {
    double _angle;
}

+ (id)newFromArchive:(const struct SpecShadowSetAngleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecShadowSetAngleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg2 archiver:(id)arg3;

- (id)apply:(id)arg1;
- (BOOL)canApplyOnObject:(id)arg1;
- (id)initSpecShadowSetAngleWithArchive:(const struct SpecShadowSetAngleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithCurrentProperty:(id)arg1;
- (id)operationPropertyName;
- (void)saveSpecShadowSetAngleToArchive:(struct SpecShadowSetAngleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 archiver:(id)arg2;
- (id)shadowModifiedFromShadow:(id)arg1;

@end
