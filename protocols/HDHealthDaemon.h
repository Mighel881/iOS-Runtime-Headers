/* Generated by RuntimeBrowser.
 */

@protocol HDHealthDaemon <NSObject>

@required

- (HDAchievementAssetManager *)achievementAssetManager;
- (HDAchievementDefinitionAlertManager *)achievementDefinitionAlertManager;
- (<HDNanoAlertSuppressionService> *)alertSuppressionService;
- (HDAuthorizationManager *)authorizationManager;
- (HDBackgroundTaskScheduler *)backgroundTaskScheduler;
- (_HKBehavior *)behavior;
- (HDContentProtectionManager *)contentProtectionManager;
- (HDCurrentActivitySummaryHelper *)currentActivitySummaryHelper;
- (HDDataProvenanceManager *)dataProvenanceManager;
- (void)didUpdateActiveWorkoutServers;
- (_HKFirstPartyWorkoutSnapshot *)firstPartyWorkoutSnapshot;
- (HDFitnessFriendsManager *)fitnessFriendsManager;
- (BOOL)hasAnyActiveWorkouts;
- (<HDHealthDatabase> *)healthDatabase;
- (HDDeviceManager *)healthDeviceManager;
- (HDHealthServiceManager *)healthServiceManager;
- (NSString *)homeDirectoryPath;
- (NSURL *)homeDirectoryURL;
- (BOOL)isAppleWatch;
- (NSObject<OS_dispatch_queue> *)mainQueue;
- (HDNanoSyncManager *)nanoSyncManager;
- (void)pauseAllActiveWorkoutsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performBlockWithPowerAssertionIdentifier:(void *)arg1 transactionName:(void *)arg2 powerAssertionInterval:(void *)arg3 block:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (BOOL)persistAndNotifyDataObject:(HKObject *)arg1 device:(HDDeviceEntity *)arg2 error:(id*)arg3;
- (BOOL)persistAndNotifyDataObjects:(NSArray *)arg1 device:(HDDeviceEntity *)arg2 error:(id*)arg3;
- (HDPluginManager *)pluginManager;
- (HDPrimaryProfile *)primaryProfile;
- (HDProcessStateManager *)processStateManager;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (HDRoutineGateway *)routineGateway;
- (HDServiceConnectionManager *)serviceConnectionManager;
- (void)setAchievementAssetManager:(HDAchievementAssetManager *)arg1;
- (void)setAchievementDefinitionAlertManager:(HDAchievementDefinitionAlertManager *)arg1;
- (void)setAlertSuppressionService:(id <HDNanoAlertSuppressionService>)arg1;
- (void)setCurrentActivityCacheOverrideDate:(void *)arg1 timeZone:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)setDataCollectionOptions:(NSDictionary *)arg1 forKey:(NSString *)arg2 type:(HKSampleType *)arg3 clientUUID:(NSUUID *)arg4;
- (void)setViewOnWakeService:(id <HDViewOnWakeService>)arg1;
- (HDAppSubscriptionManager *)subscriptionManager;
- (HDProfile *)temporaryProfile;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (HDUserCharacteristicsManager *)userCharacteristicsManager;
- (<HDViewOnWakeService> *)viewOnWakeService;

@end
