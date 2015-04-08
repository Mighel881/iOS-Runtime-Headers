/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset> {
}

@property(readonly) NSString * presetKind;

+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)layoutProperties;
+ (void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; struct ColumnsArchive {} *x10; struct PaddingArchive {} *x11; unsigned int x12; bool x13; struct Reference {} *x14; }*)arg2 unarchiver:(id)arg3;
+ (id)presetStyleDescriptor;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)saveShapeStyleLayoutPropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; struct ColumnsArchive {} *x10; struct PaddingArchive {} *x11; unsigned int x12; bool x13; struct Reference {} *x14; }*)arg2 archiver:(id)arg3;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (id)defaultParagraphStyle;
- (id)initFromUnarchiver:(id)arg1;
- (SEL)mapThemePropertyMapSelector;
- (id)presetKind;
- (void)saveToArchive:(struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ShapeStyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setDefaultParagraphStyle:(id)arg1;
- (const struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)shapeStyleArchiveFromUnarchiver:(id)arg1;

@end
