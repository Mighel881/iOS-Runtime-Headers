/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextRange, UIColor, UITextSelectionView, UITextPosition, UIFont, UIDelayedAction, UIWebDocumentView, UITextInteractionAssistant, <UITextInputDelegate>, <UITextInputTokenizer>, UIView, DOMHTMLElement, NSDictionary, UIView<UITextSelectingContent>, UIResponder<UITextSelection>, WebFrame, NSString, <UITextViewDelegate>;

@interface UITextView : UIScrollView <UITextSelectingContainer, UITextInput> {
    BOOL m_becomesEditableWithGestures;
    DOMHTMLElement *m_body;
    BOOL m_editable;
    BOOL m_editing;
    UIFont *m_font;
    WebFrame *m_frame;
    BOOL m_hasExplicitLineHeight;
    BOOL m_hasExplicitTextAlignment;
    UIView *m_inputAccessoryView;
    UIView *m_inputView;
    UITextInteractionAssistant *m_interactionAssistant;
    float m_lineHeight;
    UIDelayedAction *m_longPressAction;
    int m_marginTop;
    BOOL m_readyForScroll;
    BOOL m_reentrancyGuard;
    UIDelayedAction *m_selectionTimer;
    UITextSelectionView *m_selectionView;
    BOOL m_skipScrollContainingView;
    int m_textAlignment;
    UIColor *m_textColor;
    UIWebDocumentView *m_webView;
}

@property int autocapitalizationType;
@property int autocorrectionType;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UIView<UITextSelectingContent> * content;
@property unsigned int dataDetectorTypes;
@property <UITextViewDelegate> * delegate;
@property(getter=isEditable) BOOL editable;
@property(getter=isEditing) BOOL editing;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) UITextPosition * endOfDocument;
@property(retain) UIFont * font;
@property(retain) UIView * inputAccessoryView;
@property <UITextInputDelegate> * inputDelegate;
@property(retain) UIView * inputView;
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property int keyboardAppearance;
@property int keyboardType;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property int returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property(copy) UITextRange * selectedTextRange;
@property int selectionAffinity;
@property int selectionGranularity;
@property(readonly) UITextSelectionView * selectionView;
@property int spellCheckingType;
@property(copy) NSString * text;
@property int textAlignment;
@property(retain) UIColor * textColor;
@property(readonly) UIResponder<UITextSelection> * textDocument;
@property(readonly) UIView * textInputView;
@property(readonly) <UITextInputTokenizer> * tokenizer;

+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)bestInterpretationForMarsVoltas:(id)arg1;

- (BOOL)_alwaysHandleScrollerMouseEvent;
- (id)_automationValue;
- (void)_bold:(id)arg1;
- (void)_dealloc;
- (void)_define:(id)arg1;
- (id)_findWebViewWordBoundaryFromPosition:(id)arg1;
- (void)_italicize:(id)arg1;
- (id)_keyboardResponder;
- (void)_populateArchivedSubviews:(id)arg1;
- (Class)_printFormatterClass;
- (void)_promptForReplace:(id)arg1;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_underline:(id)arg1;
- (id)automaticallySelectedOverlay;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (float)bottomBufferHeight;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelDataDetectorsWithWebLock;
- (void)cancelInteractionWithLink;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)content;
- (id)contentAsHTMLString;
- (void)copy:(id)arg1;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)cut:(id)arg1;
- (unsigned int)dataDetectorTypes;
- (void)dealloc;
- (void)delayedUpdateForKeyboardDidShow;
- (void)deleteBackward;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (void)didMoveToSuperview;
- (void)displayScrollerIndicators;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)ensureSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isFirstResponder;
- (BOOL)isInteractingWithLink;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (float)lineHeight;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (int)marginTop;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)mightHaveLinks;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (void)performBecomeEditableTasks;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)recalculateStyle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rectsForRange:(id)arg1;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeFromSuperview;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)resetDataDetectorsResultsWithWebLock;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)scrollRectToVisibleInContainingScrollView;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollToMakeCaretVisible:(BOOL)arg1;
- (BOOL)scrollingEnabled;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (id)selectedText;
- (id)selectedTextRange;
- (int)selectionAffinity;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (int)selectionGranularity;
- (id)selectionView;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setBottomBufferHeight:(float)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)setEditable:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLineHeight:(float)arg1;
- (void)setMarginTop:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setMarsVoltas:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRichText:(BOOL)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionAffinity:(int)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)shouldScrollEnclosingScrollView;
- (BOOL)shouldStartDataDetectors;
- (BOOL)showScrollerIndicators;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startDataDetectorsWithWebLock;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)styleString;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (id)textDocument;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct CGSize { float x1; float x2; })tileSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)tokenizer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)unmarkText;
- (void)updateContentEditableAttribute:(BOOL)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelection;
- (void)updateWebViewObjects;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView;
- (void)webViewDidChange:(id)arg1;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
