/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNMasterSlide, KNNoteInfo, NSMutableSet, NSSet, NSString;

@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject> {
    NSMutableSet *mInfosUsingObjectPlaceholderGeometry;
    KNMasterSlide *mMaster;
    KNNoteInfo *mNote;
}

@property(readonly) BOOL areInfosUsingObjectPlaceholderGeometry;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSSet * infosUsingObjectPlaceholderGeometry;
@property(retain) KNMasterSlide * master;
@property(retain) KNNoteInfo * note;
@property(readonly) BOOL slideObjectsLayerWithMaster;
@property(readonly) Class superclass;

+ (id)blankSlideWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;

- (void)acceptVisitor:(id)arg1;
- (void)addInfoUsingObjectPlaceholderGeometry:(id)arg1;
- (void)addMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)areInfosUsingObjectPlaceholderGeometry;
- (id)childEnumerator;
- (void)dealloc;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (id)infoCorrespondingToMasterInfo:(id)arg1;
- (id)infosToDisplay;
- (id)infosUsingObjectPlaceholderGeometry;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned int)arg2 dolcContext:(id)arg3;
- (BOOL)isComponentRoot;
- (BOOL)isNoteSelectionPath:(id)arg1;
- (void)loadFromArchive:(const struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct TransitionArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; struct GeometryArchive {} *x17; unsigned int x18; unsigned int x19; struct ShapeStylePropertiesArchive {} *x20; struct GeometryArchive {} *x21; unsigned int x22; unsigned int x23; struct ShapeStylePropertiesArchive {} *x24; struct GeometryArchive {} *x25; unsigned int x26; unsigned int x27; struct ShapeStylePropertiesArchive {} *x28; struct Reference {} *x29; struct RepeatedPtrField<TSP::Reference> { void **x_30_1_1; int x_30_1_2; int x_30_1_3; int x_30_1_4; } x30; struct RepeatedPtrField<TSP::Reference> { void **x_31_1_1; int x_31_1_2; int x_31_1_3; int x_31_1_4; } x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x33; struct Reference {} *x34; struct RepeatedPtrField<TSD::GuideArchive> { void **x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; } x35; struct Reference {} *x36; struct Reference {} *x37; struct RepeatedPtrField<TSP::Reference> { void **x_38_1_1; int x_38_1_2; int x_38_1_3; int x_38_1_4; } x38; struct Reference {} *x39; bool x40; bool x41; bool x42; bool x43; int x44; }*)arg1 unarchiver:(id)arg2;
- (id)master;
- (id)note;
- (BOOL)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)arg1;
- (id)p_slideNodeUUIDStringFromURL:(id)arg1;
- (BOOL)p_urlIsSlideSpecific:(id)arg1;
- (id)packageLocator;
- (void)removeDrawable:(id)arg1;
- (void)removeInfoUsingObjectPlaceholderGeometry:(id)arg1;
- (void)removeMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)saveToArchive:(struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct TransitionArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; struct GeometryArchive {} *x17; unsigned int x18; unsigned int x19; struct ShapeStylePropertiesArchive {} *x20; struct GeometryArchive {} *x21; unsigned int x22; unsigned int x23; struct ShapeStylePropertiesArchive {} *x24; struct GeometryArchive {} *x25; unsigned int x26; unsigned int x27; struct ShapeStylePropertiesArchive {} *x28; struct Reference {} *x29; struct RepeatedPtrField<TSP::Reference> { void **x_30_1_1; int x_30_1_2; int x_30_1_3; int x_30_1_4; } x30; struct RepeatedPtrField<TSP::Reference> { void **x_31_1_1; int x_31_1_2; int x_31_1_3; int x_31_1_4; } x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x33; struct Reference {} *x34; struct RepeatedPtrField<TSD::GuideArchive> { void **x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; } x35; struct Reference {} *x36; struct Reference {} *x37; struct RepeatedPtrField<TSP::Reference> { void **x_38_1_1; int x_38_1_2; int x_38_1_3; int x_38_1_4; } x38; struct Reference {} *x39; bool x40; bool x41; bool x42; bool x43; int x44; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setMaster:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setToMaster:(id)arg1;
- (void)setToMasterUsingBlob:(id)arg1;
- (BOOL)slideObjectsLayerWithMaster;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)arg1 oldHyperlink:(id)arg2 newHyperlink:(id)arg3;
- (void)updateSlideSpecificLinkMapForInfo:(id)arg1 newHyperlink:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
