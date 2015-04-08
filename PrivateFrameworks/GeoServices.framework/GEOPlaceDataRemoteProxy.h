/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface GEOPlaceDataRemoteProxy : NSObject <GEOPlaceDataProxy> {
    NSObject<OS_dispatch_queue> *_requestQ;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)dealloc;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id)arg1;
- (id)init;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 networkActivity:(id)arg4 requesterHandler:(id)arg5;
- (void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 requesterHandler:(id)arg5;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 requesterHandler:(id)arg4;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)trackPlaceData:(id)arg1;

@end
