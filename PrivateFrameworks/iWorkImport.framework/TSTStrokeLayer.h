/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying> {
    unsigned short _columnOrRowIndex;
    struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> > { 
        struct TSTStrokeLayerRun {} *__begin_; 
        struct TSTStrokeLayerRun {} *__end_; 
        struct __compressed_pair<TSTStrokeLayerRun *, std::__1::allocator<TSTStrokeLayerRun> > { 
            struct TSTStrokeLayerRun {} *__first_; 
        } __end_cap_; 
    } mStrokeRuns;
}

@property unsigned short columnOrRowIndex;
@property(readonly) BOOL isEmpty;

+ (id)strokeLayer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned short)columnOrRowIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateStrokesUsingBlock:(id)arg1;
- (id)findStrokeAndRangeAtIndex:(int)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 columnOrRowIndex:(unsigned short)arg2;
- (BOOL)isEmpty;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextStrokeAndRange:(id)arg1;
- (void)p_appendStroke:(id)arg1 inRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2 order:(int)arg3;
- (void)p_flattenStrokeOrder;
- (void)p_insertSpaceAtRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (void)p_invalidate;
- (void)p_invalidateRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (void)p_mergeStrokeRunsAtPosition:(unsigned int)arg1;
- (void)p_removeRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (void)p_setStroke:(id)arg1 inRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2 order:(int)arg3;
- (void)p_setStrokeRuns:(struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> > { struct TSTStrokeLayerRun {} *x1; struct TSTStrokeLayerRun {} *x2; struct __compressed_pair<TSTStrokeLayerRun *, std::__1::allocator<TSTStrokeLayerRun> > { struct TSTStrokeLayerRun {} *x_3_1_1; } x3; })arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setColumnOrRowIndex:(unsigned short)arg1;
- (int)startingIndex;
- (id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (id)strokeLayerModifiedUsingMoveDelegate:(id)arg1;

@end
