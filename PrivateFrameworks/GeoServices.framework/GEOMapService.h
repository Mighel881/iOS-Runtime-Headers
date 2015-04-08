/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, NSLock;

@interface GEOMapService : NSObject {
    NSArray *_preferredLanguages;
    NSLock *_preferredLanguagesLock;
}

+ (id)sharedService;

- (id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2;
- (id)_geoMapItemForData:(id)arg1;
- (id)_geoMapItemForData:(id)arg1 withSource:(unsigned int)arg2;
- (void)_geoMapItemsForResponseData:(id)arg1 handler:(id)arg2;
- (id)_geoMapItemsForUpdatedPlacesInResolution:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (id)_preferredLanguages;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 includeETA:(BOOL)arg4 traits:(id)arg5;
- (id)_ticketForAutoCompleteFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4;
- (id)_ticketForAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3;
- (id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)_ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_ticketForFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4;
- (id)_ticketForMUIDs:(id)arg1 traits:(id)arg2;
- (id)_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4;
- (id)_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(BOOL)arg4 traits:(id)arg5;
- (id)_ticketForSearchQuery:(id)arg1 hint:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(BOOL)arg4 traits:(id)arg5;
- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)dealloc;
- (id)defaultTraits;
- (id)directionsURL;
- (id)init;
- (int)localSearchProviderID;
- (id)searchURL;
- (void)submitUsageForTraits:(id)arg1;
- (void)submitUsageForTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForMUIDs:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)ticketForOptInToProblemSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3;
- (id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 placeForStartDirectionsSearchInput:(id)arg3 placeForEndDirectionsSearchInput:(id)arg4 traits:(id)arg5;
- (id)ticketForRefinementFromCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeETA:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 includeETA:(BOOL)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(BOOL)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(BOOL)arg4 includeETA:(BOOL)arg5 traits:(id)arg6;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (void)trackMapItem:(id)arg1;

@end
