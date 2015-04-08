/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MKLocationProvider>, <MKLocationRecorder>, CLHeading, CLLocation, GEOLocation, GEOLocationShifter, NSBundle, NSError, NSHashTable, NSMutableArray, NSString, NSTimer, _MKWiFiObserver;

@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate, _MKWiFiObserverDelegate> {
    BOOL _airplaneModeEnabled;
    BOOL _airplaneModeEnabledIsValid;
    struct __SCPreferences { } *_airplaneModePrefs;
    BOOL _allowUpdateCoalescing;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    NSTimer *_coalesceTimer;
    int _consecutiveOutOfCourseCount;
    BOOL _continuedAfterBecomingInactive;
    BOOL _continuesWhileInactive;
    BOOL _enabled;
    BOOL _hasCustomDesiredAccuracy;
    CLHeading *_heading;
    NSHashTable *_headingObservers;
    double _headingUpdateTime;
    BOOL _isLastLocationStale;
    CLLocation *_lastLocation;
    BOOL _lastLocationPushed;
    double _lastLocationReportTime;
    double _lastLocationUpdateTime;
    double _lastVehicleHeading;
    double _lastVehicleHeadingUpdateTime;
    double _lastVehicleSpeed;
    double _lastVehicleSpeedUpdateTime;
    double _locationAccuracyUpdateTime;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _locationCorrector;

    NSError *_locationError;
    NSHashTable *_locationListeners;
    NSHashTable *_locationObservers;
    <MKLocationProvider> *_locationProvider;
    <MKLocationRecorder> *_locationRecorder;
    GEOLocationShifter *_locationShifter;
    BOOL _logStartStopLocationUpdates;
    double _minimumLocationUpdateInterval;
    double _navCourse;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _networkActivity;

    NSMutableArray *_recentLocationUpdateIntervals;
    BOOL _suspended;
    CLHeading *_throttledHeading;
    BOOL _trackingHeading;
    BOOL _trackingLocation;
    BOOL _useCourseForHeading;
    _MKWiFiObserver *_wifiObserver;
}

