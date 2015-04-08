/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDGetSharesURLRequest : CKDURLRequest {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareFetchedBlock;

    NSArray *_shareIDs;
    NSMutableDictionary *_shareIDsByRequestID;
    NSArray *_zoneIDs;
    NSMutableDictionary *_zoneIDsByRequestID;
}

@property(copy) id shareFetchedBlock;
@property(retain) NSArray * shareIDs;
@property(retain) NSMutableDictionary * shareIDsByRequestID;
@property(retain) NSArray * zoneIDs;
@property(retain) NSMutableDictionary * zoneIDsByRequestID;

- (void).cxx_destruct;
- (id)initWithShareIDs:(id)arg1;
- (id)initWithZoneIDs:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setShareFetchedBlock:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setShareIDsByRequestID:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (void)setZoneIDsByRequestID:(id)arg1;
- (id)shareFetchedBlock;
- (id)shareIDs;
- (id)shareIDsByRequestID;
- (id)zoneIDs;
- (id)zoneIDsByRequestID;

@end
