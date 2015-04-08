/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUAlbumStreamActivityDelegate>, NSObject<PLUserEditableAlbumProtocol>, NSString, PUActivityItemSourceController, PUPhotoStreamComposeServiceViewController, PUVideoTrimQueueController, UIViewController;

@interface PUAlbumStreamActivity : PUActivity <PUPhotoStreamComposeServiceDelegate, PUVideoTrimQueueControllerDelegate> {
    UIViewController *_activityController;
    <PUAlbumStreamActivityDelegate> *_delegate;
    BOOL _destinationAlbumWasCreated;
    NSObject<PLUserEditableAlbumProtocol> *_destinationStreamingAlbum;
    double _endTime;
    BOOL _isPresentedFromActivityViewController;
    PUActivityItemSourceController *_itemSourceController;
    UIViewController *_presenterViewController;
    UIViewController *_referenceViewController;
    double _startTime;
    PUPhotoStreamComposeServiceViewController *_streamComposeVc;
    PUVideoTrimQueueController *_trimController;
}

@property(copy,readonly) NSString * debugDescription;
@property <PUAlbumStreamActivityDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL destinationAlbumWasCreated;
@property(retain) NSObject<PLUserEditableAlbumProtocol> * destinationStreamingAlbum;
@property(readonly) unsigned int hash;
@property(setter=setPresentedFromActivityViewController:) BOOL isPresentedFromActivityViewController;
@property UIViewController * referenceViewController;
@property(readonly) Class superclass;

+ (int)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (void)_createStreamsPickerContainerWithExisting:(BOOL)arg1;
- (void)_handleDismissWithSuccess:(BOOL)arg1;
- (void)_performPresentationOnViewController:(id)arg1 completion:(id)arg2;
- (void)_prepareToPost:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)_publishAssets:(id)arg1 andTrimmedVideoPathInfo:(id)arg2 toAlbum:(id)arg3 orCreateWithName:(id)arg4 comment:(id)arg5 invitationRecipients:(id)arg6 wantsPublicWebsite:(BOOL)arg7 completion:(id)arg8;
- (id)_selectedVideo;
- (BOOL)_sharedAlbumAllowsAdding:(struct NSObject { Class x1; }*)arg1;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (id)delegate;
- (BOOL)destinationAlbumWasCreated;
- (id)destinationStreamingAlbum;
- (id)init;
- (BOOL)isPresentedFromActivityViewController;
- (id)itemSourceController;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)referenceViewController;
- (void)setDelegate:(id)arg1;
- (void)setDestinationAlbumWasCreated:(BOOL)arg1;
- (void)setDestinationStreamingAlbum:(id)arg1;
- (void)setItemSourceController:(id)arg1;
- (void)setPresentedFromActivityViewController:(BOOL)arg1;
- (void)setReferenceViewController:(id)arg1;

@end
