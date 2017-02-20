/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMonogramView : _UIFloatingContentView <TVAuxiliaryViewSelecting, _UIFloatingContentViewDelegate> {
    TVMonogramViewConfiguration * _configuration;
    UIView * _focusedShadowView;
    UIImage * _image;
    TVImageProxy * _imageProxy;
    _TVImageView * _imageView;
    BOOL  _isSelected;
    _TVMonogramDescription * _monogramDescription;
    UIImage * _placeholderImage;
    id /* block */  _pressCompletionBlock;
    float  _unfocusedImageAlpha;
    UIView * _unfocusedShadowView;
}

@property (nonatomic, readonly) TVMonogramViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) TVImageProxy *imageProxy;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) _TVMonogramDescription *monogramDescription;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, copy) id /* block */ pressCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic) float unfocusedImageAlpha;

- (void).cxx_destruct;
- (void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2;
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1;
- (id)configuration;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned int)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)image;
- (id)imageProxy;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (id)monogramDescription;
- (id)placeholderImage;
- (id /* block */)pressCompletionBlock;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionMarginsForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMonogramDescription:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPressCompletionBlock:(id /* block */)arg1;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setUnfocusedImageAlpha:(float)arg1;
- (float)unfocusedImageAlpha;

@end
