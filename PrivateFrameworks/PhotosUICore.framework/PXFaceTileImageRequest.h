/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFaceTileImageRequest : NSObject {
    PHAsset * _assetContainingFace;
    NSString * _cacheKey;
    BOOL  _canceled;
    PHFace * _face;
    BOOL  _fullResMissing;
    int  _imageManagerRequestID;
    struct CGSize { 
        float width; 
        float height; 
    }  _lastDeliveredSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _normalizedActualFaceRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _normalizedFaceCropRect;
    PHObject * _originalRequestObject;
    struct PXFaceTileImageParams { 
        struct CGSize { 
            float width; 
            float height; 
        } targetSize; 
        unsigned int cropFactor; 
        BOOL round; 
        BOOL cropBounded; 
        BOOL acceptsVeryLowQuality; 
        BOOL wantsNonVisibleFaceCompletion; 
    }  _params;
    int  _requestID;
}

@property (nonatomic, retain) PHAsset *assetContainingFace;
@property (nonatomic, readonly) NSString *cacheKey;
@property (getter=isCanceled) BOOL canceled;
@property (nonatomic, retain) PHFace *face;
@property (getter=isFullResMissing) BOOL fullResMissing;
@property int imageManagerRequestID;
@property (nonatomic) struct CGSize { float x1; float x2; } lastDeliveredSize;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } normalizedActualFaceRect;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } normalizedFaceCropRect;
@property (nonatomic, retain) PHObject *originalRequestObject;
@property (nonatomic, readonly) struct PXFaceTileImageParams { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } params;
@property (nonatomic, readonly) int requestID;

- (void).cxx_destruct;
- (id)assetContainingFace;
- (id)cacheKey;
- (void)cancel;
- (id)face;
- (int)imageManagerRequestID;
- (id)initWithFace:(id)arg1 cacheKey:(id)arg2 params:(struct PXFaceTileImageParams { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; })arg3;
- (BOOL)isCanceled;
- (BOOL)isFullResMissing;
- (struct CGSize { float x1; float x2; })lastDeliveredSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })normalizedActualFaceRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })normalizedFaceCropRect;
- (id)originalRequestObject;
- (struct PXFaceTileImageParams { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; })params;
- (int)requestID;
- (void)setAssetContainingFace:(id)arg1;
- (void)setCanceled:(BOOL)arg1;
- (void)setFace:(id)arg1;
- (void)setFullResMissing:(BOOL)arg1;
- (void)setImageManagerRequestID:(int)arg1;
- (void)setLastDeliveredSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNormalizedActualFaceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNormalizedFaceCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOriginalRequestObject:(id)arg1;

@end
