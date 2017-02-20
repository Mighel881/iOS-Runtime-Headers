/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProductBannerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView * _backgroundView;
    float  _height;
    UIView * _heroImageView;
    UIView * _infoListView;
    UIView * _stackView;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *heroImageView;
@property (nonatomic, retain) UIView *infoListView;
@property (nonatomic, retain) UIView *stackView;
@property (readonly) Class superclass;

+ (id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)heroImageView;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)infoListView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)setBackgroundView:(id)arg1;
- (void)setHeroImageView:(id)arg1;
- (void)setInfoListView:(id)arg1;
- (void)setStackView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)stackView;

@end
