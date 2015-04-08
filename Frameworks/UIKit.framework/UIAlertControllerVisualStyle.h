/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertControllerDescriptor, UITraitCollection;

@interface UIAlertControllerVisualStyle : NSObject {
    UIAlertControllerDescriptor *_descriptor;
    UITraitCollection *_traitCollection;
}

@property(retain) UIAlertControllerDescriptor * descriptor;
@property(retain) UITraitCollection * traitCollection;

- (id)_detailMessageFont;
- (float)_scaledMarginAboveMessageLabelFirstBaseline;
- (float)_scaledMarginAboveTitleLabelFirstBaseline;
- (float)_scaledMarginBelowLastLabelLastBaseline;
- (float)_scaledMarginBelowMessageLabelLastBaseline;
- (float)_scaledMarginBelowTitleLabelLastBaseline;
- (id)actionHighlightedBackgroundView;
- (float)actionWidthForMinimumActionWidth:(float)arg1;
- (float)backgroundCornerRadius;
- (id)backgroundView;
- (struct CGSize { float x1; float x2; })collectionViewOutsetSize;
- (id)defaultActionBackgroundColorWhenSeparate;
- (id)defaultActionFont;
- (id)descriptor;
- (id)dimmingView;
- (id)disabledActionContentColor;
- (BOOL)focusedActionAnimatesOnPresentationAndDismissal;
- (BOOL)hideActionSeparators;
- (id)highlightedActionContentColor;
- (float)horizontalContentMargin;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)marginBelowLastLabelLastBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (float)marginBelowTitleLabelLastBaseline;
- (int)maximumNumberOfLinesInMessageLabel;
- (int)maximumNumberOfLinesInTitleLabel;
- (float)maximumWidth;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (float)minimumActionHeight;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })presentationAnimationStartTransform;
- (id)regularActionFont;
- (float)sectionDelimitingSeparatorDimension;
- (void)setDescriptor:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (id)traitCollection;
- (float)verticalContentMargin;
- (float)visualAltitude;

@end
