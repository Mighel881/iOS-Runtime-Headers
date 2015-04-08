/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUCloudPhotoWelcomeViewDelegate>, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface PUCloudPhotoWelcomeView : UIView {
    UILabel *_bodyLabel;
    <PUCloudPhotoWelcomeViewDelegate> *_delegate;
    struct { 
        unsigned int delegateRespondsToGoButtonTapped : 1; 
        unsigned int delegateRespondsToLearnMoreTapped : 1; 
    } _delegateFlags;
    UILabel *_finePrintLabel;
    UIButton *_goButton;
    BOOL _goButtonEnabled;
    NSLayoutConstraint *_goButtonWidthConstraint;
    UIImageView *_graphicImageView;
    UILabel *_titleLabel;
}

@property(retain) UILabel * bodyLabel;
@property <PUCloudPhotoWelcomeViewDelegate> * delegate;
@property(retain) UILabel * finePrintLabel;
@property(retain) UIButton * goButton;
@property(getter=goButtonIsEnabled) BOOL goButtonEnabled;
@property(retain) UIImageView * graphicImageView;
@property(retain) UILabel * titleLabel;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (void)_goButtonTapped:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (void)_setupSubviews;
- (id)bodyLabel;
- (id)delegate;
- (id)finePrintLabel;
- (id)goButton;
- (BOOL)goButtonIsEnabled;
- (id)graphicImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBodyLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFinePrintLabel:(id)arg1;
- (void)setGoButton:(id)arg1;
- (void)setGoButtonEnabled:(BOOL)arg1;
- (void)setGraphicImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
