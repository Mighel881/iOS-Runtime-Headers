/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCloudContext : NSObject <FCCacheFlushing, FCContentContext, FCPrivateDataContext, FCTestingContext> {
    <FCContentContext> * _contentContext;
    BOOL  _deviceIsiPad;
    FCCommandQueue * _endpointCommandQueue;
    FCClientEndpointConnection * _endpointConnection;
    FCFeedManager * _feedManager;
    <FCFlintHelper> * _flintHelper;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    FCNotificationController * _notificationController;
    FCCommandQueue * _notificationsEndpointCommandQueue;
    FCNotificationsEndpointConnection * _notificationsEndpointConnection;
    <FCPrivateDataContext> * _privateDataContext;
    FCPurchaseController * _purchaseController;
    BOOL  _runningPPT;
    FCSubscriptionController * _subscriptionController;
}

@property (nonatomic, readonly) FCAppConfiguration *appConfiguration;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, readonly, copy) NSString *contentDirectory;
@property (nonatomic, readonly, copy) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL deviceIsiPad;
@property (nonatomic, readonly) FCCommandQueue *endpointCommandQueue;
@property (nonatomic, readonly) FCClientEndpointConnection *endpointConnection;
@property (nonatomic, readonly) FCFeedManager *feedManager;
@property (nonatomic) <FCFlintHelper> *flintHelper;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) BOOL hasBeenRateLimited;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <FCContentContextInternal> *internalContentContext;
@property (nonatomic, readonly) <FCPrivateDataContextInternal> *internalPrivateDataContext;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) FCNotificationController *notificationController;
@property (nonatomic, readonly) FCCommandQueue *notificationsEndpointCommandQueue;
@property (nonatomic, readonly) FCNotificationsEndpointConnection *notificationsEndpointConnection;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, retain) <FCPrivateDataContext> *privateDataContext;
@property (nonatomic, readonly, copy) NSString *privateDataDirectory;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) BOOL privateDataSyncingEnabled;
@property (nonatomic, readonly) <FCPushNotificationHandling> *privatePushNotificationHandler;
@property (nonatomic, readonly) FCPurchaseController *purchaseController;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (getter=isRunningPPT, nonatomic) BOOL runningPPT;
@property (nonatomic, readonly) FCSubscriptionController *subscriptionController;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, readonly) FCUserInfo *userInfo;

+ (void)initialize;
+ (id)testingContext;

- (void).cxx_destruct;
- (id)appConfiguration;
- (id)articleController;
- (id)assetManager;
- (void)clearCloudKitCaches;
- (id)contentContext;
- (id)contentDirectory;
- (id)contentStoreFrontID;
- (BOOL)deviceIsiPad;
- (void)enableFlushingWithFlushingThreshold:(unsigned int)arg1;
- (id)endpointCommandQueue;
- (id)endpointConnection;
- (id)feedManager;
- (id)fetchEndOfArticleDataForHeadline:(id)arg1 initialRelatedHeadlineCount:(unsigned int)arg2 initialPublisherHeadlineCount:(unsigned int)arg3 totalRelatedHeadlineCount:(unsigned int)arg4 totalPublisherHeadlineCount:(unsigned int)arg5 fetchRelatedHeadline:(BOOL)arg6 fetchAllTopics:(BOOL)arg7 completion:(id /* block */)arg8;
- (id)flintHelper;
- (id)flintResourceManager;
- (void)getCoverImageForFeed:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)hasBeenRateLimited;
- (id)init;
- (id)initForTesting;
- (id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)initWithContentHostDirectory:(id)arg1 privateDataHostDirectory:(id)arg2 privateDataActionProvider:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned int)arg5 feedUsage:(int)arg6 lockStoreFrontIfNeeded:(BOOL)arg7 deviceIsiPad:(BOOL)arg8;
- (id)insertTestArticle;
- (id)insertTestArticlesWithCount:(unsigned int)arg1;
- (id)internalContentContext;
- (id)internalPrivateDataContext;
- (BOOL)isPrivateDataSyncingEnabled;
- (BOOL)isRunningPPT;
- (id)networkBehaviorMonitor;
- (id)notificationController;
- (id)notificationsController;
- (id)notificationsEndpointCommandQueue;
- (id)notificationsEndpointConnection;
- (id)personalizationData;
- (id)privateChannelMembershipController;
- (id)privateDataContext;
- (id)privateDataDirectory;
- (id)privatePushNotificationHandler;
- (id)privateStoreWithName:(id)arg1 version:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)purchaseController;
- (id)readingHistory;
- (id)readingList;
- (void)setContentContext:(id)arg1;
- (void)setFlintHelper:(id)arg1;
- (void)setPrivateDataContext:(id)arg1;
- (void)setRunningPPT:(BOOL)arg1;
- (id)subscriptionController;
- (id)subscriptionList;
- (id)tagController;
- (id)tagSettings;
- (id)userInfo;

@end
