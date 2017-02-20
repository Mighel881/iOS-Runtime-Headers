/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPreferences : NSObject <NSCoding> {
    /* Warning: unhandled struct encoding: '{WebPreferencesPrivate={RetainPtr<NSMutableDictionary>=^v}c{RetainPtr<NSString>=^v}ccI@}' */ struct WebPreferencesPrivate { struct RetainPtr<NSMutableDictionary> { void *x_1_1_1; } x1; BOOL x2; struct RetainPtr<NSString> { void *x_3_1_1; } x3; BOOL x4; BOOL x5; unsigned int x6; id x7; } * _private;
}

@property (nonatomic) BOOL allowsAirPlayForMediaPlayback;
@property (nonatomic) BOOL allowsAnimatedImageLooping;
@property (nonatomic) BOOL allowsAnimatedImages;
@property (nonatomic) BOOL allowsInlineMediaPlaybackAfterFullscreen;
@property (nonatomic) BOOL attachmentElementEnabled;
@property (nonatomic) BOOL autosaves;
@property (nonatomic) unsigned int cacheModel;
@property (nonatomic, copy) NSString *cursiveFontFamily;
@property (nonatomic) int defaultFixedFontSize;
@property (nonatomic) int defaultFontSize;
@property (nonatomic, copy) NSString *defaultTextEncodingName;
@property (nonatomic, copy) NSString *fantasyFontFamily;
@property (nonatomic, copy) NSString *fixedFontFamily;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isJavaEnabled, nonatomic) BOOL javaEnabled;
@property (nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property (getter=isJavaScriptEnabled, nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) BOOL javaScriptMarkupEnabled;
@property (nonatomic) BOOL loadsImagesAutomatically;
@property (nonatomic) BOOL mediaDataLoadsAutomatically;
@property (nonatomic) int minimumFontSize;
@property (nonatomic) int minimumLogicalFontSize;
@property (getter=arePlugInsEnabled, nonatomic) BOOL plugInsEnabled;
@property (nonatomic) BOOL privateBrowsingEnabled;
@property (nonatomic, copy) NSString *sansSerifFontFamily;
@property (nonatomic, copy) NSString *serifFontFamily;
@property (nonatomic, copy) NSString *standardFontFamily;
@property (nonatomic) BOOL suppressesIncrementalRendering;
@property (nonatomic) BOOL userStyleSheetEnabled;
@property (nonatomic, retain) NSURL *userStyleSheetLocation;
@property (nonatomic) BOOL usesPageCache;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_IBCreatorID;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_clearNetworkLoaderSession;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned int)arg1;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (unsigned long)_systemCFStringEncoding;
+ (void)initialize;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (id)standardPreferences;

