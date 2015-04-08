/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSArray, NSString;

@interface ICCameraDevice : ICDevice {
    void *_cameraProperties;
}

@property(getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;
@property BOOL allowsSyncingClock;
@property(readonly) unsigned int batteryLevel;
@property(readonly) BOOL batteryLevelAvailable;
@property BOOL beingEjected;
@property unsigned int contentCatalogPercentCompleted;
@property(readonly) NSArray * contents;
@property(getter=isEjectable) BOOL ejectable;
@property unsigned int estimatedNumberOfDownloadableItems;
@property(getter=isLocked) BOOL locked;
@property(readonly) NSArray * mediaFiles;
@property(readonly) NSArray * notifyArray;
@property unsigned int numberOfDownloadableItems;
@property(readonly) double timeOffset;
@property(copy) NSString * volumePath;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)addFolder:(id)arg1;
- (void)addObjectToNotifyArray:(id)arg1;
- (void)addToMetadataFetchQ:(id)arg1;
- (void)addToThumbnailFetchQ:(id)arg1;
- (BOOL)allowsSyncingClock;
- (unsigned int)batteryLevel;
- (BOOL)batteryLevelAvailable;
- (BOOL)beingEjected;
- (void)cancelDownload;
- (void)clearNotifyArray;
- (unsigned int)contentCatalogPercentCompleted;
- (id)contents;
- (void)dealloc;
- (void)decrementEstimatedNumberOfDownloadableItems;
- (void)decrementNumberOfDownloadableItems;
- (id)description;
- (id)deviceQSemaphore;
- (double)downloadCancelTimestamp;
- (unsigned int)estimatedNumberOfDownloadableItems;
- (id)filesOfType:(id)arg1;
- (void)finalize;
- (id)generalQ;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)incrementEstimatedNumberOfDownloadableItems;
- (void)incrementNumberOfDownloadableItems;
- (id)init;
- (BOOL)isAccessRestrictedAppleDevice;
- (BOOL)isEjectable;
- (BOOL)isLocked;
- (id)mediaFiles;
- (id)notifyArray;
- (void)notifyDelegateOfAddedItem:(id)arg1;
- (void)notifyDelegateOfAddedItems:(id)arg1;
- (unsigned int)numberOfDownloadableItems;
- (void)pendNotifyingDelegateOfAddedItem:(id)arg1;
- (void)receivedDeviceCommandCompletion;
- (void)removeFolder:(id)arg1;
- (void)requestCloseSession;
- (void)requestDeleteFiles:(id)arg1;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)requestEject;
- (void)requestOpenSession;
- (void)requestSyncClock;
- (void)setAccessRestrictedAppleDevice:(BOOL)arg1;
- (void)setAllowsSyncingClock:(BOOL)arg1;
- (void)setBeingEjected:(BOOL)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned int)arg1;
- (void)setEjectable:(BOOL)arg1;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned int)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setNumberOfDownloadableItems:(unsigned int)arg1;
- (void)setVolumePath:(id)arg1;
- (double)timeOffset;
- (id)volumePath;

@end
