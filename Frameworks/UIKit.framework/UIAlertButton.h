/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIImageView;

@interface UIAlertButton : UIButton {
    UIImageView *_highlightView;
    float _imageOffset;
    BOOL _isNewStyle;
}

@property(retain) UIImage * highlightImage;
@property(readonly) UIImageView * highlightView;
@property float imageOffset;
@property BOOL isNewStyle;

- (void)_transitionHighlightViewToHighlighted:(BOOL)arg1;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)focusedViewDidChange;
- (id)highlightImage;
- (id)highlightView;
- (id)image;
- (float)imageOffset;
- (id)initWithTitle:(id)arg1;
- (BOOL)isNewStyle;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlightImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImageOffset:(float)arg1;
- (void)setIsNewStyle:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
