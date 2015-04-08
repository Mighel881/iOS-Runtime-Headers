/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSWPStorage;

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying> {
    unsigned int _lastTableIndex;
    TSWPStorage *_parentStorage;
}

@property(readonly) int attributeArrayKind;
@property TSWPStorage * parentStorage;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(readonly) int styleAttributeArrayKind;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultFieldStyleIdentifier;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)allowsEditing;
- (BOOL)allowsPasteAsSmartField;
- (int)attributeArrayKind;
- (BOOL)canCopy:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)loadFromArchive:(const struct SmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; }*)arg1 unarchiver:(id)arg2;
- (id)parentStorage;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)saveToArchive:(struct SmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (int)smartFieldKind;
- (int)styleAttributeArrayKind;
- (id)text;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
