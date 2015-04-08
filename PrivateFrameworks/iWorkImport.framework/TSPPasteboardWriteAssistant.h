/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, TSPEncoderWriteCoordinator, TSPMemoryEncoder, TSPObjectContext, TSPPasteboard, TSPPasteboardNativeDataProvider, TSPPasteboardObject;

@interface TSPPasteboardWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate, TSPPasteboardWriting, TSPProxyObjectMapping> {
    NSDictionary *_contentDescription;
    NSMutableDictionary *_dataProviderMap;
    NSMutableOrderedSet *_dataProviderTypes;
    BOOL _didAttemptToSerializeNativeData;
    TSPMemoryEncoder *_encoder;
    BOOL _excludeNativeData;
    long _nativeDataOnceToken;
    TSPPasteboard *_nativeDataPasteboard;
    TSPPasteboardNativeDataProvider *_nativeDataProvider;
    TSPObjectContext *_pasteboardContext;
    TSPPasteboardObject *_pasteboardObject;
    BOOL _shouldRefuseAdditionalDataProviders;
    TSPEncoderWriteCoordinator *_writeCoordinator;
    long _writeNativeDataToPasteboardOnceToken;
}

@property(copy) NSDictionary * contentDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL excludeNativeData;
@property(readonly) unsigned int hash;
@property(readonly) TSPObjectContext * pasteboardContext;
@property(readonly) TSPPasteboardObject * pasteboardObject;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (int)componentWriterMode;
- (id)contentDescription;
- (id)createMetadataForRootObject:(id)arg1 dataArchiver:(id)arg2 objectUUIDToIdentifierDictionary:(id)arg3 externalReferences:(id)arg4 weakExternalReferences:(id)arg5 lazyReferences:(id)arg6 dataReferences:(id)arg7 error:(id*)arg8;
- (void)delayArchivingOfObject:(id)arg1;
- (BOOL)excludeNativeData;
- (id)initWithContext:(id)arg1;
- (void)loadData;
- (id)pasteboardContext;
- (id)pasteboardObject;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)proxyForReferencedObject:(id)arg1;
- (void)setContentDescription:(id)arg1;
- (void)setDataProvider:(id)arg1 forTypes:(id)arg2;
- (void)setExcludeNativeData:(BOOL)arg1;
- (void)setProxy:(id)arg1 forReferencedObject:(id)arg2;
- (BOOL)skipMetadataObjectSerialization;
- (id)tspPasteboardWithPasteboard:(id)arg1;
- (void)waitForNativeDataIfNeeded;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)writeNativeDataToPasteboard:(id)arg1;

@end
