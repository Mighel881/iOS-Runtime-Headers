/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <WLCardViewDelegate>, NSString, PKPass, PKPassBackFaceView, PKPassColorProfile, PKPassFaceView, PKPassFrontFaceView, UITapGestureRecognizer;

@interface PKPassView : UIView <PKPassFaceDelegate, UIGestureRecognizerDelegate> {
    PKPassBackFaceView *_backFace;
    BOOL _backFaceIsTall;
    PKPassColorProfile *_colorProfile;
    int _contentMode;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _delayedContentModeCanceller;

    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _delayedFlipFrame;
    <WLCardViewDelegate> *_delegate;
    float _flipLayoutOvershoot;
    float _flipOvershoot;
    BOOL _flipping;
    PKPassFrontFaceView *_frontFace;
    BOOL _isFrontmostPassView;
    PKPassFaceView *_otherFace;
    PKPass *_pass;
    int _priorContentMode;
    unsigned int _suppressedContent;
    UITapGestureRecognizer *_tapRecognizer;
    PKPassFaceView *_visibleFace;
}

@property BOOL backFaceIsTall;
@property int contentMode;
@property(copy,readonly) NSString * debugDescription;
@property <WLCardViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL frontFaceBodyContentCreated;
@property(readonly) unsigned int hash;
@property BOOL isFrontmostPassView;
@property(retain,readonly) PKPass * pass;
@property(readonly) BOOL showingFront;
@property(readonly) Class superclass;
@property unsigned int suppressedContent;
@property(readonly) NSString * uniqueID;

- (void)_applyContentMode:(BOOL)arg1;
- (void)_flipPass:(BOOL)arg1 fromLeft:(BOOL)arg2 notify:(BOOL)arg3;
- (int)_frontFaceBackgroundModeForContentMode;
- (unsigned int)_regionsForCurrentModes;
- (void)_updateBackFaceSuppressedContent;
- (void)_updateFrontFaceSuppressedContent;
- (BOOL)_visibleFaceShouldClipForCurrentViewMode:(float*)arg1;
- (void)aidUpdated:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)backFaceIsTall;
- (BOOL)canFlip;
- (int)contentMode;
- (void)createBackFaceIfNecessary;
- (void)dealloc;
- (id)delegate;
- (void)flipPass:(BOOL)arg1 fromLeft:(BOOL)arg2 notify:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfVisibleFace;
- (BOOL)frontFaceBodyContentCreated;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 content:(int)arg2;
- (BOOL)isFrontmostPassView;
- (id)item;
- (void)layoutSubviews;
- (id)pass;
- (BOOL)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(id)arg1;
- (void)passFaceFlipButtonPressed:(id)arg1;
- (void)passFaceShareButtonPressed:(id)arg1;
- (void)prepareForFlip;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)registerForEnterBackgroundNotification;
- (void)setBackFaceIsTall:(BOOL)arg1;
- (void)setContentMode:(int)arg1;
- (void)setContentMode:(int)arg1 animated:(BOOL)arg2;
- (void)setContentMode:(int)arg1 animated:(BOOL)arg2 withDelay:(double)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsFrontmostPassView:(BOOL)arg1;
- (void)setSuppressedContent:(unsigned int)arg1;
- (BOOL)showingFront;
- (struct CGSize { float x1; float x2; })sizeOfBackFace;
- (struct CGSize { float x1; float x2; })sizeOfFront;
- (struct CGSize { float x1; float x2; })sizeOfFrontFace;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)snapshotOfFrontFace;
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)arg1;
- (unsigned int)suppressedContent;
- (void)tapRecognized:(id)arg1;
- (id)uniqueID;
- (void)unregisterForEnterBackgroundNotification;
- (void)updateValidityDisplay;

@end
