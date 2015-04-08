/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSIndexSet;

@interface BRCDownloadContentEntry : BRCDownloadEntry {
    NSIndexSet *_desiredIndices;
    unsigned int _liveDocumentID;
    unsigned long long _liveFileID;
    BOOL _liveItemIsPackage;
    BOOL _requiresSecondPhase;
    BOOL _sharedZone;
}

@property(readonly) NSIndexSet * desiredIndices;
@property(readonly) unsigned int liveDocumentID;
@property(readonly) unsigned long long liveFileID;
@property(readonly) BOOL liveItemIsPackage;
@property(readonly) BOOL requiresSecondPhase;

- (void).cxx_destruct;
- (BOOL)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4;
- (BOOL)_stageEntryWithSession:(id)arg1 error:(id*)arg2;
- (BOOL)_stageEntryWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4;
- (id)description;
- (id)desiredIndices;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
- (int)kind;
- (unsigned int)liveDocumentID;
- (unsigned long long)liveFileID;
- (BOOL)liveItemIsPackage;
- (BOOL)requiresSecondPhase;

@end
