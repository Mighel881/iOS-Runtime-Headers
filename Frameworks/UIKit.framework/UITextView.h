/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextView : UIScrollView <ABText, MPUAutoupdatingTextContainer, UIContentSizeCategoryAdjusting, UIKeyboardInput, UIPreviewItemDelegate, UITextAutoscrolling, UITextInput, UITextInputControllerDelegate, UITextInputTraits_Private, UITextLinkInteraction, _UILayoutBaselineUpdating, _UIMultilineTextContentSizing, _UITextContainerViewDelegate> {
    BOOL  _adjustsFontForContentSizeCategory;
    UIAutoscroll * _autoscroll;
    struct CGSize { 
        float width; 
        float height; 
    }  _beforeFreezingFrameSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _beforeFreezingTextContainerInset;
    _UICharacterStreamingManager * _characterStreamingManager;
    BOOL  _clearsOnInsertion;
    _UITextContainerView * _containerView;
    int  _contentSizeUpdateSeqNo;
    CUICatalog * _cuiCatalog;
    unsigned int  _dataDetectorTypes;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _duringFreezingTextContainerInset;
    float  _firstBaselineOffsetFromTop;
    UIView * _inputAccessoryView;
    UITextInputController * _inputController;
    id  _inputDelegate;
    UIView * _inputView;
    UITextInteractionAssistant * _interactionAssistant;
    float  _lastBaselineOffsetFromBottom;
    NSLayoutManager * _layoutManager;
    id  _linkInteractionItem;
    NSDictionary * _linkTextAttributes;
    float  _multilineContextWidth;
    float  _offsetFromScrollPosition;
    UILabel * _placeholderLabel;
    float  _preferredMaxLayoutWidth;
    id  _private;
    _UITextViewRestorableScrollPosition * _scrollPosition;
    unsigned int  _scrollPositionDontRecordCount;
    _UITextViewRestorableScrollPosition * _scrollTarget;
    int  _siriAnimationStyle;
    NSDictionary * _siriParameters;
    _UISiriStreamingManager * _streamingManager;
    NSTextContainer * _textContainer;
    UITextInputTraits * _textInputTraits;
    NSTextStorage * _textStorage;
    <UITextInputTokenizer> * _tokenizer;
    struct { 
        unsigned int needsScrollToSelectionAfterLayout : 1; 
        unsigned int isInteractingWithLink : 1; 
        unsigned int linkInteractionIsLongPress : 1; 
        unsigned int linkInteractionIsPreview : 1; 
        unsigned int editable : 1; 
        unsigned int reentrancyGuard : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int interactiveSelectionDisabled : 1; 
        unsigned int selectable : 1; 
        unsigned int shouldPresentSheetsInAWindowLayeredAboveTheKeyboard : 1; 
        unsigned int shouldAutoscrollAboveBottom : 1; 
        unsigned int disableUpdateTextColorOnTraitCollectionChange : 1; 
    }  _tvFlags;
    BOOL  _unfreezingTextContainerSize;
}

@property (setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:, nonatomic) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property (nonatomic, readonly) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (setter=_setDrawsDebugBaselines:, nonatomic) BOOL _drawsDebugBaselines;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (copy) NSAttributedString *attributedText;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) int autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL clearsOnInsertion;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) unsigned int dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (nonatomic) <UITextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (getter=isEditable, nonatomic) BOOL editable;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) int forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (nonatomic, readonly) BOOL hasText;
@property (readonly) unsigned int hash;
@property (retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (retain) UIView *inputView;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned int insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic, copy) NSDictionary *linkTextAttributes;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (getter=isSelectable, nonatomic) BOOL selectable;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) int selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textContainerInset;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } validTextRange;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (BOOL)_isCompatibilityTextView;
+ (id)_sharedHighlightView;

- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_adjustPreferredFontForCurrentContentSizeCategory;
- (BOOL)_allowAnimatedUpdateSelectionRectViews;
- (void)_baselineOffsetDidChange;
- (float)_baselineOffsetFromBottom;
- (void)_cancelDataDetectors;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(BOOL)arg2 isEditable:(BOOL)arg3 isSelectable:(BOOL)arg4;
- (struct CGSize { float x1; float x2; })_containerSizeForBoundsSize:(struct CGSize { float x1; float x2; })arg1 allowingOverflow:(BOOL)arg2;
- (id)_containerView;
- (struct CGPoint { float x1; float x2; })_contentOffsetForScrollToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (float)_currentPreferredMaxLayoutWidth;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 type:(int*)arg3;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_didFinishSpeechRecognition;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (BOOL)_drawsDebugBaselines;
- (unsigned int)_effectiveDataDetectorTypes;
- (void)_enableSiriAnimationDictationStyle;
- (void)_enableSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_finishHandlingInteraction:(id)arg1;
- (float)_firstBaselineOffsetFromTop;
- (struct CGPoint { float x1; float x2; })_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint { float x1; float x2; })_firstGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (BOOL)_freezeTextContainerSize;
- (BOOL)_getCloseQuoteAnchor:(struct CGPoint { float x1; float x2; }*)arg1;
- (BOOL)_getOpenQuoteAnchor:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)_highlightLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (id)_interactableItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShareViewController;
- (BOOL)_isDisplayingShortcutViewController;
- (BOOL)_isInteractiveTextSelectionDisabled;
- (void)_keyboardDidShow:(id)arg1;
- (struct CGPoint { float x1; float x2; })_lastGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint { float x1; float x2; })_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (id)_layoutDebuggingTitle;
- (void)_layoutPlaceholder;
- (id)_linkTextAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned int)arg2;
- (BOOL)_mightHaveSelection;
- (float)_multilineContextWidth;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_observedTextViewDidChange:(id)arg1;
- (BOOL)_ownsInputAccessoryView;
- (void)_performLayoutCalculation:(id /* block */)arg1 inSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (float)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_presentationRectForLinkAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_presentationRectsForLinkAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withMargin:(float)arg2;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (Class)_printFormatterClass;
- (void)_promptForReplace:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForScrollToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_resetDataDetectorsResults;
- (void)_resetLinkInteraction;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (id)_restorableScrollPosition;
- (id)_restorableScrollPositionForStateRestoration;
- (BOOL)_restoreFirstResponder;
- (void)_restoreScrollPosition:(id)arg1 animated:(BOOL)arg2;
- (void)_resyncContainerFrameForNonAutolayout;
- (void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(BOOL)arg1;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 animated:(BOOL)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toVisibleInContainingScrollView:(BOOL)arg2;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (void)_scrollSelectionToVisibleInContainingScrollView:(BOOL)arg1;
- (void)_scrollToCaretIfNeeded;
- (void)_scrollToSelectionIfNeeded;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_selectionMayChange:(id)arg1;
- (void)_setContentOffsetWithoutRecordingScrollPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_setDrawsDebugBaselines:(BOOL)arg1;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromOldRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 settingAction:(id /* block */)arg3;
- (void)_setFreezeTextContainerSize:(BOOL)arg1;
- (void)_setInteractiveTextSelectionDisabled:(BOOL)arg1;
- (void)_setMultilineContextWidth:(float)arg1;
- (void)_setPreferredMaxLayoutWidth:(float)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setWhitelistedTypingAttributes:(id)arg1;
- (void)_share:(id)arg1;
- (BOOL)_shouldObscureInput;
- (BOOL)_shouldScrollEnclosingScrollView;
- (BOOL)_shouldStartDataDetectors;
- (BOOL)_shouldSuppressSelectionCommands;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_startDataDetectors;
- (void)_streamingManagerDidCommitFinalResults;
- (void)_textContainerSizeDidChange:(id)arg1;
- (id)_textInputTraits;
- (id)_textInputViewForAddingGestureRecognizers;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (unsigned int)_totalNumberOfTextViewsInLayoutManager;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateContainerTileAndSizingFlags;
- (void)_updateContentSize;
- (void)_updatePlaceholderVisibility;
- (void)_updateTextContainerSizeAndSizeToFit;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleRangeWithLayout:(BOOL)arg1;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (id)_whitelistedTypingAttributes;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)adjustsFontForContentSizeCategory;
- (BOOL)allowsEditingTextAttributes;
- (id)attributedPlaceholder;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)becomesEditableWithGestures;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)clearsOnInsertion;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (unsigned int)dataDetectorTypes;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endFloatingCursor;
- (id)endOfDocument;
- (void)endSelectionChange;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (BOOL)forceDisableDictation;
- (BOOL)forceEnableDictation;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)increaseSize:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isEditable;
- (BOOL)isEditableForTextContainerView:(id)arg1;
- (BOOL)isEditing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isInteractingWithLink;
- (BOOL)isSelectable;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (id)layoutManager;
- (void)layoutSubviews;
- (float)lineHeight;
- (id)linkTextAttributes;
- (id)linkTextAttributesForTextContainerView:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (unsigned int)marginTop;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)mightHaveLinks;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRangeForTextContainerView:(id)arg1;
- (id)selectedText;
- (id)selectedTextRange;
- (int)selectionAffinity;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)arg1;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClearsOnInsertion:(BOOL)arg1;
- (void)setContentMode:(int)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setForceDisableDictation:(BOOL)arg1;
- (void)setForceEnableDictation:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLineHeight:(float)arg1;
- (void)setLinkTextAttributes:(id)arg1;
- (void)setMarginTop:(unsigned int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setShouldAutoscrollAboveBottom:(BOOL)arg1;
- (void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTiledViewsDrawAsynchronously:(BOOL)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setUsesTiledViews:(BOOL)arg1;
- (BOOL)shouldAutoscrollAboveBottom;
- (BOOL)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)takeTraitsFrom:(id)arg1;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (id)textContainer;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textContainerInset;
- (id)textContainerView:(id)arg1 cuiCatalogForTextEffectName:(id)arg2;
- (id)textContainerView:(id)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned int)arg3;
- (id)textInRange:(id)arg1;
- (BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textInputDidChange:(id)arg1;
- (void)textInputDidChangeSelection:(id)arg1;
- (id)textInputView;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStorage;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)tiledViewsDrawAsynchronously;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (void)updateAutoscrollAboveBottom;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelection;
- (void)updateSelectionForTextContainerView:(id)arg1;
- (BOOL)usesTiledViews;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectIgnoringKeyboard;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (id)webView;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;
- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (BOOL)dd_ignoreSignatures;
- (id)dd_newOperation;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (BOOL)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeFromTextRange:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 consideringInsets:(BOOL)arg2 animated:(BOOL)arg3;
- (id)selectedRanges;
- (id)textRangeFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)pkui_styleTextView:(id)arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pkui_frameForTextFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pkui_textFrame;
- (struct CGSize { float x1; float x2; })pkui_textSizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