@property int activityType;
@property BOOL allowUpdateCoalescing;
@property(copy) id authorizationRequestBlock;
@property BOOL continuesWhileInactive;
@property(readonly) GEOLocation * courseCorrectedLocation;
@property(readonly) GEOLocation * currentLocation;
@property(readonly) double currentVehicleHeading;
@property(readonly) double currentVehicleSpeed;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property double desiredAccuracy;
@property double distanceFilter;
@property(retain) NSBundle * effectiveBundle;
@property(copy) NSString * effectiveBundleIdentifier;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) GEOLocation * gridSnappedCurrentLocation;
@property(readonly) BOOL hasLocation;
@property(readonly) unsigned int hash;
@property(readonly) CLHeading * heading;
@property int headingOrientation;
@property(readonly) double headingUpdateTimeInterval;
@property(readonly) BOOL isAirplaneModeBlockingLocation;
@property(readonly) BOOL isHeadingServicesAvailable;
@property(readonly) BOOL isLastLocationStale;
@property(readonly) BOOL isLocationServicesApproved;
@property(readonly) BOOL isLocationServicesAvailable;
@property(readonly) BOOL isLocationServicesDenied;
@property(readonly) BOOL isLocationServicesEnabled;
@property(readonly) BOOL isLocationServicesPossiblyAvailable;
@property(readonly) BOOL isLocationServicesRestricted;
@property(readonly) BOOL isWiFiEnabled;
@property(readonly) CLLocation * lastLocation;
@property(getter=wasLastLocationPushed,readonly) BOOL lastLocationPushed;
@property(readonly) int lastLocationSource;
@property(copy) id locationCorrector;
@property(readonly) NSError * locationError;
@property(retain) <MKLocationProvider> * locationProvider;
@property(retain) <MKLocationRecorder> * locationRecorder;
@property(getter=isLocationServicesAuthorizationNeeded,readonly) BOOL locationServicesAuthorizationNeeded;
@property(getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(readonly) BOOL locationShiftEnabled;
@property BOOL logStartStopLocationUpdates;
@property BOOL matchInfoEnabled;
@property double minimumLocationUpdateInterval;
@property(readonly) double navigationCourse;
@property(copy) id networkActivity;
@property(readonly) Class superclass;
@property(retain) CLHeading * throttledHeading;
@property BOOL useCourseForHeading;
@property(readonly) double vehicleHeadingOrCourse;

+ (void)setCanMonitorWiFiStatus:(BOOL)arg1;
+ (id)sharedLocationManager;

- (void).cxx_destruct;
- (void)_airplaneModeChanged;
- (BOOL)_isTimeToResetOnResume;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)_refreshAirplaneMode;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_setTrackingHeading:(BOOL)arg1;
- (void)_setTrackingLocation:(BOOL)arg1;
- (BOOL)_shouldAllowLocationUpdateInterval:(double)arg1;
- (void)_startCoalescingUpdates:(int)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_stopCoalescingUpdates;
- (void)_suspend;
- (void)_syncLocationProviderWithTracking;
- (void)_useCoreLocationProvider;
- (int)activityType;
- (BOOL)allowUpdateCoalescing;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)authorizationRequestBlock;
- (BOOL)continuesWhileInactive;
- (id)courseCorrectedLocation;
- (id)currentLocation;
- (double)currentVehicleHeading;
- (double)currentVehicleSpeed;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2;
- (void)dealloc;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (id)gridSnappedCurrentLocation;
- (BOOL)hasLocation;
- (id)heading;
- (int)headingOrientation;
- (double)headingUpdateTimeInterval;
- (id)init;
- (BOOL)isAirplaneModeBlockingLocation;
- (BOOL)isEnabled;
- (BOOL)isHeadingServicesAvailable;
- (BOOL)isLastLocationStale;
- (BOOL)isLocationServicesApproved;
- (BOOL)isLocationServicesAuthorizationNeeded;
- (BOOL)isLocationServicesAvailable;
- (BOOL)isLocationServicesDenied;
- (BOOL)isLocationServicesEnabled;
- (BOOL)isLocationServicesPossiblyAvailable;
- (BOOL)isLocationServicesPossiblyAvailable:(id*)arg1;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (BOOL)isLocationServicesRestricted;
- (BOOL)isWiFiEnabled;
- (id)lastLocation;
- (int)lastLocationSource;
- (void)listenForLocationUpdates:(id)arg1;
- (id)locationCorrector;
- (id)locationError;
- (id)locationProvider;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (id)locationRecorder;
- (BOOL)locationShiftEnabled;
- (BOOL)logStartStopLocationUpdates;
- (BOOL)matchInfoEnabled;
- (double)minimumLocationUpdateInterval;
- (double)navigationCourse;
- (id)networkActivity;
- (void)pushLocation:(id)arg1;
- (void)reportCoalescedUpdated;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)reset;
- (void)resetAfterResumeIfNecessary;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setActivityType:(int)arg1;
- (void)setAllowUpdateCoalescing:(BOOL)arg1;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (void)setCoalesceTimer:(id)arg1;
- (void)setContinuesWhileInactive:(BOOL)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHeading:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationCorrector:(id)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setLocationRecorder:(id)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (void)setLogStartStopLocationUpdates:(BOOL)arg1;
- (void)setMatchInfoEnabled:(BOOL)arg1;
- (void)setMinimumLocationUpdateInterval:(double)arg1;
- (void)setNetworkActivity:(id)arg1;
- (void)setThrottledHeading:(id)arg1;
- (void)setUseCourseForHeading:(BOOL)arg1;
- (BOOL)shouldCoalesceUpdates;
- (BOOL)shouldStartCoalescingLocation:(id)arg1;
- (BOOL)shouldStopCoalescingLocation:(id)arg1;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(id)arg2;
- (id)singleLocationUpdateWithHandler:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)startVehicleHeadingUpdate;
- (void)startVehicleSpeedUpdate;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopVehicleHeadingUpdate;
- (void)stopVehicleSpeedUpdate;
- (id)throttledHeading;
- (BOOL)useCourseForHeading;
- (double)vehicleHeadingOrCourse;
- (BOOL)wasLastLocationPushed;
- (void)wiFiObserverDidChangeEnabled:(id)arg1;

@end
