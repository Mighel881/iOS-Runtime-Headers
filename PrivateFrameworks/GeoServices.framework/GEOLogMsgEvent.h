/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEvent : PBCodable <NSCopying> {
    GEOLogMsgEventCacheHit * _cacheHitEvent;
    GEOLogMsgEventDirections * _directionsEvent;
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
    }  _has;
    GEOLogMsgEventListInteractionSession * _listInteractionSession;
    GEOLogMsgEventLogFramework * _logFrameworkEvent;
    NSMutableArray * _logMsgStates;
    GEOLogMsgEventMapLaunch * _mapLaunchEvent;
    GEOLogMsgEventMapsWidgetsInteractionSession * _mapsWidgetsInteractionSession;
    GEOLogMsgEventNetwork * _networkEvent;
    GEOLogMsgEventPlaceDataCache * _placeDataCacheEvent;
    GEOLogMsgEventProactiveSuggestionInteractionSession * _proactiveSuggestionInteractionSessionEvent;
    GEOLogMsgEventRefineSearchSession * _refineSearchSession;
    LOGMSGEVENTLogMsgEventRideBookedSession * _rideBookedSession;
    LOGMSGEVENTLogMsgEventRideBookingSession * _rideBookingSession;
    GEOLogMsgEventStaleResource * _staleResourceEvent;
    GEOLogMsgEventStateTiming * _stateTimingEvent;
    LOGMSGEVENTLogMsgEventTableBookedSession * _tableBookedSession;
    LOGMSGEVENTLogMsgEventTableBookingSession * _tableBookingSession;
    GEOLogMsgEventTelemetric * _telemetric;
    GEOLogMsgEventTileSetState * _tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis * _timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime * _timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch * _transitAppLaunchEvent;
    GEOLogMsgEventUserAction * _userActionEvent;
}

@property (nonatomic, retain) GEOLogMsgEventCacheHit *cacheHitEvent;
@property (nonatomic, retain) GEOLogMsgEventDirections *directionsEvent;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) BOOL hasCacheHitEvent;
@property (nonatomic, readonly) BOOL hasDirectionsEvent;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic, readonly) BOOL hasListInteractionSession;
@property (nonatomic, readonly) BOOL hasLogFrameworkEvent;
@property (nonatomic, readonly) BOOL hasMapLaunchEvent;
@property (nonatomic, readonly) BOOL hasMapsWidgetsInteractionSession;
@property (nonatomic, readonly) BOOL hasNetworkEvent;
@property (nonatomic, readonly) BOOL hasPlaceDataCacheEvent;
@property (nonatomic, readonly) BOOL hasProactiveSuggestionInteractionSessionEvent;
@property (nonatomic, readonly) BOOL hasRefineSearchSession;
@property (nonatomic, readonly) BOOL hasRideBookedSession;
@property (nonatomic, readonly) BOOL hasRideBookingSession;
@property (nonatomic, readonly) BOOL hasStaleResourceEvent;
@property (nonatomic, readonly) BOOL hasStateTimingEvent;
@property (nonatomic, readonly) BOOL hasTableBookedSession;
@property (nonatomic, readonly) BOOL hasTableBookingSession;
@property (nonatomic, readonly) BOOL hasTelemetric;
@property (nonatomic, readonly) BOOL hasTileSetStateEvent;
@property (nonatomic, readonly) BOOL hasTimeToLeaveHypothesisEvent;
@property (nonatomic, readonly) BOOL hasTimeToLeaveInitialTravelTimeEvent;
@property (nonatomic, readonly) BOOL hasTransitAppLaunchEvent;
@property (nonatomic, readonly) BOOL hasUserActionEvent;
@property (nonatomic, retain) GEOLogMsgEventListInteractionSession *listInteractionSession;
@property (nonatomic, retain) GEOLogMsgEventLogFramework *logFrameworkEvent;
@property (nonatomic, retain) NSMutableArray *logMsgStates;
@property (nonatomic, retain) GEOLogMsgEventMapLaunch *mapLaunchEvent;
@property (nonatomic, retain) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession;
@property (nonatomic, retain) GEOLogMsgEventNetwork *networkEvent;
@property (nonatomic, retain) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent;
@property (nonatomic, retain) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent;
@property (nonatomic, retain) GEOLogMsgEventRefineSearchSession *refineSearchSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventRideBookedSession *rideBookedSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventRideBookingSession *rideBookingSession;
@property (nonatomic, retain) GEOLogMsgEventStaleResource *staleResourceEvent;
@property (nonatomic, retain) GEOLogMsgEventStateTiming *stateTimingEvent;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventTableBookedSession *tableBookedSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventTableBookingSession *tableBookingSession;
@property (nonatomic, retain) GEOLogMsgEventTelemetric *telemetric;
@property (nonatomic, retain) GEOLogMsgEventTileSetState *tileSetStateEvent;
@property (nonatomic, retain) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent;
@property (nonatomic, retain) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent;
@property (nonatomic, retain) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent;
@property (nonatomic, retain) GEOLogMsgEventUserAction *userActionEvent;

