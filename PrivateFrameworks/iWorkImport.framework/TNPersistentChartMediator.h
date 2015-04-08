/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSCECalculationEngineRegistration, TSKDocumentObject> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)initFromUnarchiver:(id)arg1;
- (id)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willModify;

@end
