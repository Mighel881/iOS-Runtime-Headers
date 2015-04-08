/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UITextDocumentInterfaceDelegate>, NSString, TIDocumentState, TIKeyboardOutput, TITextInputTraits, _UIInputViewControllerOutput, _UIInputViewControllerState;

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy> {
    _UIInputViewControllerOutput *_controllerOutput;
    _UIInputViewControllerState *_controllerState;
    <_UITextDocumentInterfaceDelegate> *_delegate;
    TIKeyboardOutput *_keyboardOutput;
}

@property int autocapitalizationType;
@property int autocorrectionType;
@property(getter=_controllerOutput,retain) _UIInputViewControllerOutput * controllerOutput;
@property(getter=_controllerState,retain) _UIInputViewControllerState * controllerState;
@property(copy,readonly) NSString * debugDescription;
@property(getter=_delegate) <_UITextDocumentInterfaceDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * documentContextAfterInput;
@property(readonly) NSString * documentContextBeforeInput;
@property(getter=_documentState,readonly) TIDocumentState * documentState;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property int keyboardAppearance;
@property(getter=_keyboardOutput,readonly) TIKeyboardOutput * keyboardOutput;
@property int keyboardType;
@property int returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property int spellCheckingType;
@property(readonly) Class superclass;
@property(getter=_textInputTraits,readonly) TITextInputTraits * textInputTraits;

- (id)_controllerOutput;
- (id)_controllerState;
- (void)_createControllerOutputIfNecessary;
- (id)_delegate;
- (void)_didPerformOutputOperation;
- (id)_documentState;
- (void)_handleInputViewControllerState:(id)arg1;
- (id)_keyboardOutput;
- (void)_setPrimaryLanguage:(id)arg1;
- (void)_setShouldAdvanceInputMode;
- (void)_setShouldDismiss;
- (id)_textInputTraits;
- (void)_willPerformOutputOperation;
- (void)adjustTextPositionByCharacterOffset:(int)arg1;
- (int)autocapitalizationType;
- (int)autocorrectionType;
- (void)dealloc;
- (void)deleteBackward;
- (id)documentContextAfterInput;
- (id)documentContextBeforeInput;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (BOOL)isSecureTextEntry;
- (int)keyboardAppearance;
- (int)keyboardType;
- (int)returnKeyType;
- (void)setControllerOutput:(id)arg1;
- (void)setControllerState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardingInterface:(id)arg1;
- (int)spellCheckingType;

@end
