/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSCECalculationEngine, TSTReferenceColorHelper;

@interface TSTReferenceNode : TSTExpressionNode {
    BOOL mBlankForKeyboardInsertion;
    TSCECalculationEngine *mCalculationEngine;
    NSString *mFormulaPlainText;
    struct __CFUUID { } *mHostTableID;
    int mRangeContext;
    struct { 
        struct TSCERangeCoordinate { 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } mTopLeft; 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } mBottomRight; 
        } range; 
        struct __CFUUID {} *tableID; 
    } mRangeReference;
    BOOL mRangeWithFunction;
    NSString *mRefString;
    TSTReferenceColorHelper *mReferenceColorHelper;
    unsigned char mStickyBits;
}

@property(getter=isBlankForKeyboardInsertion) BOOL blankForKeyboardInsertion;
@property(retain,readonly) TSCECalculationEngine * calculationEngine;
@property(setter=setHostTableID:) struct __CFUUID { }* hostTableID;
@property(getter=isLocalReference,readonly) BOOL localReference;
@property(getter=isNonSpanningRange,readonly) BOOL nonSpanningRange;
@property(getter=isRange,readonly) BOOL range;
@property int rangeContext;
@property struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; } rangeCoordinate;
@property struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; } rangeReference;
@property(getter=isRangeWithFunction) BOOL rangeWithFunction;
@property(retain) TSTReferenceColorHelper * referenceColorHelper;
@property(getter=isResizable,readonly) BOOL resizable;
@property(getter=isSimpleRowOrColumnReference,readonly) BOOL simpleRowOrColumnReference;
@property(getter=isSingleASTNode,readonly) BOOL singleASTNode;
@property unsigned char stickyBits;
@property(setter=setTableID:) struct __CFUUID { }* tableID;

- (id).cxx_construct;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 symbolTable:(struct TSCESymbolTable { id x1; unsigned int x2; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSString>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSString> > > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::hash<unsigned int>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::equal_to<unsigned int>, true> > { float x_4_3_1; } x_1_2_4; } x_4_1_1; } x4; struct vector<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > >, std::__1::allocator<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > > > { struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_5_1_1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_5_1_2; struct __compressed_pair<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > *, std::__1::allocator<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > > > { struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_3_2_1; } x_5_1_3; } x5; }*)arg3;
- (id)calculationEngine;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)exportString;
- (id)formulaPlainText;
- (unsigned int)hash;
- (struct __CFUUID { }*)hostTableID;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct ReferenceNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct RangeReferenceArchive {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg3 stickyBits:(unsigned char)arg4 hostTableID:(struct __CFUUID { }*)arg5 tableID:(struct __CFUUID { }*)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned int)arg8 lastIndex:(unsigned int)arg9;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isBlankForKeyboardInsertion;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (BOOL)isLocalReference;
- (BOOL)isNonSpanningRange;
- (BOOL)isRange;
- (BOOL)isRangeWithFunction;
- (BOOL)isResizable;
- (BOOL)isSimpleRowOrColumnReference;
- (BOOL)isSingleASTNode;
- (BOOL)isValidReference;
- (void)p_buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 forRangeComponent:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 stickyBits:(unsigned char)arg3 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (void)p_invalidate;
- (void)p_resetMenu;
- (int)rangeContext;
- (struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })rangeCoordinate;
- (struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReference;
- (struct TSTCSENodeData { unsigned int x1; unsigned int x2; })recordHashesForSubexpressions:(id)arg1;
- (id)referenceColorHelper;
- (void)saveToArchive:(struct ReferenceNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct RangeReferenceArchive {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; unsigned int x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setBlankForKeyboardInsertion:(BOOL)arg1;
- (void)setHostTableID:(struct __CFUUID { }*)arg1;
- (void)setRangeContext:(int)arg1;
- (void)setRangeCoordinate:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1;
- (void)setRangeReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)setRangeWithFunction:(BOOL)arg1;
- (void)setReferenceColorHelper:(id)arg1;
- (void)setStickyBits:(unsigned char)arg1;
- (void)setTableID:(struct __CFUUID { }*)arg1;
- (unsigned char)stickyBits;
- (id)string;
- (struct __CFUUID { }*)tableID;
- (int)tokenType;

@end