- (BOOL)DOMIteratorEnabled;
- (BOOL)_allowMultiElementImplicitFormSubmission;
- (BOOL)_allowPasswordEcho;
- (BOOL)_alwaysRequestGeolocationPermission;
- (BOOL)_alwaysUseAcceleratedOverflowScroll;
- (double)_backForwardCacheExpirationInterval;
- (BOOL)_boolValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (BOOL)_forceFTPDirectoryListings;
- (id)_ftpDirectoryTemplatePath;
- (int)_integerValueForKey:(id)arg1;
- (int)_interpolationQuality;
- (void)_invalidateCachedPreferences;
- (int)_layoutInterval;
- (id)_localStorageDatabasePath;
- (long long)_longLongValueForKey:(id)arg1;
- (float)_maxParseDuration;
- (float)_minimumZoomFontSize;
- (float)_passwordEchoDuration;
- (void)_postCacheModelChangedNotification;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)arg1;
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)arg1;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setInterpolationQuality:(int)arg1;
- (void)_setLayoutInterval:(int)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setMaxParseDuration:(float)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)_setStandalone:(BOOL)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (void)_setTextAutosizingEnabled:(BOOL)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)_standalone;
- (id)_stringValueForKey:(id)arg1;
- (void)_synchronizeWebStoragePolicyWithCookiePolicy;
- (BOOL)_telephoneNumberParsingEnabled;
- (BOOL)_textAutosizingEnabled;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_updatePrivateBrowsingStateTo:(BOOL)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (id)_valueForKey:(id)arg1;
- (BOOL)accelerated2dCanvasEnabled;
- (BOOL)acceleratedCompositingEnabled;
- (BOOL)acceleratedDrawingEnabled;
- (BOOL)allowFileAccessFromFileURLs;
- (BOOL)allowUniversalAccessFromFileURLs;
- (BOOL)allowsAirPlayForMediaPlayback;
- (BOOL)allowsAlternateFullscreen;
- (BOOL)allowsAnimatedImageLooping;
- (BOOL)allowsAnimatedImages;
- (BOOL)allowsInlineMediaPlaybackAfterFullscreen;
- (BOOL)allowsPictureInPictureMediaPlayback;
- (long long)applicationCacheDefaultOriginQuota;
- (long long)applicationCacheTotalQuota;
- (BOOL)applicationChromeModeEnabled;
- (BOOL)arePlugInsEnabled;
- (BOOL)asynchronousSpellCheckingEnabled;
- (BOOL)attachmentElementEnabled;
- (BOOL)audioPlaybackRequiresUserGesture;
- (unsigned int)audioSessionCategoryOverride;
- (BOOL)authorAndUserStylesEnabled;
- (BOOL)automaticallyDetectsCacheModel;
- (BOOL)autosaves;
- (BOOL)avKitEnabled;
- (BOOL)backspaceKeyNavigationEnabled;
- (unsigned int)cacheModel;
- (BOOL)canvasUsesAcceleratedDrawing;
- (id)cursiveFontFamily;
- (BOOL)customElementsEnabled;
- (BOOL)databasesEnabled;
- (void)dealloc;
- (int)defaultFixedFontSize;
- (int)defaultFontSize;
- (id)defaultTextEncodingName;
- (BOOL)developerExtrasEnabled;
- (BOOL)diagnosticLoggingEnabled;
- (void)didRemoveFromWebView;
- (BOOL)displayListDrawingEnabled;
- (BOOL)domTimersThrottlingEnabled;
- (BOOL)downloadAttributeEnabled;
- (int)editableLinkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)experimentalNotificationsEnabled;
- (id)fantasyFontFamily;
- (BOOL)fetchAPIEnabled;
- (id)fixedFontFamily;
- (BOOL)forceSoftwareWebGLRendering;
- (BOOL)fullScreenEnabled;
- (BOOL)gamepadsEnabled;
- (BOOL)hiddenPageCSSAnimationSuspensionEnabled;
- (BOOL)hiddenPageDOMTimerThrottlingEnabled;
- (BOOL)httpEquivEnabled;
- (BOOL)hyperlinkAuditingEnabled;
- (id)identifier;
- (BOOL)imageControlsEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(BOOL)arg2;
- (BOOL)inlineMediaPlaybackRequiresPlaysInlineAttribute;
- (BOOL)invisibleAutoplayNotPermitted;
- (BOOL)isAVFoundationEnabled;
- (BOOL)isAVFoundationNSURLSessionEnabled;
- (BOOL)isCSSGridLayoutEnabled;
- (BOOL)isDNSPrefetchingEnabled;
- (BOOL)isDOMPasteAllowed;
- (BOOL)isFrameFlatteningEnabled;
- (BOOL)isHixie76WebSocketProtocolEnabled;
- (BOOL)isInheritURIQueryComponentEnabled;
- (BOOL)isJavaEnabled;
- (BOOL)isJavaScriptEnabled;
- (BOOL)isQTKitEnabled;
- (BOOL)isSpatialNavigationEnabled;
- (BOOL)isVideoPluginProxyEnabled;
- (BOOL)isWebSecurityEnabled;
- (BOOL)isXSSAuditorEnabled;
- (BOOL)javaScriptCanAccessClipboard;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (BOOL)javaScriptMarkupEnabled;
- (int)javaScriptRuntimeFlags;
- (BOOL)loadsImagesAutomatically;
- (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
- (BOOL)localFileContentSniffingEnabled;
- (BOOL)localStorageEnabled;
- (BOOL)lowPowerVideoAudioBufferSizeEnabled;
- (BOOL)mediaControlsScaleWithPageZoom;
- (BOOL)mediaDataLoadsAutomatically;
- (id)mediaKeysStorageDirectory;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)mediaPlaybackAllowsInline;
- (BOOL)mediaPlaybackRequiresUserGesture;
- (BOOL)mediaSourceEnabled;
- (BOOL)metaRefreshEnabled;
- (int)minimumFontSize;
- (int)minimumLogicalFontSize;
- (BOOL)mockCaptureDevicesEnabled;
- (BOOL)mockScrollbarsEnabled;
- (BOOL)networkDataUsageTrackingEnabled;
- (id)networkInterfaceName;
- (BOOL)notificationsEnabled;
- (BOOL)offlineWebApplicationCacheEnabled;
- (BOOL)overrideUserGestureRequirementForMainContent;
- (BOOL)pageCacheSupportsPlugins;
- (BOOL)paginateDuringLayoutEnabled;
- (id)pictographFontFamily;
- (BOOL)plugInSnapshottingEnabled;
- (BOOL)preferLowPowerWebGLRendering;
- (BOOL)privateBrowsingEnabled;
- (BOOL)requestAnimationFrameEnabled;
- (BOOL)resourceLoadStatisticsEnabled;
- (id)sansSerifFontFamily;
- (id)serifFontFamily;
- (BOOL)serviceControlsEnabled;
- (void)setAVFoundationEnabled:(BOOL)arg1;
- (void)setAVFoundationNSURLSessionEnabled:(BOOL)arg1;
- (void)setAVKitEnabled:(bool)arg1;
- (void)setAccelerated2dCanvasEnabled:(BOOL)arg1;
- (void)setAcceleratedCompositingEnabled:(BOOL)arg1;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (void)setAllowFileAccessFromFileURLs:(BOOL)arg1;
- (void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (void)setAllowsAirPlayForMediaPlayback:(BOOL)arg1;
- (void)setAllowsAlternateFullscreen:(BOOL)arg1;
- (void)setAllowsAnimatedImageLooping:(BOOL)arg1;
- (void)setAllowsAnimatedImages:(BOOL)arg1;
- (void)setAllowsInlineMediaPlaybackAfterFullscreen:(BOOL)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(BOOL)arg1;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (void)setAsynchronousSpellCheckingEnabled:(BOOL)arg1;
- (void)setAttachmentElementEnabled:(BOOL)arg1;
- (void)setAudioPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (void)setAutosaves:(BOOL)arg1;
- (void)setBackspaceKeyNavigationEnabled:(BOOL)arg1;
- (void)setCSSGridLayoutEnabled:(BOOL)arg1;
- (void)setCacheModel:(unsigned int)arg1;
- (void)setCanvasUsesAcceleratedDrawing:(BOOL)arg1;
- (void)setCursiveFontFamily:(id)arg1;
- (void)setCustomElementsEnabled:(BOOL)arg1;
- (void)setDNSPrefetchingEnabled:(BOOL)arg1;
- (void)setDOMIteratorEnabled:(BOOL)arg1;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (void)setDOMTimersThrottlingEnabled:(BOOL)arg1;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (void)setDefaultFixedFontSize:(int)arg1;
- (void)setDefaultFontSize:(int)arg1;
- (void)setDefaultTextEncodingName:(id)arg1;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (void)setDiagnosticLoggingEnabled:(BOOL)arg1;
- (void)setDiskImageCacheEnabled:(BOOL)arg1;
- (void)setDisplayListDrawingEnabled:(BOOL)arg1;
- (void)setDownloadAttributeEnabled:(BOOL)arg1;
- (void)setEditableLinkBehavior:(int)arg1;
- (void)setEnableInheritURIQueryComponent:(BOOL)arg1;
- (void)setExperimentalNotificationsEnabled:(BOOL)arg1;
- (void)setFantasyFontFamily:(id)arg1;
- (void)setFetchAPIEnabled:(BOOL)arg1;
- (void)setFixedFontFamily:(id)arg1;
- (void)setForceSoftwareWebGLRendering:(BOOL)arg1;
- (void)setFrameFlatteningEnabled:(BOOL)arg1;
- (void)setFullScreenEnabled:(BOOL)arg1;
- (void)setGamepadsEnabled:(BOOL)arg1;
- (void)setHTTPEquivEnabled:(BOOL)arg1;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(BOOL)arg1;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(BOOL)arg1;
- (void)setHixie76WebSocketProtocolEnabled:(BOOL)arg1;
- (void)setHyperlinkAuditingEnabled:(BOOL)arg1;
- (void)setImageControlsEnabled:(BOOL)arg1;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setInlineMediaPlaybackRequiresPlaysInlineAttribute:(BOOL)arg1;
- (void)setInvisibleAutoplayNotPermitted:(BOOL)arg1;
- (void)setJavaEnabled:(BOOL)arg1;
- (void)setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (void)setJavaScriptMarkupEnabled:(BOOL)arg1;
- (void)setJavaScriptRuntimeFlags:(int)arg1;
- (void)setLoadsImagesAutomatically:(BOOL)arg1;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)arg1;
- (void)setLocalFileContentSniffingEnabled:(BOOL)arg1;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(BOOL)arg1;
- (void)setMediaControlsScaleWithPageZoom:(BOOL)arg1;
- (void)setMediaDataLoadsAutomatically:(BOOL)arg1;
- (void)setMediaKeysStorageDirectory:(id)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)setMediaPlaybackAllowsInline:(BOOL)arg1;
- (void)setMediaPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setMediaSourceEnabled:(BOOL)arg1;
- (void)setMetaRefreshEnabled:(BOOL)arg1;
- (void)setMinimumFontSize:(int)arg1;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (void)setMockCaptureDevicesEnabled:(BOOL)arg1;
- (void)setMockScrollbarsEnabled:(BOOL)arg1;
- (void)setNetworkDataUsageTrackingEnabled:(bool)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (void)setOverrideUserGestureRequirementForMainContent:(BOOL)arg1;
- (void)setPageCacheSupportsPlugins:(BOOL)arg1;
- (void)setPaginateDuringLayoutEnabled:(BOOL)arg1;
- (void)setPictographFontFamily:(id)arg1;
- (void)setPlugInSnapshottingEnabled:(BOOL)arg1;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (void)setPreferLowPowerWebGLRendering:(BOOL)arg1;
- (void)setPrivateBrowsingEnabled:(BOOL)arg1;
- (void)setQTKitEnabled:(BOOL)arg1;
- (void)setRequestAnimationFrameEnabled:(BOOL)arg1;
- (void)setResourceLoadStatisticsEnabled:(BOOL)arg1;
- (void)setSansSerifFontFamily:(id)arg1;
- (void)setSerifFontFamily:(id)arg1;
- (void)setServiceControlsEnabled:(BOOL)arg1;
- (void)setShadowDOMEnabled:(BOOL)arg1;
- (void)setShouldConvertPositionStyleOnCopy:(BOOL)arg1;
- (void)setShouldDisplayCaptions:(BOOL)arg1;
- (void)setShouldDisplaySubtitles:(BOOL)arg1;
- (void)setShouldDisplayTextDescriptions:(BOOL)arg1;
- (void)setShouldRespectImageOrientation:(BOOL)arg1;
- (void)setShowDebugBorders:(BOOL)arg1;
- (void)setShowRepaintCounter:(BOOL)arg1;
- (void)setShrinksStandaloneImagesToFit:(BOOL)arg1;
- (void)setSimpleLineLayoutDebugBordersEnabled:(BOOL)arg1;
- (void)setSpatialNavigationEnabled:(BOOL)arg1;
- (void)setStandardFontFamily:(id)arg1;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setStorageTrackerEnabled:(BOOL)arg1;
- (void)setSubpixelCSSOMElementMetricsEnabled:(BOOL)arg1;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (void)setUseLegacyTextAlignPositionedElementBehavior:(BOOL)arg1;
- (void)setUsePreHTML5ParserQuirks:(BOOL)arg1;
- (void)setUserStyleSheetEnabled:(BOOL)arg1;
- (void)setUserStyleSheetLocation:(id)arg1;
- (void)setUsesEncodingDetector:(BOOL)arg1;
- (void)setUsesPageCache:(BOOL)arg1;
- (void)setVideoPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setVideoPluginProxyEnabled:(BOOL)arg1;
- (void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)arg1;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (void)setWebAudioEnabled:(BOOL)arg1;
- (void)setWebGL2Enabled:(BOOL)arg1;
- (void)setWebGLEnabled:(BOOL)arg1;
- (void)setWebSecurityEnabled:(BOOL)arg1;
- (void)setXSSAuditorEnabled:(BOOL)arg1;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)shadowDOMEnabled;
- (BOOL)shouldConvertPositionStyleOnCopy;
- (BOOL)shouldDisplayCaptions;
- (BOOL)shouldDisplaySubtitles;
- (BOOL)shouldDisplayTextDescriptions;
- (BOOL)shouldRespectImageOrientation;
- (BOOL)showDebugBorders;
- (BOOL)showRepaintCounter;
- (BOOL)shrinksStandaloneImagesToFit;
- (BOOL)simpleLineLayoutDebugBordersEnabled;
- (id)standardFontFamily;
- (int)storageBlockingPolicy;
- (BOOL)storageTrackerEnabled;
- (BOOL)subpixelCSSOMElementMetricsEnabled;
- (BOOL)suppressesIncrementalRendering;
- (int)textDirectionSubmenuInclusionBehavior;
- (BOOL)useLegacyTextAlignPositionedElementBehavior;
- (BOOL)usePreHTML5ParserQuirks;
- (BOOL)userStyleSheetEnabled;
- (id)userStyleSheetLocation;
- (BOOL)usesEncodingDetector;
- (BOOL)usesPageCache;
- (BOOL)videoPlaybackRequiresUserGesture;
- (BOOL)wantsBalancedSetDefersLoadingBehavior;
- (BOOL)webArchiveDebugModeEnabled;
- (BOOL)webAudioEnabled;
- (BOOL)webGL2Enabled;
- (BOOL)webGLEnabled;
- (void)willAddToWebView;
- (BOOL)zoomsTextOnly;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)standardMailWebPreferencesForDisplayStyle:(int)arg1 regenerate:(BOOL)arg2;

@end
