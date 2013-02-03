/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class UITextPosition, UIImage, UITextSelectionView, UIColor, UITextRange, DOMNode, DOMDocument, DOMNamedNodeMap, UITextInteractionAssistant, UIView<UITextSelectingContent>, <UITextInputDelegate>, UIView, <UITextInputTokenizer>, NSDictionary, UIResponder<UITextSelection>, DOMNodeList, DOMElement, NSString;

@interface DOMNode : DOMObject <DOMEventTarget, UIKeyboardInput, UIKeyInput, UITextInputTokenizer, UIWebSelectionBlock> {
}

@property BOOL acceptsEmoji;
@property BOOL acceptsFloatingKeyboard;
@property BOOL acceptsSplitKeyboard;
@property(retain,readonly) DOMNamedNodeMap * attributes;
@property int autocapitalizationType;
@property int autocorrectionType;
@property(copy,readonly) NSString * baseURI;
@property(readonly) UITextPosition * beginningOfDocument;
@property(retain,readonly) DOMNodeList * childNodes;
@property(readonly) UIView<UITextSelectingContent> * content;
@property BOOL contentsIsSingleValue;
@property BOOL displaySecureTextUsingPlainText;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isEditing,readonly) BOOL editing;
@property int emptyContentReturnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) UITextPosition * endOfDocument;
@property(retain,readonly) DOMNode * firstChild;
@property BOOL forceEnableDictation;
@property <UITextInputDelegate> * inputDelegate;
@property(retain) UIColor * insertionPointColor;
@property unsigned int insertionPointWidth;
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property(readonly) BOOL isContentEditable;
@property int keyboardAppearance;
@property int keyboardType;
@property(retain,readonly) DOMNode * lastChild;
@property BOOL learnsCorrections;
@property(copy,readonly) NSString * localName;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) BOOL mf_isBody;
@property(copy,readonly) NSString * namespaceURI;
@property(retain,readonly) DOMNode * nextSibling;
@property(copy,readonly) NSString * nodeName;
@property(readonly) unsigned short nodeType;
@property(copy) NSString * nodeValue;
@property(retain,readonly) DOMDocument * ownerDocument;
@property(retain,readonly) DOMElement * parentElement;
@property(retain,readonly) DOMNode * parentNode;
@property(copy) NSString * prefix;
@property(retain,readonly) DOMNode * previousSibling;
@property BOOL returnKeyGoesToNextResponder;
@property int returnKeyType;
@property(getter=isRichText) BOOL richText;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property int selectionAffinity;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIImage * selectionDragDotImage;
@property int selectionGranularity;
@property(retain) UIColor * selectionHighlightColor;
@property(readonly) UITextSelectionView * selectionView;
@property int shortcutConversionType;
@property int spellCheckingType;
@property BOOL suppressReturnKeyStyling;
@property(copy) NSString * textContent;
@property(readonly) UIResponder<UITextSelection> * textDocument;
@property(readonly) UIView * textInputView;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(readonly) <UITextInputTokenizer> * tokenizer;

