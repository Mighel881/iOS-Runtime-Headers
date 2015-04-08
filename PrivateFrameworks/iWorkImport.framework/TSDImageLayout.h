/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout, TSDPathSource<TSDSmartPathSource>, TSUBezierPath;

@interface TSDImageLayout : TSDMediaLayout <TSDShapeControlLayout> {
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    TSDImageAdjustments *mDynamicImageAdjustments;
    TSDInfoGeometry *mDynamicInfoGeometry;
    int mHasAlpha;
    TSDLayoutGeometry *mImageGeometry;
    BOOL mInInstantAlphaMode;
    BOOL mIsUpdatingImageAdjustments;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mLayoutToImageTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mLayoutToMaskTransform;
    int mMaskEditMode;
    BOOL mMaskIntersectsImage;
    TSDMaskLayout *mMaskLayout;
    struct CGPath { } *mPathToStroke;
    BOOL mScalingInMaskMode;
    TSUBezierPath *mTracedPath;
}

@property(readonly) TSDPathSource<TSDSmartPathSource> * smartPathSource;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeAlignmentFrameInRoot:(BOOL)arg1;
- (id)computeLayoutGeometry;
- (id)currentInfoGeometry;
- (void)dealloc;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (BOOL)hasAlpha;
- (BOOL)hasMaskingPath;
- (id)i_computeWrapPath;
- (id)imageAdjustments;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })imageDataToVisualSizeTransform;
- (id)imageGeometry;
- (id)imageGeometryInRoot;
- (id)imageInfo;
- (id)initWithInfo:(id)arg1;
- (BOOL)isDynamicallyChangingImageAdjustments;
- (BOOL)isInvisible;
- (id)layoutGeometryFromInfo;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutToImageTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutToMaskTransform;
- (id)maskLayout;
- (void)offsetGeometryBy:(struct CGPoint { float x1; float x2; })arg1;
- (id)originalImageGeometry;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pathBoundsWithoutStroke;
- (struct CGPath { }*)pathToStroke;
- (struct CGSize { float x1; float x2; })sizeOfFrameRectIncludingCoverage;
- (id)smartPathSource;
- (BOOL)supportsRotation;
- (void)updateChildrenFromInfo;

@end
