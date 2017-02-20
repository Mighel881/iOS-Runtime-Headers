/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabase : NSObject <HDContentProtectionObserver, HDDiagnosticObject, HDHealthDatabase, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate> {
    NSMutableSet * _activeDatabases;
    NSConditionLock * _activeDatabasesLock;
    NSOperationQueue * _asynchronousOperationQueue;
    BOOL  _checkpointRequired;
    HDContentProtectionManager * _contentProtectionManager;
    HDSQLiteDatabasePool * _databasePool;
    BOOL  _didRunPostMigrationUpdates;
    NSMutableDictionary * _extendedTransactions;
    NSMutableArray * _firstUnlockBlocks;
    BOOL  _hasScheduledCheckpoint;
    NSObject<OS_dispatch_queue> * _hfdQueue;
    struct shared_ptr<health::DataStore> { 
        struct DataStore {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _highFrequencyDataStore;
    NSString * _homeDirectoryPath;
    BOOL  _integrityCheckInProgress;
    int  _invalidated;
    BOOL  _isObservingContentProtection;
    HDDatabaseJournal * _journal;
    NSObject<OS_dispatch_group> * _journalGroup;
    NSObject<OS_dispatch_queue> * _journalQueue;
    NSHashTable * _migratedDatabases;
    int  _observedContentProtectionState;
    double  _offsetTimeInterval;
    unsigned int  _pendingJournalMerges;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _protectedDataObserverNotificationQueue;
    NSObject<OS_dispatch_queue> * _protectedDataObserverQueue;
    NSHashTable * _protectedDataObservers;
    NSObject<OS_dispatch_queue> * _protectedDataQueue;
    int  _protectedDataState;
    NSLock * _schemaMigrationLock;
    BOOL  _shouldNotifyFirstUnlockObservers;
    NSString * _threadLocalActiveConnectionKey;
}

@property (nonatomic, retain) NSMutableSet *activeDatabases;
@property (nonatomic, retain) NSConditionLock *activeDatabasesLock;
@property (nonatomic, retain) NSOperationQueue *asynchronousOperationQueue;
@property (nonatomic) BOOL checkpointRequired;
@property (nonatomic, retain) HDContentProtectionManager *contentProtectionManager;
@property (getter=isDataProtectedByFirstUnlockAvailable, nonatomic, readonly) BOOL dataProtectedByFirstUnlockAvailable;
@property (nonatomic, readonly) HDSQLiteDatabasePool *databasePool;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRunPostMigrationUpdates;
@property (nonatomic, retain) NSMutableDictionary *extendedTransactions;
@property (nonatomic, retain) NSMutableArray *firstUnlockBlocks;
@property (nonatomic) BOOL hasScheduledCheckpoint;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *hfdQueue;
@property (nonatomic, copy) NSString *homeDirectoryPath;
@property (nonatomic) BOOL integrityCheckInProgress;
@property (nonatomic) int invalidated;
@property (nonatomic) BOOL isObservingContentProtection;
@property (nonatomic, readonly) HDDatabaseJournal *journal;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *journalGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *journalQueue;
@property (nonatomic, retain) NSHashTable *migratedDatabases;
@property (nonatomic) int observedContentProtectionState;
@property (nonatomic) double offsetTimeInterval;
@property (nonatomic) unsigned int pendingJournalMerges;
@property (nonatomic) HDProfile *profile;
@property (getter=isProtectedDataAvailable, nonatomic, readonly) BOOL protectedDataAvailable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *protectedDataObserverNotificationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *protectedDataObserverQueue;
@property (nonatomic, retain) NSHashTable *protectedDataObservers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *protectedDataQueue;
@property (nonatomic) int protectedDataState;
@property (nonatomic, retain) NSLock *schemaMigrationLock;
@property (nonatomic) BOOL shouldNotifyFirstUnlockObservers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *threadLocalActiveConnectionKey;

+ (id)_databaseCorruptionDefaultKeyForDatabaseWithName:(id)arg1;
+ (id)allEntityClasses;
+ (id)allEntityClassesWithProtectionClass:(int)arg1;
+ (int)currentSchemaVersionForProtectedDatabase:(BOOL)arg1;
+ (void)didEncounterUncorruptedDatabaseWithName:(id)arg1;
+ (void)didPassIntegrityCheck;
+ (void)loadEntityClasses;
+ (void)reportDatabaseCorruptionForDatabaseWithName:(id)arg1;
+ (void)reportIntegrityCheckFailure;
+ (BOOL)shouldEnableFutureMigrations;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)HFDSizeInBytes;
- (id)_URLForWALForDatabaseAtURL:(id)arg1;
- (id)_activeDatabase;
- (BOOL)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id*)arg3;
- (BOOL)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)_canAttachProtectedDatabaseWithOptions:(unsigned int)arg1 error:(id*)arg2;
- (id)_copyProtectedDataObservers;
- (BOOL)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 error:(id*)arg3;
- (id)_createDatabaseConnection;
- (id)_createDatabaseConnectionWithURL:(id)arg1;
- (int)_createEntitiesInDatabase:(id)arg1 protectedEntities:(BOOL)arg2 error:(id*)arg3;
- (id)_databaseForOptions:(unsigned int)arg1 outerDatabase:(id)arg2 error:(id*)arg3;
- (id)_databaseNameForProtectedDatabase:(BOOL)arg1;
- (void)_enableIncrementalAutoVacuumForDatabaseAtURL:(id)arg1;
- (long long)_fileSizeForURL:(id)arg1 error:(id*)arg2;
- (struct shared_ptr<health::DataStore> { struct DataStore {} *x1; struct __shared_weak_count {} *x2; })_highFrequencyDataStoreWithError:(id*)arg1;
- (id)_highPriorityReaderDatabaseWithError:(id*)arg1;
- (void)_invalidateAndWaitWithHandler:(id /* block */)arg1;
- (BOOL)_isDatabaseValidWithError:(id*)arg1;
- (id)_journalDirectoryPath;
- (BOOL)_journalQueue_performJournalMergeAndCleanup;
- (int)_migrateDatabase:(id)arg1 fromUserVersion:(int)arg2 protectedDatabase:(BOOL)arg3 error:(id*)arg4;
- (BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (int)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id*)arg2;
- (int)_migrateOrCreateSchemaWithDatabase:(id)arg1 protectedDatabase:(BOOL)arg2 error:(id*)arg3;
- (id)_newDatabaseConnectionWithError:(id*)arg1;
- (void)_performIntegrityCheck;
- (void)_protectedDataObserverQueue_addObserver:(id)arg1;
- (void)_protectedDataObserverQueue_removeObserver:(id)arg1;
- (void)_protectedDataQueue_beginObservingContentProtection;
- (void)_protectedDataQueue_mergeJournalAsynchronously;
- (int)_protectedDataState;
- (void)_protectedDatabaseDidBecomeAvailable;
- (id)_readerDatabaseWithError:(id*)arg1;
- (void)_reportDatabaseSizes;
- (BOOL)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id*)arg2;
- (void)_setActiveDatabase:(id)arg1;
- (id)_writerDatabaseWithError:(id*)arg1;
- (BOOL)accessHighFrequencyDataStoreWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)activeDatabases;
- (id)activeDatabasesLock;
- (BOOL)addJournalEntries:(id)arg1 error:(id*)arg2;
- (BOOL)addJournalEntry:(id)arg1 error:(id*)arg2;
- (void)addProtectedDataObserver:(id)arg1;
- (id)asynchronousOperationQueue;
- (id)beginExtendedTransactionWithOptions:(unsigned int)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id*)arg4;
- (void)beginObservingContentProtection;
- (BOOL)checkpointRequired;
- (id)contentProtectionManager;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (id)databasePool;
- (void)databasePool:(id)arg1 didFlushDatabases:(id)arg2;
- (id)databaseSizeInBytesExcludingHFD;
- (id)diagnosticDescription;
- (BOOL)didRunPostMigrationUpdates;
- (BOOL)discardHighFrequencyDataStoreWithError:(id*)arg1;
- (id)dumpSchemaAndReturnError:(id*)arg1;
- (id)extendedDatabaseTransactionForIdentifier:(id)arg1;
- (id)extendedTransactions;
- (void)finalizeExtendedTransactionForIdentifier:(id)arg1;
- (id)firstUnlockBlocks;
- (BOOL)hasScheduledCheckpoint;
- (id)hfdQueue;
- (id)highFrequencyDataStoreURL;
- (id)homeDirectoryPath;
- (id)initWithHomeDirectoryPath:(id)arg1 profile:(id)arg2;
- (BOOL)integrityCheckInProgress;
- (void)invalidateAndObliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2;
- (void)invalidateAndWait;
- (int)invalidated;
- (BOOL)isDataProtectedByFirstUnlockAvailable;
- (BOOL)isObservingContentProtection;
- (BOOL)isProtectedDataAvailable;
- (id)journal;
- (id)journalGroup;
- (id)journalQueue;
- (id)mainDatabaseURL;
- (int)migrateOrCreateSchemaInDatabase:(id)arg1 protectedDatabaseAvailable:(BOOL)arg2 error:(id*)arg3;
- (id)migratedDatabases;
- (id)newDatabaseForDatabasePool:(id)arg1 error:(id*)arg2;
- (int)observedContentProtectionState;
- (double)offsetTimeInterval;
- (unsigned int)pendingJournalMerges;
- (void)performAsynchronously:(id /* block */)arg1;
- (BOOL)performJournalMergeUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (BOOL)performMigrationForOptions:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)performTransactionWithOptions:(unsigned int)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3 inaccessibilityHandler:(id /* block */)arg4;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(id /* block */)arg1;
- (id)profile;
- (id)protectedDataObserverNotificationQueue;
- (id)protectedDataObserverQueue;
- (id)protectedDataObservers;
- (id)protectedDataQueue;
- (int)protectedDataState;
- (id)protectedDatabaseURL;
- (void)removeProtectedDataObserver:(id)arg1;
- (id)schemaMigrationLock;
- (void)setActiveDatabases:(id)arg1;
- (void)setActiveDatabasesLock:(id)arg1;
- (void)setAsynchronousOperationQueue:(id)arg1;
- (void)setCheckpointRequired:(BOOL)arg1;
- (void)setContentProtectionManager:(id)arg1;
- (void)setDidRunPostMigrationUpdates:(BOOL)arg1;
- (void)setExtendedTransactions:(id)arg1;
- (void)setFirstUnlockBlocks:(id)arg1;
- (void)setHasScheduledCheckpoint:(BOOL)arg1;
- (void)setHfdQueue:(id)arg1;
- (void)setHomeDirectoryPath:(id)arg1;
- (void)setIntegrityCheckInProgress:(BOOL)arg1;
- (void)setInvalidated:(int)arg1;
- (void)setIsObservingContentProtection:(BOOL)arg1;
- (void)setJournalGroup:(id)arg1;
- (void)setJournalQueue:(id)arg1;
- (void)setMigratedDatabases:(id)arg1;
- (void)setObservedContentProtectionState:(int)arg1;
- (void)setOffsetTimeInterval:(double)arg1;
- (void)setPendingJournalMerges:(unsigned int)arg1;
- (void)setProfile:(id)arg1;
- (void)setProtectedDataObserverNotificationQueue:(id)arg1;
- (void)setProtectedDataObserverQueue:(id)arg1;
- (void)setProtectedDataObservers:(id)arg1;
- (void)setProtectedDataQueue:(id)arg1;
- (void)setProtectedDataState:(int)arg1;
- (void)setSchemaMigrationLock:(id)arg1;
- (void)setShouldNotifyFirstUnlockObservers:(BOOL)arg1;
- (void)setThreadLocalActiveConnectionKey:(id)arg1;
- (BOOL)shouldNotifyFirstUnlockObservers;
- (id)threadLocalActiveConnectionKey;
- (id)virtualFilesystemModuleForDatabase:(id)arg1;

@end
