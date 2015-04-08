/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPhotoCommentEntryViewDelegate>, NSString, UIButton, UILabel, UITextView;

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate> {
    <PLPhotoCommentEntryViewDelegate> *_delegate;
    UILabel *_placeholderLabel;
    UIButton *_postButton;
    UITextView *_textView;
    UILabel *placeholderLabel;
}

@property(copy,readonly) NSString * debugDescription;
@property <PLPhotoCommentEntryViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain,readonly) UILabel * placeholderLabel;
@property(retain,readonly) UIButton * postButton;
@property(readonly) Class superclass;
@property(retain,readonly) UITextView * textView;

- (void)clearText;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)postButton;
- (float)preferredHeight;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (id)trimmedText;

@end
