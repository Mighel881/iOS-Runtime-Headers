/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSPDataStorage>, NSObject<OS_dispatch_queue>, NSString, TSPDataAttributes, TSPDataManager, TSPDigest, TSPObjectContext;

@interface TSPData : NSObject <TSPSplitableData> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPDataAttributes *_attributes;
    int _didCull;
    TSPDigest *_digest;
    NSString *_filename;
    long long _identifier;
    BOOL _isDeallocating;
    TSPDataManager *_manager;
    <TSPDataStorage> *_storage;
}

@property(getter=isAcknowledgedByServer) BOOL acknowledgedByServer;
@property(copy) TSPDataAttributes * attributes;
@property(readonly) TSPObjectContext * context;
@property(readonly) TSPDigest * digest;
@property(readonly) NSString * digestString;
@property(readonly) NSString * documentResourceLocator;
@property(readonly) unsigned long long encodedLength;
@property(readonly) unsigned long long encodedLengthIfLocal;
@property(readonly) NSString * filename;
@property(readonly) BOOL gilligan_isRemote;
@property(readonly) long long identifier;
@property(readonly) BOOL isApplicationData;
@property(readonly) BOOL isEncrypted;
@property(readonly) BOOL isExternalData;
@property(readonly) BOOL isReadable;
@property(readonly) unsigned long long length;
@property(readonly) unsigned long long lengthIfLocal;
@property(readonly) TSPDataManager * manager;
@property(readonly) BOOL needsDownload;
@property(readonly) unsigned char packageIdentifier;
@property(readonly) NSString * packageLocator;
@property(retain) <TSPDataStorage> * storage;
@property(readonly) NSString * type;
@property(copy) TSPDataAttributes * unsafeAttributes;

+ (void)addCullingListener:(id)arg1;
+ (id)cullingListeners;
+ (id)cullingListenersQueue;
+ (void)dataForAssetsLibraryURL:(id)arg1 context:(id)arg2 queue:(id)arg3 completion:(id)arg4;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 useFileCoordination:(BOOL)arg3 context:(id)arg4;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 useFileCoordination:(BOOL)arg3 filename:(id)arg4 context:(id)arg5;
+ (id)dataWithPattern4:(const char *)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)digestForDataWithPattern4:(const char *)arg1;
+ (id)digestStringForDataWithPattern4:(const char *)arg1;
+ (id)null;
+ (id)pasteboardTypeForIdentifier:(long long)arg1;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2;
+ (id)readOnlyDataFromURL:(id)arg1;
+ (void)removeCullingListener:(id)arg1;
+ (id)requiredAVAssetOptions;
+ (void)temporaryNSDataWithPattern4:(const char *)arg1 accessor:(id)arg2;
+ (BOOL)writeStorage:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)AVAsset;
- (id)AVAssetWithOptions:(id)arg1;
- (id)NSData;
- (id)UIImage;
- (void)addDownloadObserver:(id)arg1 options:(unsigned int)arg2 completionHandler:(id)arg3;
- (void)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1 archiver:(id)arg2;
- (id)attributes;
- (id)bookmarkData;
- (BOOL)bookmarkDataNeedsWrite;
- (id)context;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)digest;
- (id)digestString;
- (id)documentResourceLocator;
- (unsigned long long)encodedLength;
- (unsigned long long)encodedLengthIfLocal;
- (id)filename;
- (BOOL)gilligan_isRemote;
- (unsigned int)hash;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5;
- (BOOL)isAcknowledgedByServer;
- (BOOL)isApplicationData;
- (BOOL)isEncrypted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExternalData;
- (BOOL)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1;
- (BOOL)isReadable;
- (BOOL)isStorageInPackage:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)lengthIfLocal;
- (id)manager;
- (BOOL)needsDownload;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImage { }*)newCGImage;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (id)pasteboardType;
- (void)performIOChannelReadWithAccessor:(id)arg1;
- (void)performInputStreamReadWithAccessor:(id)arg1;
- (id)preferredFilename;
- (void)setAcknowledgedByServer:(BOOL)arg1;
- (void)setAttributes:(id)arg1;
- (void)setFilename:(id)arg1 storage:(id)arg2;
- (void)setStorage:(id)arg1;
- (void)setUnsafeAttributes:(id)arg1;
- (id)storage;
- (void)tsk_addDownloadObserver:(id)arg1 lockMode:(int)arg2 options:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)tsp_splitDataWithMaxSize:(unsigned long)arg1 subdataHandlerBlock:(id)arg2;
- (id)type;
- (id)unsafeAttributes;
- (void)willCull;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;

@end
