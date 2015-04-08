/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSSet;

@interface TSPSupportMetadata : TSPObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_acknowledgedServerData;
    NSSet *_acknowledgedServerDataForArchiving;
    BOOL _isInCollaborationModeForArchiving;
}

- (void).cxx_destruct;
- (id)initCommon;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isDataAcknowledgedByServer:(id)arg1;
- (void)isDataAcknowledgedByServer:(id)arg1 completion:(id)arg2;
- (id)packageLocator;
- (void)resetAcknowledgedServerData;
- (void)saveToArchiver:(id)arg1;
- (void)setData:(id)arg1 acknowledgedByServer:(BOOL)arg2;
- (void)takeSnapshotWithCollaborationMode:(BOOL)arg1;
- (long long)tsp_identifier;

@end
