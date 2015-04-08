/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID, TSPDatabase, TSPDocumentResourceDataProvider, TSPFinalizeHandlerQueue, TSPObjectContext;

@interface TSPDatabaseReadCoordinator : TSPReadCoordinatorBase <TSPDatabaseReaderDelegate, TSPReadCoordinator> {
    NSMutableDictionary *_appRelativeDataDictionary;
    NSObject<OS_dispatch_queue> *_appRelativeDataQueue;
    NSUUID *_baseObjectUUID;
    TSPObjectContext *_context;
    NSMapTable *_dataDictionary;
    NSObject<OS_dispatch_queue> *_dataQueue;
    TSPDatabase *_database;
    unsigned long long _databaseVersion;
    TSPDocumentResourceDataProvider *_documentResourceDataProvider;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    NSMapTable *_objects;
    NSURL *_packageURL;
}

@property(readonly) NSUUID * baseObjectUUID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long fileFormatVersion;
@property(readonly) BOOL hasDocumentVersionUUID;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isCrossAppPaste;
@property(readonly) BOOL isCrossDocumentPaste;
@property(readonly) BOOL isFromCopy;
@property(readonly) BOOL isReadingFromDocument;
@property(readonly) unsigned char packageIdentifier;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseObjectUUID;
- (id)context;
- (id)createUpgradedOldAppBundleResourcePath:(id)arg1;
- (id)dataForAppRelativePath:(id)arg1 filename:(id)arg2;
- (id)dataForDatabaseObject:(id)arg1 filename:(id)arg2;
- (id)dataForLinkURL:(id)arg1 filename:(id)arg2;
- (id)dataForReadChannel:(id)arg1 filename:(id)arg2 linkURLOrNil:(id)arg3;
- (id)databaseReader:(id)arg1 wantsDataForAppRelativePath:(id)arg2 filename:(id)arg3;
- (id)databaseReader:(id)arg1 wantsDataForDatabaseObjectIdentifier:(long long)arg2 filename:(id)arg3;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (id)documentResourceEntryForAppRelativePath:(id)arg1;
- (BOOL)endReading;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (unsigned long long)fileFormatVersion;
- (BOOL)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1 packageURL:(id)arg2 finalizeHandlerQueue:(id)arg3 documentResourceDataProvider:(id)arg4 error:(id*)arg5;
- (BOOL)isReadingFromDocument;
- (unsigned char)packageIdentifier;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(id)arg2;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(id)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(id)arg6;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;

@end
