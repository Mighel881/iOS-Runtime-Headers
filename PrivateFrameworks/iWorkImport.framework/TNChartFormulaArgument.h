/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaArgument : NSObject {
    void *mData;
    int mType;
}

@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; } cellReference;
@property(readonly) BOOL isCellReference;
@property(readonly) BOOL isRangeReference;
@property(readonly) BOOL isReference;
@property(readonly) BOOL isStaticValue;
@property(readonly) struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; } rangeReference;
@property(readonly) struct TSCEValue { unsigned int x1[64]; int x2; }* staticValue;
@property(readonly) int type;

- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })cellReference;
- (void)dealloc;
- (id)description;
- (id)initWithCellReference:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1;
- (id)initWithRangeReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (id)initWithStaticValue:(const struct TSCEValue { unsigned int x1[64]; int x2; }*)arg1;
- (BOOL)isCellReference;
- (BOOL)isRangeReference;
- (BOOL)isReference;
- (BOOL)isStaticValue;
- (struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReference;
- (struct TSCEValue { unsigned int x1[64]; int x2; }*)staticValue;
- (int)type;

@end
