/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSWPTOCInfo;

@interface TSWPTOCAttachment : TSWPDrawableAttachment {
}

@property(retain,readonly) TSWPTOCInfo * tocInfo;

- (int)elementKind;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadTOCAttachmentMessage:(const struct TOCAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableAttachmentArchive {} *x5; }*)arg1 fromUnarchiver:(id)arg2;
- (void)saveTOCAttachmentMessage:(struct TOCAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableAttachmentArchive {} *x5; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)tocInfo;

@end
