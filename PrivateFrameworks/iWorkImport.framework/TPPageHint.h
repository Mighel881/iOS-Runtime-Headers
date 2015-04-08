/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSDHint>, NSDictionary, NSString;

@interface TPPageHint : NSObject <TSWPOffscreenColumn> {
    NSDictionary *_anchoredAttachmentPositions;
    <TSDHint> *_firstChildHint;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _footnoteAutoNumberRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _footnoteLayoutRange;
    struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { 
        struct TSWPTargetHint {} *__begin_; 
        struct TSWPTargetHint {} *__end_; 
        struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { 
            struct TSWPTargetHint {} *__first_; 
        } __end_cap_; 
    } _hints;
    <TSDHint> *_lastChildHint;
    int _pageKind;
    struct TSWPTopicNumberHints { 
        struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { 
            struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { 
                struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { 
                    unsigned long __first_; 
                } __pair3_; 
            } __tree_; 
        } _numbersForListStyle; 
        unsigned int _charIndex; 
        unsigned int _validThroughCharIndex; 
    } _topicNumbers;
}

@property(retain) NSDictionary * anchoredAttachmentPositions;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } anchoredRange;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) <TSDHint> * firstChildHint;
@property struct _NSRange { unsigned int x1; unsigned int x2; } footnoteAutoNumberRange;
@property struct _NSRange { unsigned int x1; unsigned int x2; } footnoteLayoutRange;
@property(readonly) unsigned int hash;
@property(retain) <TSDHint> * lastChildHint;
@property(readonly) unsigned int nextWidowPullsDownFromCharIndex;
@property int pageKind;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(readonly) unsigned int startAnchoredCharIndex;
@property(readonly) unsigned int startCharIndex;
@property(readonly) Class superclass;
@property /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * topicNumbers; /* unknown property attribute:  true> >=L}}}II} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)anchoredAttachmentPositions;
- (struct _NSRange { unsigned int x1; unsigned int x2; })anchoredRange;
- (id)copyForArchiving;
- (void)dealloc;
- (id)firstChildHint;
- (id)firstColumn;
- (struct TSWPTargetHint { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; struct _NSRange { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; unsigned int x5; unsigned int x6; }*)firstHint;
- (struct _NSRange { unsigned int x1; unsigned int x2; })footnoteAutoNumberRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })footnoteLayoutRange;
- (struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x1; struct TSWPTargetHint {} *x2; struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x_3_1_1; } x3; })hints;
- (id)init;
- (id)initWithArchive:(const struct PageHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Range {} *x6; struct Range {} *x7; struct Reference {} *x8; int x9; unsigned int x10; struct Reference {} *x11; struct RepeatedPtrField<TP::AnchorPosArchive> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct TopicNumberHintsArchive {} *x13; unsigned int x14; }*)arg1 unarchiver:(id)arg2;
- (id)lastChildHint;
- (id)lastColumn;
- (struct TSWPTargetHint { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; struct _NSRange { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; unsigned int x5; unsigned int x6; }*)lastHint;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (void)offsetStartCharIndexBy:(int)arg1 charIndex:(unsigned int)arg2;
- (int)pageKind;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)saveToArchive:(struct PageHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Range {} *x6; struct Range {} *x7; struct Reference {} *x8; int x9; unsigned int x10; struct Reference {} *x11; struct RepeatedPtrField<TP::AnchorPosArchive> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct TopicNumberHintsArchive {} *x13; unsigned int x14; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)setAnchoredAttachmentPositions:(id)arg1;
- (void)setFirstChildHint:(id)arg1;
- (void)setFootnoteAutoNumberRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setFootnoteLayoutRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setHints:(const struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x1; struct TSWPTargetHint {} *x2; struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x_3_1_1; } x3; }*)arg1;
- (void)setLastChildHint:(id)arg1;
- (void)setPageKind:(int)arg1;
- (void)setTopicNumbers:(struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)arg1;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)startCharIndex;
- (BOOL)syncsWithEndOfPageHint:(id)arg1 storage:(id)arg2;
- (struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)topicNumbers;
- (void)trimToCharIndex:(unsigned int)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned int)arg3 removeAutoNumberFootnoteCount:(unsigned int)arg4;

@end
