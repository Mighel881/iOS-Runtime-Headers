/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIKeyboardEmojiCategoryController;

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {
    UIKeyboardEmojiCategoryController *_categoryController;
    int _currentSelected;
    int _lastUsedCategory;
    UIColor *_pressIndicatorColor;
    BOOL _whiteText;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property BOOL whiteText;

- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)receiveNotifictaion:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setWhiteText:(BOOL)arg1;
- (id)symbolForRow:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)titleForRow:(int)arg1;
- (void)updateCategorySelectedIndicator:(int)arg1;
- (BOOL)whiteText;

@end
