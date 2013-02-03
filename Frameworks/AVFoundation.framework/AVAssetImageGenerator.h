/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetImageGeneratorInternal, NSString, AVVideoComposition;

@interface AVAssetImageGenerator : NSObject {
    AVAssetImageGeneratorInternal *_priv;
}

@property(copy) NSString * apertureMode;
@property BOOL appliesPreferredTrackTransform;
@property struct CGSize { float x1; float x2; } maximumSize;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceAfter;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceBefore;
@property(copy) AVVideoComposition * videoComposition;

+ (id)assetImageGeneratorWithAsset:(id)arg1;

- (id)_NSErrorForError:(long)arg1;
- (struct CGImage { }*)_copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingAssetReader:(id)arg2 error:(id*)arg3;
- (struct __CFDictionary { }*)_createPixelBufferAttributesWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_didGenerateCGImage:(id)arg1;
- (void)_ensureFigAssetImageGenerator;
- (void)_failedToGenerateCGImage:(id)arg1;
- (id)_makeAutoreleasedAssetReader;
- (id)_optionsDictionary;
- (id)_requestWithRequestID:(id)arg1;
- (struct CGSize { float x1; float x2; })_scaledSizeForRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_serverDied;
- (id)apertureMode;
- (BOOL)appliesPreferredTrackTransform;
- (void)cancelAllCGImageGeneration;
- (struct CGImage { }*)copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(id*)arg3;
- (void)dealloc;
- (void)finalize;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(id)arg2;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (struct CGSize { float x1; float x2; })maximumSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceAfter;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceBefore;
- (void)setApertureMode:(id)arg1;
- (void)setAppliesPreferredTrackTransform:(BOOL)arg1;
- (void)setMaximumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRequestedTimeToleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRequestedTimeToleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;

@end
