/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface NSPersistentStore : NSObject {
    NSString *_configurationName;
    NSPersistentStoreCoordinator *_coordinator;
    id _defaultFaultHandler;
    id _externalRecordsMonitor;
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    } _flags;
    id *_oidFactories;
    NSDictionary *_options;
    void *_reserved3;
    void *_temporaryIDClass;
    NSURL *_url;
}

@property(retain) NSURL * URL;
@property(copy,readonly) NSString * configurationName;
@property(copy) NSString * identifier;
@property(retain) NSDictionary * metadata;
@property(readonly) NSDictionary * options;
@property(readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property(getter=isReadOnly) BOOL readOnly;
@property(copy,readonly) NSString * type;

+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 readOnly:(BOOL*)arg3 error:(id*)arg4 options:(id)arg5;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)URL;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (id)_defaultMetadata;
- (void)_didLoadMetadata;
- (BOOL)_isMetadataDirty;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (Class)_objectIDClass;
- (void)_preflightCrossCheck;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)_rawMetadata__;
- (void)_resetObjectIDFactoriesForStoreUUIDChange;
- (void)_setMetadataDirty:(BOOL)arg1;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (BOOL)_unload:(id*)arg1;
- (void)_updateMetadata;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (void)clearCachedInformationForRequestWithIdentifier:(id)arg1;
- (id)configurationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (void)doFilesystemCleanupOnRemove:(BOOL)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)faultHandler;
- (Class)faultHandlerClass;
- (void)finalize;
- (id)identifier;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (BOOL)isReadOnly;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (BOOL)load:(id*)arg1;
- (BOOL)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)metadata;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (Class)objectIDClassForEntity:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)options;
- (id)persistentStoreCoordinator;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

@end
