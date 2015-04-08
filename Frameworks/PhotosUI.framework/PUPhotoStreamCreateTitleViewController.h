/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotoStreamCreateTitleDelegate>, NSString, UIColor, UILabel, UINavigationItem, UITextField, UITextView;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate> {
    UILabel *_descriptionLabel;
    UILabel *_instructionLabel;
    UINavigationItem *_navItem;
    UIColor *_placeholderColor;
    UILabel *_textPlaceholderLabel;
    UITextView *_textView;
    <PUPhotoStreamCreateTitleDelegate> *_titleDelegate;
    UITextField *_titleField;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property <PUPhotoStreamCreateTitleDelegate> * titleDelegate;

- (void).cxx_destruct;
- (void)_addConstraintsForTraitCollection:(id)arg1;
- (void)_cancelPost:(id)arg1;
- (id)_placeholderColor;
- (void)_setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (void)setTitleDelegate:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)titleDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
