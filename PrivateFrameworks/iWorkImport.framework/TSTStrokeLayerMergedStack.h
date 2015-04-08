/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTMutableStrokeLayer, TSTStrokeLayer, TSTStrokeOrderedLayer;

@interface TSTStrokeLayerMergedStack : TSTStrokeLayerAbstractStack {
    TSTMutableStrokeLayer *_clearedMajorStrokeLayer;
    TSTMutableStrokeLayer *_clearedMinorStrokeLayer;
    TSTStrokeOrderedLayer *_customOrderedStrokeLayer;
    TSTStrokeLayer *_customUnorderedStrokeLayer;
    TSTStrokeLayer *_defaultMajorStrokeLayer;
    TSTStrokeLayer *_defaultMinorStrokeLayer;
    TSTStrokeOrderedLayer *_dynamicOrderedStrokeLayer;
    TSTMutableStrokeLayer *_dynamicUnorderedStrokeLayer;
    TSTMutableStrokeLayer *_spillMajorStrokeLayer;
    TSTMutableStrokeLayer *_spillMinorStrokeLayer;
}

@property(retain) TSTMutableStrokeLayer * clearedMajorStrokeLayer;
@property(retain) TSTMutableStrokeLayer * clearedMinorStrokeLayer;
@property(retain) TSTStrokeOrderedLayer * customOrderedStrokeLayer;
@property(retain) TSTStrokeLayer * customUnorderedStrokeLayer;
@property(retain) TSTStrokeLayer * defaultMajorStrokeLayer;
@property(retain) TSTStrokeLayer * defaultMinorStrokeLayer;
@property(retain) TSTStrokeOrderedLayer * dynamicOrderedStrokeLayer;
@property(retain) TSTMutableStrokeLayer * dynamicUnorderedStrokeLayer;
@property(retain) TSTMutableStrokeLayer * spillMajorStrokeLayer;
@property(retain) TSTMutableStrokeLayer * spillMinorStrokeLayer;

+ (float)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 atRowIndex:(int)arg3;
+ (float)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 inRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg3 cachedMax:(float)arg4;
+ (float)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 atColumnIndex:(int)arg3;
+ (float)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 inRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg3 cachedMax:(float)arg4;
+ (id)mergeLeftStrokes:(id)arg1 withRightStrokes:(id)arg2;
+ (id)mergeTopStrokes:(id)arg1 withBottomStrokes:(id)arg2;
+ (float)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 atIndex:(int)arg3;
+ (float)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 inRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg3 cachedMax:(float)arg4;

- (id)clearedMajorStrokeLayer;
- (id)clearedMinorStrokeLayer;
- (id)customOrderedStrokeLayer;
- (id)customUnorderedStrokeLayer;
- (void)dealloc;
- (id)defaultMajorStrokeLayer;
- (id)defaultMinorStrokeLayer;
- (id)dynamicOrderedStrokeLayer;
- (id)dynamicUnorderedStrokeLayer;
- (id)initWithCopyOfMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (id)initWithReferenceOfMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (void)invalidateSpillStrokes;
- (void)lockForRead;
- (void)lockForWrite;
- (float)p_maxWidthOfStrokesInRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1 cachedMax:(float)arg2;
- (float)p_widthOfStrokesAtIndex:(int)arg1;
- (id)portalledStrokeLayer;
- (void)setClearedMajorStrokeLayer:(id)arg1;
- (void)setClearedMinorStrokeLayer:(id)arg1;
- (void)setCustomOrderedStrokeLayer:(id)arg1;
- (void)setCustomUnorderedStrokeLayer:(id)arg1;
- (void)setDefaultMajorStrokeLayer:(id)arg1;
- (void)setDefaultMinorStrokeLayer:(id)arg1;
- (void)setDynamicOrderedStrokeLayer:(id)arg1;
- (void)setDynamicUnorderedStrokeLayer:(id)arg1;
- (void)setSpillMajorStrokeLayer:(id)arg1;
- (void)setSpillMinorStrokeLayer:(id)arg1;
- (id)spillMajorStrokeLayer;
- (id)spillMinorStrokeLayer;
- (id)strokeLayerEnumeration;
- (void)unlock;

@end
