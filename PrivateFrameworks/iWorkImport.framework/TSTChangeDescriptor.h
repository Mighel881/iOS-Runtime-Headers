/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSHashTable, TSTCellRegion;

@interface TSTChangeDescriptor : NSObject {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mCellID;
    TSTCellRegion *mCellRegion;
    int mChangeDescriptor;
    NSHashTable *mReferenceIdentifiers;
    TSTCellRegion *mStrokeRegion;
}

@property(readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } cellID;
@property(readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } cellRange;
@property(readonly) TSTCellRegion * cellRegion;
@property(readonly) int changeDescriptor;
@property(readonly) NSHashTable * referenceIdentifiers;
@property(readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } strokeRange;
@property(readonly) TSTCellRegion * strokeRegion;

+ (id)changeDescriptorWithType:(int)arg1;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 cellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 cellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 strokeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 strokeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 strokeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3;
+ (id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 strokeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2;

- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellID;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRange;
- (id)cellRegion;
- (int)changeDescriptor;
- (void)dealloc;
- (id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)referenceIdentifiers;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })strokeRange;
- (id)strokeRegion;

@end
