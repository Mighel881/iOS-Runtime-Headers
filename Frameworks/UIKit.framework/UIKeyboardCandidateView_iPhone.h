/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKeyboardCandidateGridHeader;

@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    UIKeyboardCandidateGridHeader *_header;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (float)defaultExtendedControlHeight;

- (void)_handleKeyboardShowOrHide:(id)arg1;
- (void)_setupKeyboardInteraction;
- (BOOL)_shouldShowHideKeyboard;
- (BOOL)_shouldUseFullMetrics;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTap;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