+ (void)_initializeAcceptedLogMsgStateTypes;
+ (void)_initializeAllowedSessionTypes;
+ (id)acceptedLogMsgStates;
+ (id)acceptedLogMsgStatesForLogMsgEventType:(int)arg1;
+ (BOOL)logMsgEventType:(int)arg1 acceptsLogMsgStateType:(int)arg2;
+ (Class)logMsgStateType;

- (int)StringAsEventType:(id)arg1;
- (BOOL)acceptsLogMsgStateType:(int)arg1;
- (void)addLogMsgState:(id)arg1;
- (unsigned int)allowedSessionType;
- (id)cacheHitEvent;
- (void)clearLogMsgStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsEvent;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (BOOL)hasCacheHitEvent;
- (BOOL)hasDirectionsEvent;
- (BOOL)hasEventType;
- (BOOL)hasListInteractionSession;
- (BOOL)hasLogFrameworkEvent;
- (BOOL)hasMapLaunchEvent;
- (BOOL)hasMapsWidgetsInteractionSession;
- (BOOL)hasNetworkEvent;
- (BOOL)hasPlaceDataCacheEvent;
- (BOOL)hasProactiveSuggestionInteractionSessionEvent;
- (BOOL)hasRefineSearchSession;
- (BOOL)hasRideBookedSession;
- (BOOL)hasRideBookingSession;
- (BOOL)hasStaleResourceEvent;
- (BOOL)hasStateTimingEvent;
- (BOOL)hasTableBookedSession;
- (BOOL)hasTableBookingSession;
- (BOOL)hasTelemetric;
- (BOOL)hasTileSetStateEvent;
- (BOOL)hasTimeToLeaveHypothesisEvent;
- (BOOL)hasTimeToLeaveInitialTravelTimeEvent;
- (BOOL)hasTransitAppLaunchEvent;
- (BOOL)hasUserActionEvent;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFullCarPlayStateAllowed;
- (BOOL)isNavigationSessionAllowed;
- (id)listInteractionSession;
- (id)logFrameworkEvent;
- (id)logMsgStateAtIndex:(unsigned int)arg1;
- (id)logMsgStateOfType:(int)arg1;
- (id)logMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (id)logMsgStates;
- (unsigned int)logMsgStatesCount;
- (id)mapLaunchEvent;
- (id)mapsWidgetsInteractionSession;
- (void)mergeFrom:(id)arg1;
- (id)networkEvent;
- (unsigned int)numberOfLogMsgStatesOfType:(int)arg1;
- (unsigned int)numberOfLogMsgStatesOfType:(int)arg1 stateOrigin:(id)arg2;
- (id)placeDataCacheEvent;
- (id)proactiveSuggestionInteractionSessionEvent;
- (BOOL)readFrom:(id)arg1;
- (id)refineSearchSession;
- (id)rideBookedSession;
- (id)rideBookingSession;
- (void)setCacheHitEvent:(id)arg1;
- (void)setDirectionsEvent:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (void)setListInteractionSession:(id)arg1;
- (void)setLogFrameworkEvent:(id)arg1;
- (void)setLogMsgStates:(id)arg1;
- (void)setMapLaunchEvent:(id)arg1;
- (void)setMapsWidgetsInteractionSession:(id)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setPlaceDataCacheEvent:(id)arg1;
- (void)setProactiveSuggestionInteractionSessionEvent:(id)arg1;
- (void)setRefineSearchSession:(id)arg1;
- (void)setRideBookedSession:(id)arg1;
- (void)setRideBookingSession:(id)arg1;
- (void)setStaleResourceEvent:(id)arg1;
- (void)setStateTimingEvent:(id)arg1;
- (void)setTableBookedSession:(id)arg1;
- (void)setTableBookingSession:(id)arg1;
- (void)setTelemetric:(id)arg1;
- (void)setTileSetStateEvent:(id)arg1;
- (void)setTimeToLeaveHypothesisEvent:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeEvent:(id)arg1;
- (void)setTransitAppLaunchEvent:(id)arg1;
- (void)setUserActionEvent:(id)arg1;
- (id)staleResourceEvent;
- (id)stateTimingEvent;
- (id)tableBookedSession;
- (id)tableBookingSession;
- (id)telemetric;
- (id)tileSetStateEvent;
- (id)timeToLeaveHypothesisEvent;
- (id)timeToLeaveInitialTravelTimeEvent;
- (id)transitAppLaunchEvent;
- (id)userActionEvent;
- (void)writeTo:(id)arg1;

@end
