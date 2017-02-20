/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSImageAttachmentData : UNSAttachmentData <UNSAttachmentThumbnailProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)isFileValid:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForThumbnailOptions:(id)arg1;
- (id)thumbnailPNGOfSize:(struct CGSize { float x1; float x2; })arg1 forThumbnailOptions:(id)arg2;

@end