- (struct Element { int (**x1)(); int (**x2)(); int x3; struct ContainerNode {} *x4; struct Weak<WebCore::JSDOMWrapper> { struct JSValue {} *x_5_1_1; } x5; struct Document {} *x6; struct Node {} *x7; struct Node {} *x8; struct RenderObject {} *x9; unsigned int x10; struct Node {} *x11; struct Node {} *x12; struct QualifiedName { struct QualifiedNameImpl {} *x_13_1_1; } x13; struct RefPtr<WebCore::NamedNodeMap> { struct NamedNodeMap {} *x_14_1_1; } x14; }*)_linkElement;
- (void)_accessoryClear;
- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_markedTextNSRange;
- (id)_nextAssistedNode;
- (id)_previousAssistedNode;
- (id)_realNode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_renderRect:(bool*)arg1;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (struct RootObject { }*)_rootObject;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (id)_subresourceURLs;
- (BOOL)_supportsAccessoryClear;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;
- (id)_textSelectingContainer;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuad;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuadAndInsideFixedPosition:(BOOL*)arg1;
- (id)absoluteQuads;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (id)appendChild:(id)arg1;
- (id)asDomNode;
- (id)asDomRange;
- (id)asElement;
- (id)attributes;
- (id)automaticallySelectedOverlay;
- (id)baseURI;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (id)borderRadii;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxUsingTransforms;
- (id)boundingBoxes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (BOOL)canShrinkDirectlyToTextOnly;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)childNodes;
- (id)cloneNode:(BOOL)arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (float)computedFontSize;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1 withInset:(float)arg2;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)containsNode:(id)arg1;
- (BOOL)containsOnlyInlineObjects;
- (BOOL)containsRange:(id)arg1;
- (id)content;
- (BOOL)contentsIsSingleValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)createPeripheral;
- (id)createPickerCell;
- (id)createSelectedItem;
- (void)dd_removeResultLinks;
- (BOOL)dd_searchForLinkEndNode:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (id)description;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (BOOL)dispatchEvent:(id)arg1;
- (BOOL)editable;
- (BOOL)editing;
- (id)enclosingDocument;
- (id)enclosingElementIncludingSelf;
- (id)endOfDocument;
- (id)endPosition;
- (void)endSelectionChange;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)extendCurrentSelection:(int)arg1;
- (void)finalize;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)firstChild;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDescentDirection:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)hasAttributes;
- (BOOL)hasChildNodes;
- (BOOL)hasContent;
- (BOOL)hasCustomLineHeight;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (void)hidePlaceholder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hrefFrame;
- (id)hrefLabel;
- (id)hrefTarget;
- (id)hrefTitle;
- (id)hrefURL;
- (int)initialSelectionBehavior;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })innerFrameQuad;
- (id)inputDelegate;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAutoFillMode;
- (BOOL)isContentEditable;
- (BOOL)isDefaultNamespace:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)isHorizontalWritingMode;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (BOOL)isSameBlock:(id)arg1;
- (BOOL)isSameNode:(id)arg1;
- (BOOL)isSecure;
- (BOOL)isSelectableBlock;
- (BOOL)isShowingPlaceholder;
- (BOOL)isSupported:(id)arg1 :(id)arg2;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (BOOL)isTextControl;
- (id)itemTitle;
- (int)keyboardType;
- (id)largerParent;
- (id)lastChild;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)lineBoxQuads;
- (id)lineBoxRects;
- (id)localName;
- (id)lookupNamespaceURI:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (id)markedText;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)markupString;
- (id)metadataDictionariesForDictationResults;
- (id)mf_appendBlockPlaceholder;
- (id)mf_blockNodeAncestor;
- (id)mf_commonAncestorWithNode:(id)arg1;
- (id)mf_containingBlockQuote;
- (BOOL)mf_containsOnlySelectionMarkers;
- (BOOL)mf_containsRichText;
- (id)mf_findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (id)mf_firstDescendantBlockQuote;
- (void)mf_fixParagraphsAndQuotesFromMicrosoft;
- (id)mf_highestContainingBlockQuote;
- (BOOL)mf_isAtBeginningOfContainerNode:(id)arg1;
- (BOOL)mf_isAtEndOfContainerNode:(id)arg1;
- (BOOL)mf_isBody;
- (BOOL)mf_isDescendantOfNode:(id)arg1;
- (BOOL)mf_isQuoteOrWithinQuote;
- (id)mf_nextSiblingOrAunt;
- (int)mf_quoteLevelDelta;
- (id)mf_topmostContainingNodeWithNameInArray:(id)arg1;
- (id)mf_traverseNextNodeStayingWithin:(id)arg1;
- (id)mf_traverseNextSiblingStayingWithin:(id)arg1;
- (id)mf_traversePreviousNode;
- (void)moveBackward:(unsigned int)arg1;
- (void)moveDown;
- (void)moveForward:(unsigned int)arg1;
- (void)moveLeft;
- (void)moveRight;
- (void)moveUp;
- (id)namespaceURI;
- (id)nextFocusNode;
- (id)nextSibling;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (BOOL)nodeCanBecomeFirstResponder;
- (id)nodeName;
- (unsigned short)nodeType;
- (id)nodeValue;
- (void)normalize;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)ownerDocument;
- (id)parentBlock;
- (id)parentElement;
- (id)parentNode;
- (void)populateCell:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)prefix;
- (id)previousFocusNode;
- (id)previousSibling;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (id)rangeOfContainingParagraph;
- (id)rangeOfContents;
- (id)rangeOfContents;
- (id)rangeOfEnclosingWord:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rectsForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rectsForRange:(id)arg1;
- (void)recursivelyRemoveMailAttributes;
- (id)removeChild:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)rendersAsBlock;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithText:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)requiresKeyEvents;
- (int)returnKeyType;
- (void)selectAll;
- (BOOL)selectable;
- (id)selectedDOMRange;
- (id)selectedTextRange;
- (int)selectionAffinity;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtWordStart;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (int)selectionState;
- (id)selectionView;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setInitialSelectionBehavior:(int)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedText:(id)arg1;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setNodeValue:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionAffinity:(int)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1 inset:(float)arg2;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (void)showPlaceholderIfNecessary;
- (BOOL)showsTapHighlight;
- (id)startPosition;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)strictlyContainsNode:(id)arg1;
- (id)tagName;
- (void)takeTraitsFrom:(id)arg1;
- (id)tapHighlightColor;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textContent;
- (id)textDocument;
- (float)textHeight;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (int)textLoupeVisibility;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textRects;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (id)tokenizer;
- (BOOL)touchCalloutEnabled;
- (id)uiWebDocumentView;
- (void)unmarkText;
- (void)updateAutoscroll:(id)arg1;
- (void)updateSelection;
- (id)urlScheme;
- (id)webArchive;
- (id)webFrame;
- (id)wordContainingCaretSelection;
- (int)wordOffsetInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;

@end
