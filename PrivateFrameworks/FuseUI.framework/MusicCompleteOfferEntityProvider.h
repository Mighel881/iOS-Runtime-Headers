/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCompleteOfferEntityProvider : MusicInterleavedEntityProvider {
    unsigned int  _completionOfferingRevisionID;
    BOOL  _hasValidCompletionOffering;
    unsigned int  _loadedCompletionOfferingRevisionID;
    <MusicEntityProviding> * _localEntityProvider;
    NSOperationQueue * _operationQueue;
    BOOL  _shouldIncludeStoreCompleteOffer;
    BOOL  _storeCompleteOfferAvailable;
    <MusicEntityProviding> * _storeEntityProvider;
}

@property (nonatomic, retain) <MusicEntityProviding> *localEntityProvider;
@property (nonatomic) BOOL shouldIncludeStoreCompleteOffer;
@property (getter=isStoreCompleteOfferAvailable, nonatomic, readonly) BOOL storeCompleteOfferAvailable;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_localEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_reloadCompleteOffering;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateEntityProviders;
- (void)_updateStoreCompleteOfferAvailable;
- (void)dealloc;
- (BOOL)hasMultipleEntitiesIncludingStoreContent;
- (id)init;
- (BOOL)isStoreCompleteOfferAvailable;
- (id)localEntityProvider;
- (void)setLocalEntityProvider:(id)arg1;
- (void)setShouldIncludeStoreCompleteOffer:(BOOL)arg1;
- (BOOL)shouldIncludeStoreCompleteOffer;

@end
