/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxis : TSCHChartAxis {
    int mRangeContinuousCache;
}

+ (id)axisForInfo:(id)arg1;
+ (unsigned char)styleOwnerPathType;

- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (void)dealloc;
- (id)defaultProperties;
- (id)g_genericToSpecificPropertyMap;
- (unsigned int)indexForSelectionPathLabelIndex:(unsigned int)arg1;
- (BOOL)isCategory;
- (BOOL)isRangeContinuous;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> { id x1; id x2; })labelEnumeratorPair;
- (id)p_getGenericToCategoryPropertyMap;
- (id)p_getGenericToCategoryPropertyMapForMultiData;
- (id)p_getGenericToCategoryPropertyMapForNonMultiData;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;

@end
