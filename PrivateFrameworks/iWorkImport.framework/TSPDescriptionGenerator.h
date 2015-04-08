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

@class NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, TSPObjectContext;

@interface TSPDescriptionGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableOrderedSet *_components;
    TSPObjectContext *_context;
    NSMutableDictionary *_dataMap;
    NSMutableDictionary *_inverseUUIDMap;
    struct map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > > { 
        struct __tree<std::__1::__value_type<long long, TSP::DescriptionPrinterMessage>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, TSP::DescriptionPrinterMessage>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, TSP::DescriptionPrinterMessage> > > { 
            struct __tree_node<std::__1::__value_type<long long, TSP::DescriptionPrinterMessage>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, TSP::DescriptionPrinterMessage>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, TSP::DescriptionPrinterMessage>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _messageMap;
    NSMutableDictionary *_objects;
    unsigned int _options;
    NSMutableDictionary *_uuidMap;
}

+ (id)directoryForDocumentUUID:(id)arg1 versionUUID:(id)arg2;
+ (BOOL)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3;
+ (id)filenameForPackageIdentifier:(unsigned char)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct map<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > >, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > > > > { struct __tree<std::__1::__value_type<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > > > > { struct __tree_node<std::__1::__value_type<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > >, std::__1::less<unsigned long long>, true> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)_messageAlternateMapFromAlternateArchivers:(id)arg1;
- (struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)_strongReferencesFromArchiver:(id)arg1;
- (void)addArchiver:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)addMessage:(const struct Message { int (**x1)(); }*)arg1 withStrongReferencesMap:(struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg2 forObjectIdentifier:(long long)arg3;
- (void)addObject:(id)arg1;
- (void)addUUIDMapEntriesForComponent:(id)arg1;
- (id)descriptionForIdentifier:(long long)arg1;
- (BOOL)dumpComponentMessages:(id)arg1 printNewLine:(BOOL)arg2 withPrinter:(struct ReferencePrinter { int x1; bool x2; bool x3; bool x4; bool x5; bool x6; id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void*x10; id x11; void*x12; struct map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > > {} *x13; struct set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __tree_node<unsigned long long, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long long> > { unsigned long x_3_3_1; } x_1_2_3; } x_14_1_1; } x14; }*)arg3 outputStream:(struct FileOutputStream { int (**x1)(); struct CopyingFileOutputStream { int (**x_2_1_1)(); int x_2_1_2; bool x_2_1_3; bool x_2_1_4; int x_2_1_5; } x2; struct CopyingOutputStreamAdaptor { int (**x_3_1_1)(); struct CopyingOutputStream {} *x_3_1_2; bool x_3_1_3; bool x_3_1_4; long long x_3_1_5; struct scoped_array<unsigned char> { char *x_6_2_1; } x_3_1_6; int x_3_1_7; int x_3_1_8; } x3; }*)arg4;
     /* Encoded args for previous method: c24@0:4@8c12^{ReferencePrinter=iBBBBB@?@?@?^{map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > >}{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >={__tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >=^{__tree_node<unsigned long long, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned long long> >=L}}}}16^{FileOutputStream=^^?{CopyingFileOutputStream=^^?iBBi}{CopyingOutputStreamAdaptor=^^?^{CopyingOutputStream}BBq{scoped_array<unsigned char>=*}ii}}20 */

- (BOOL)dumpMessagesForDocumentUUID:(id)arg1 versionUUID:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (BOOL)dumpMessagesToFilePath:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 options:(unsigned int)arg2;
- (id)newDataDigestHandler;
- (id)newObjectIdentifierForUUIDHandler;
- (id)newPrinterCustomPropertiesHandler;
- (struct ReferencePrinter { int x1; bool x2; bool x3; bool x4; bool x5; bool x6; id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void*x10; id x11; void*x12; struct map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > > {} *x13; struct set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __tree_node<unsigned long long, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long long> > { unsigned long x_3_3_1; } x_1_2_3; } x_14_1_1; } x14; }*)newReferencePrinter;
     /* Encoded args for previous method: ^{ReferencePrinter=iBBBBB@?@?@?^{map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > >}{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >={__tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >=^{__tree_node<unsigned long long, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned long long> >=L}}}}8@0:4 */

- (void)performPrintOperationBlock:(id)arg1;
- (void)processPackageMetadataMessage:(struct shared_ptr<google::protobuf::Message> { struct Message {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
