/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTExpressionNode;

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment {
    BOOL mActive;
    struct CGImage { } *mCachedImage;
    float mCachedImageScreenScale;
    TSTExpressionNode *mExpressionNode;
    BOOL mHighlighted;
    BOOL mInInvalidate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mMenuRect;
    BOOL mNeverShowsMenu;
    BOOL mSelected;
    struct CGSize { 
        float width; 
        float height; 
    } mTextSize;
}

@property(getter=isActive) BOOL active;
@property struct CGImage { }* cachedImage;
@property float cachedImageScreenScale;
@property(retain) TSTExpressionNode * expressionNode;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=neverShowsMenu) BOOL neverShowsMenu;
@property(getter=isSelected) BOOL selected;

- (id).cxx_construct;
- (struct CGImage { }*)cachedImage;
- (float)cachedImageScreenScale;
- (id)copyIntoContext:(id)arg1;
- (id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (id)detokenizedText;
- (id)expressionNode;
- (id)formulaPlainText;
- (id)initFromArchive:(const struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UIGraphicalAttachment {} *x5; struct Reference {} *x6; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (BOOL)neverShowsMenu;
- (void)requestRedraw;
- (void)saveToArchive:(struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UIGraphicalAttachment {} *x5; struct Reference {} *x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setCachedImage:(struct CGImage { }*)arg1;
- (void)setCachedImageScreenScale:(float)arg1;
- (void)setExpressionNode:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setNeverShowsMenu:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end
