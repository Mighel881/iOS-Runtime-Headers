/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {
    NSAttributedString *_attributedText;
    float _capOffsetFromBoundsTop;
    float _lastLineBaselineOffsetFromBoundsTop;
    BOOL _singleLine;
}

@property(copy) NSAttributedString * attributedText;
@property float capOffsetFromBoundsTop;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property float lastLineBaselineOffsetFromBoundsTop;
@property(getter=isSingleLine) BOOL singleLine;
@property(readonly) Class superclass;

- (id)attributedText;
- (float)capOffsetFromBoundsTop;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (BOOL)isSingleLine;
- (float)lastLineBaselineOffsetFromBoundsTop;
- (void)setAttributedText:(id)arg1;
- (void)setCapOffsetFromBoundsTop:(float)arg1;
- (void)setLastLineBaselineOffsetFromBoundsTop:(float)arg1;
- (void)setSingleLine:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 isSingleLine:(BOOL*)arg3;

@end
