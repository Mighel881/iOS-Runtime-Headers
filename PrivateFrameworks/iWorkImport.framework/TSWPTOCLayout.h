/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPTOCLayoutHint;

@interface TSWPTOCLayout : TSWPShapeLayout {
    TSWPTOCLayoutHint *_hint;
    unsigned int _initialCharIndex;
    struct CGSize { 
        float width; 
        float height; 
    } _maxSize;
}

@property(readonly) TSWPTOCLayoutHint * hint;
@property(readonly) unsigned int initialCharIndex;
@property(getter=isLastLayoutInTOC,readonly) BOOL lastLayoutInTOC;
@property struct CGSize { float x1; float x2; } maxSize;

- (id).cxx_construct;
- (struct CGSize { float x1; float x2; })adjustedInsetsForTarget:(id)arg1;
- (BOOL)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;
- (id)childSearchTargets;
- (unsigned int)columnCount;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (id)hint;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 initialCharIndex:(unsigned int)arg2 maxSize:(struct CGSize { float x1; float x2; })arg3;
- (unsigned int)initialCharIndex;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (BOOL)isDraggable;
- (BOOL)isLastLayoutInTOC;
- (BOOL)isSelectable;
- (id)layoutMargins;
- (void)layoutSearchForString:(id)arg1 options:(unsigned int)arg2 hitBlock:(id)arg3;
- (float)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })maxSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float*)arg4 outGap:(float*)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shrinkTextToFit;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;

@end
