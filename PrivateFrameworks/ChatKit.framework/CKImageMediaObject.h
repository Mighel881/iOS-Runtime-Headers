/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKImageData, UIImage;

@interface CKImageMediaObject : CKMediaObject {
    CKImageData *_backgroundImageData;
    CKImageData *_imageData;
    UIImage *_thumbnail;
}

@property(retain,readonly) CKImageData * imageData;
@property(retain) UIImage * thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (BOOL)isPreviewable;

- (struct CGSize { float x1; float x2; })bbSize;
- (BOOL)canExport;
- (void)dealloc;
- (void)export:(id)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)imageData;
- (id)location;
- (int)mediaType;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end
