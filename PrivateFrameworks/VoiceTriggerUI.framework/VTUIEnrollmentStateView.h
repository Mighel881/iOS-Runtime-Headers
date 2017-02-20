/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollmentStateView : UIView {
    UIButton * _finishEnrollmentButton;
    NSMutableArray * _horizontalPaddingConstraints;
    UIImageView * _imageView;
    UIView * _imageViewContainer;
    NSLayoutConstraint * _imageViewHeightCapConstraint;
    UILabel * _instructionLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    BOOL  _usingFallbackImage;
}

@property (nonatomic, readonly) UIButton *finishEnrollmentButton;

- (void).cxx_destruct;
- (void)_positionFooter;
- (void)_setupUI;
- (void)fadeInSubviews;
- (id)finishEnrollmentButton;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setInstructionText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)suppressFinishButton;

@end
