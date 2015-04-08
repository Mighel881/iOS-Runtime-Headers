/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPaymentCameraCaptureViewControllerDelegate>, <PKPaymentSetupViewControllerDelegate>, NSArray, NSString, PKCameraCaptureInstructionView, PKPaymentCardManualEntryViewController, UIView;

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate> {
    <PKPaymentCameraCaptureViewControllerDelegate> *_cameraCaptureDelegate;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    UIView *_cameraView;
    int _context;
    BOOL _hideSetupLaterButton;
    PKPaymentCardManualEntryViewController *_manualEntryController;
    NSArray *_outputObjects;
    <PKPaymentSetupViewControllerDelegate> *_setupDelegate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL hideSetupLaterButton;
@property(readonly) Class superclass;

- (void)_manualEntryButtonPressed:(id)arg1;
- (void)_pushManualEntryViewControllerAndRemoveSelf;
- (void)_setupLater:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)dealloc;
- (BOOL)hideSetupLaterButton;
- (id)init;
- (id)initWithCameraCaptureDelegate:(id)arg1;
- (id)initWithWebService:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3;
- (BOOL)isBuddyiPad;
- (void)loadView;
- (void)setHideSetupLaterButton:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
