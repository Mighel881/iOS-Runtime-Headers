/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSDictionary, NSIndexSet, TSCHChartDrawableLayoutLegendResizer, TSCHChartInfo, TSCHChartLayout, TSCHChartModel, TSDLayoutGeometry;

@interface TSCHChartDrawableLayout : TSWPTextHostLayout {
    struct { 
        unsigned int chartLayoutState : 1; 
        unsigned int chartLayoutStructure : 1; 
    } mChartInvalidFlags;
    TSCHChartLayout *mChartLayout;
    BOOL mInResize;
    TSDLayoutGeometry *mLastChartAreaGeometry;
    TSDLayoutGeometry *mLastPureGeometry;
    TSDLayoutGeometry *mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;
    TSDLayoutGeometry *mLegendGeometryForResize;
    TSCHChartDrawableLayoutLegendResizer *mLegendResizer;
    struct CGSize { 
        float width; 
        float height; 
    } mMinSizeCache;
    BOOL mSuppressChartLayoutInvalidation;
}

@property(readonly) TSCHChartInfo * chartInfo;
@property(retain,readonly) TSCHChartLayout * chartLayout;
@property unsigned int dataSetIndex;
@property(readonly) BOOL is3DChart;
@property(copy) TSDLayoutGeometry * legendGeometry;
@property(copy) TSDLayoutGeometry * legendModelGeometry;
@property(readonly) TSCHChartModel * model;
@property(retain,readonly) TSCHChartLayout * p_chartLayout;
@property(retain) TSCHChartLayout * p_chartLayoutNoCreate;
@property(copy) TSDLayoutGeometry * p_lastChartAreaGeometry;
@property(copy) TSDLayoutGeometry * p_lastPureGeometry;
@property(copy) TSDLayoutGeometry * p_legendGeometryForResize;
@property(retain) TSCHChartDrawableLayoutLegendResizer * p_legendResizer;
@property(readonly) NSIndexSet * pieWedgeExplosionSeriesIndices;
@property(copy) NSArray * pieWedgeExplosions;
@property(copy) NSDictionary * seriesIndexedPieWedgeExplosions;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (BOOL)canRotateChildLayout:(id)arg1;
- (BOOL)changesShouldClearLayout:(id)arg1;
- (BOOL)changesShouldSetNeedsLayout:(id)arg1;
- (id)chartDrawableInfo;
- (id)chartInfo;
- (id)chartLayout;
- (id)computeInfoGeometryDuringResize;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (unsigned int)dataSetIndex;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForCulling;
- (id)i_computeUnitedWrapPath;
- (id)i_computeWrapPath;
- (id)initWithInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insertionFrame;
- (void)invalidate;
- (void)invalidateChartLayoutState;
- (void)invalidateChartLayoutStructure;
- (void)invalidateSize;
- (BOOL)is3DChart;
- (id)layoutGeometryFromInfo;
- (id)legendGeometry;
- (id)legendModelGeometry;
- (struct CGSize { float x1; float x2; })minimumSize;
- (id)model;
- (void)offsetGeometryBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_addEdgeAlignmentGuidesForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 array:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_addMultiDataControlToInlineWrapBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)p_approximateMultiDataControlUnscaledHeight;
- (float)p_approximateMultiDataControlUnscaledMinimumWidth;
- (float)p_approximatedAdditionalHeightForMultiDataControlWithMinimumAccommodatingScale:(float)arg1;
- (struct CGSize { float x1; float x2; })p_calcMinSize;
- (id)p_chartLayout;
- (id)p_chartLayout2D;
- (id)p_chartLayoutNoCreate;
- (void)p_clearChartLayout;
- (id)p_constrainAndResizePureGeometry:(id)arg1 withValidChartLayout:(id)arg2 toChartAreaGeometry:(id*)arg3 toShadowGeometry:(id*)arg4 toInfoGeometry:(id*)arg5;
- (void)p_convertValidChartLayout:(id)arg1 andInfoGeometry:(id)arg2 toPureGeometry:(id*)arg3 toChartAreaGeometry:(id*)arg4 toShadowGeometry:(id*)arg5;
- (void)p_forceValidateChartLayout;
- (BOOL)p_isPrintingInBackground;
- (BOOL)p_isRenderingForKPF;
- (id)p_lastChartAreaGeometry;
- (id)p_lastPureGeometry;
- (id)p_legendGeometryForResize;
- (id)p_legendResizer;
- (void)p_postLayoutPropertyValueDidChangeNotification;
- (void)p_setLegendGeometry:(id)arg1 fromTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 onLayout:(id)arg3 shouldUpdateLayoutItemSize:(BOOL)arg4;
- (void)p_setLegendSize:(struct CGSize { float x1; float x2; })arg1;
- (void)p_validateChartLayout;
- (id)pieWedgeExplosionSeriesIndices;
- (id)pieWedgeExplosions;
- (id)pieWedgeExplosionsForSeriesIndices:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)propertiesThatInvalidateLayout;
- (id)renderersWithRep:(id)arg1;
- (Class)repClassOverride;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setChartLayoutPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)setDataSetIndex:(unsigned int)arg1;
- (void)setLegendGeometry:(id)arg1;
- (void)setLegendModelGeometry:(id)arg1;
- (void)setP_chartLayoutNoCreate:(id)arg1;
- (void)setP_lastChartAreaGeometry:(id)arg1;
- (void)setP_lastPureGeometry:(id)arg1;
- (void)setP_legendGeometryForResize:(id)arg1;
- (void)setP_legendResizer:(id)arg1;
- (void)setPieWedgeExplosions:(id)arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (BOOL)supportsParentRotation;
- (void)take3DDepth;
- (void)validate;
- (float)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(float)arg2;
- (id)visibleGeometries;
- (int)wrapFitType;

@end
