/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class BBObserver, BBSettingsGateway, BLTSectionConfiguration, BLTSettingSyncServer, NPSManager, NSString;

@interface BLTSettingSyncInternal : NSObject <BLTSettingSyncing, MCProfileConnectionObserver> {
    BLTSettingSyncServer *_connection;
    BOOL _dndEnabled;
    BOOL _dndStateUpdatedAtLeastOnce;
    BOOL _isDNDMirrorEnabled;
    BOOL _isWristDetectDisabled;
    NPSManager *_npsManager;
    BBObserver *_observer;
    BLTSectionConfiguration *_sectionConfiguration;
    BBSettingsGateway *_settingsGateway;
}

@property(retain) BLTSettingSyncServer * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isDNDMirrorEnabled;
@property(readonly) BOOL isWristDetectDisabled;
@property(retain) NPSManager * npsManager;
@property(retain) BBObserver * observer;
@property(retain) BBSettingsGateway * settingsGateway;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isWristDetectionDisabled;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_updateWristDetectSetting;
- (BOOL)_wristDetectionDisabledPreference;
- (BOOL)_wristDetectionEnabledRestriction;
- (id)connection;
- (void)dealloc;
- (unsigned int)getSettingsWillPresentBlockedByReasonForSectionInfo:(id)arg1;
- (id)init;
- (BOOL)isDNDMirrorEnabled;
- (BOOL)isWristDetectDisabled;
- (id)npsManager;
- (id)observer;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeDNDHandlers;
- (void)setBehaviorOverrideStatus:(int)arg1;
- (void)setBehaviorOverrideTypes:(unsigned int)arg1;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDNDHandlers;
- (void)setDoNotDisturb:(BOOL)arg1 updateSettings:(BOOL)arg2;
- (void)setIsDNDMirrorEnabled:(BOOL)arg1;
- (void)setNpsManager:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setPrivilegedSenderTypes:(unsigned int)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(int)arg3;
- (void)setSettingsGateway:(id)arg1;
- (id)settingsGateway;
- (void)updateDNDMirrorState;
- (void)updateDNDState;
- (unsigned int)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2;

@end
