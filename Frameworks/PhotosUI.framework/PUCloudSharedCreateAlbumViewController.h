/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUCloudSharedCreateAlbumViewControllerDelegate>, NSArray, NSString, PUPhotoStreamRecipientViewController, UINavigationItem;

@interface PUCloudSharedCreateAlbumViewController : UIViewController {
    NSArray *__albumRecipients;
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    <PUCloudSharedCreateAlbumViewControllerDelegate> *_delegate;
    UINavigationItem *_navItem;
    NSString *_nextButtonTitle;
}

@property(setter=_setAlbumRecipients:,retain) NSArray * _albumRecipients;
@property(readonly) NSArray * albumRecipients;
@property <PUCloudSharedCreateAlbumViewControllerDelegate> * delegate;
@property(retain) NSString * nextButtonTitle;

- (void).cxx_destruct;
- (id)_albumRecipients;
- (void)_cancelAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_handleCompletionWithSuccess:(BOOL)arg1;
- (void)_saveUserEnterredInfo;
- (void)_setAlbumRecipients:(id)arg1;
- (BOOL)_validateRecipientsToAdd:(id)arg1;
- (id)albumRecipients;
- (void)composeRecipientViewControllerRecipientContainerViewDidResize:(id)arg1 fromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadView;
- (id)navigationItem;
- (id)nextButtonTitle;
- (void)setDelegate:(id)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end
