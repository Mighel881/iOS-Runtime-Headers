/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCH3DFixedFunctionLightingModel : TSCH3DPhongLikeLightingModel {
}

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 unarchiver:(id)arg2;
+ (Class)materialEffectClass;

- (id)initWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 archiver:(id)arg2;

@end
