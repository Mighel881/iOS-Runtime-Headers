/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOVersionManifest, NSMutableArray, NSString;

@interface GEOResources : PBCodable <NSCopying> {
    NSString *_abExperimentURL;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributionBadges;
    NSMutableArray *_attributions;
    NSString *_authToken;
    NSString *_autocompleteURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessCallerIDURL;
    NSString *_businessNameResolutionURL;
    NSString *_businessPortalBaseURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSString *_forwardGeocoderURL;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    NSString *_locationShiftURL;
    NSString *_mapMatchURL;
    NSString *_polyLocationShiftURL;
    NSString *_problemCategoriesURL;
    NSString *_problemNotificationAvailabilityURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSMutableArray *_regionalResources;
    NSString *_releaseInfo;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_searchURL;
    NSString *_simpleETAURL;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileGroups;
    NSMutableArray *_tileSets;
    NSString *_usageURL;
    GEOVersionManifest *_versionManifest;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
}

@property(retain) NSString * abExperimentURL;
@property(retain) NSString * addressCorrectionInitURL;
@property(retain) NSString * addressCorrectionUpdateURL;
@property(retain) NSMutableArray * announcementsSupportedLanguages;
@property(retain) NSString * announcementsURL;
@property(retain) NSMutableArray * attributionBadges;
@property(retain) NSMutableArray * attributions;
@property(retain) NSString * authToken;
@property(retain) NSString * autocompleteURL;
@property(retain) NSString * batchReverseGeocoderURL;
@property(retain) NSString * businessCallerIDURL;
@property(retain) NSString * businessNameResolutionURL;
@property(retain) NSString * businessPortalBaseURL;
@property(retain) NSString * directionsURL;
@property(retain) NSString * dispatcherURL;
@property(retain) NSString * etaURL;
@property(retain) NSMutableArray * fontChecksums;
@property(retain) NSMutableArray * fonts;
@property(retain) NSString * forwardGeocoderURL;
@property(readonly) BOOL hasAbExperimentURL;
@property(readonly) BOOL hasAddressCorrectionInitURL;
@property(readonly) BOOL hasAddressCorrectionUpdateURL;
@property(readonly) BOOL hasAnnouncementsURL;
@property(readonly) BOOL hasAuthToken;
@property(readonly) BOOL hasAutocompleteURL;
@property(readonly) BOOL hasBatchReverseGeocoderURL;
@property(readonly) BOOL hasBusinessCallerIDURL;
@property(readonly) BOOL hasBusinessNameResolutionURL;
@property(readonly) BOOL hasBusinessPortalBaseURL;
@property(readonly) BOOL hasDirectionsURL;
@property(readonly) BOOL hasDispatcherURL;
@property(readonly) BOOL hasEtaURL;
@property(readonly) BOOL hasForwardGeocoderURL;
@property(readonly) BOOL hasLocationShiftURL;
@property(readonly) BOOL hasMapMatchURL;
@property(readonly) BOOL hasPolyLocationShiftURL;
@property(readonly) BOOL hasProblemCategoriesURL;
@property(readonly) BOOL hasProblemNotificationAvailabilityURL;
@property(readonly) BOOL hasProblemOptInURL;
@property(readonly) BOOL hasProblemStatusURL;
@property(readonly) BOOL hasProblemSubmissionURL;
@property(readonly) BOOL hasReleaseInfo;
@property(readonly) BOOL hasResourcesURL;
@property(readonly) BOOL hasReverseGeocoderURL;
@property(readonly) BOOL hasReverseGeocoderVersionsURL;
@property(readonly) BOOL hasSearchAttributionManifestURL;
@property(readonly) BOOL hasSearchURL;
@property(readonly) BOOL hasSimpleETAURL;
@property(readonly) BOOL hasUsageURL;
@property(readonly) BOOL hasVersionManifest;
@property(retain) NSMutableArray * iconChecksums;
@property(retain) NSMutableArray * icons;
@property(retain) NSString * locationShiftURL;
@property(retain) NSString * mapMatchURL;
@property(retain) NSString * polyLocationShiftURL;
@property(retain) NSString * problemCategoriesURL;
@property(retain) NSString * problemNotificationAvailabilityURL;
@property(retain) NSString * problemOptInURL;
@property(retain) NSString * problemStatusURL;
@property(retain) NSString * problemSubmissionURL;
@property(retain) NSMutableArray * regionalResources;
@property(retain) NSString * releaseInfo;
@property(retain) NSString * resourcesURL;
@property(retain) NSString * reverseGeocoderURL;
@property(retain) NSString * reverseGeocoderVersionsURL;
@property(retain) NSString * searchAttributionManifestURL;
@property(retain) NSString * searchURL;
@property(retain) NSString * simpleETAURL;
@property(retain) NSMutableArray * styleSheetChecksums;
@property(retain) NSMutableArray * styleSheets;
@property(retain) NSMutableArray * textureChecksums;
@property(retain) NSMutableArray * textures;
@property(retain) NSMutableArray * tileGroups;
@property(retain) NSMutableArray * tileSets;
@property(retain) NSString * usageURL;
@property(retain) GEOVersionManifest * versionManifest;
@property(retain) NSMutableArray * xmlChecksums;
@property(retain) NSMutableArray * xmls;

- (id)abExperimentURL;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addAttributionBadge:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addFontChecksum:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addTextureChecksum:(id)arg1;
- (void)addTileGroup:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)addXml:(id)arg1;
- (void)addXmlChecksum:(id)arg1;
- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned int)arg1;
- (unsigned int)announcementsSupportedLanguagesCount;
- (id)announcementsURL;
- (id)attributionAtIndex:(unsigned int)arg1;
- (id)attributionBadgeAtIndex:(unsigned int)arg1;
- (id)attributionBadges;
- (unsigned int)attributionBadgesCount;
- (id)attributions;
- (unsigned int)attributionsCount;
- (id)authToken;
- (id)autocompleteURL;
- (id)batchReverseGeocoderURL;
- (id)businessCallerIDURL;
- (id)businessNameResolutionURL;
- (id)businessPortalBaseURL;
- (void)clearAnnouncementsSupportedLanguages;
- (void)clearAttributionBadges;
- (void)clearAttributions;
- (void)clearFontChecksums;
- (void)clearFonts;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearRegionalResources;
- (void)clearStyleSheetChecksums;
- (void)clearStyleSheets;
- (void)clearTextureChecksums;
- (void)clearTextures;
- (void)clearTileGroups;
- (void)clearTileSets;
- (void)clearXmlChecksums;
- (void)clearXmls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (id)etaURL;
- (id)fontAtIndex:(unsigned int)arg1;
- (id)fontChecksumAtIndex:(unsigned int)arg1;
- (id)fontChecksums;
- (unsigned int)fontChecksumsCount;
- (id)fonts;
- (unsigned int)fontsCount;
- (id)forwardGeocoderURL;
- (BOOL)hasAbExperimentURL;
- (BOOL)hasAddressCorrectionInitURL;
- (BOOL)hasAddressCorrectionUpdateURL;
- (BOOL)hasAnnouncementsURL;
- (BOOL)hasAuthToken;
- (BOOL)hasAutocompleteURL;
- (BOOL)hasBatchReverseGeocoderURL;
- (BOOL)hasBusinessCallerIDURL;
- (BOOL)hasBusinessNameResolutionURL;
- (BOOL)hasBusinessPortalBaseURL;
- (BOOL)hasDirectionsURL;
- (BOOL)hasDispatcherURL;
- (BOOL)hasEtaURL;
- (BOOL)hasForwardGeocoderURL;
- (BOOL)hasLocationShiftURL;
- (BOOL)hasMapMatchURL;
- (BOOL)hasPolyLocationShiftURL;
- (BOOL)hasProblemCategoriesURL;
- (BOOL)hasProblemNotificationAvailabilityURL;
- (BOOL)hasProblemOptInURL;
- (BOOL)hasProblemStatusURL;
- (BOOL)hasProblemSubmissionURL;
- (BOOL)hasReleaseInfo;
- (BOOL)hasResourcesURL;
- (BOOL)hasReverseGeocoderURL;
- (BOOL)hasReverseGeocoderVersionsURL;
- (BOOL)hasSearchAttributionManifestURL;
- (BOOL)hasSearchURL;
- (BOOL)hasSimpleETAURL;
- (BOOL)hasUsageURL;
- (BOOL)hasVersionManifest;
- (unsigned int)hash;
- (id)iconAtIndex:(unsigned int)arg1;
- (id)iconChecksumAtIndex:(unsigned int)arg1;
- (id)iconChecksums;
- (unsigned int)iconChecksumsCount;
- (id)icons;
- (unsigned int)iconsCount;
- (BOOL)isEqual:(id)arg1;
- (id)locationShiftURL;
- (id)mapMatchURL;
- (void)mergeFrom:(id)arg1;
- (id)polyLocationShiftURL;
- (id)problemCategoriesURL;
- (id)problemNotificationAvailabilityURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (BOOL)readFrom:(id)arg1;
- (id)regionalResourceAtIndex:(unsigned int)arg1;
- (id)regionalResources;
- (unsigned int)regionalResourcesCount;
- (id)releaseInfo;
- (id)resourcesURL;
- (id)reverseGeocoderURL;
- (id)reverseGeocoderVersionsURL;
- (id)searchAttributionManifestURL;
- (id)searchURL;
- (void)setAbExperimentURL:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setAttributionBadges:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setAutocompleteURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setBusinessCallerIDURL:(id)arg1;
- (void)setBusinessNameResolutionURL:(id)arg1;
- (void)setBusinessPortalBaseURL:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setFontChecksums:(id)arg1;
- (void)setFonts:(id)arg1;
- (void)setForwardGeocoderURL:(id)arg1;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setLocationShiftURL:(id)arg1;
- (void)setMapMatchURL:(id)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemNotificationAvailabilityURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setRegionalResources:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (void)setReverseGeocoderURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSearchURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setStyleSheetChecksums:(id)arg1;
- (void)setStyleSheets:(id)arg1;
- (void)setTextureChecksums:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setTileGroups:(id)arg1;
- (void)setTileSets:(id)arg1;
- (void)setUsageURL:(id)arg1;
- (void)setVersionManifest:(id)arg1;
- (void)setXmlChecksums:(id)arg1;
- (void)setXmls:(id)arg1;
- (id)simpleETAURL;
- (id)styleSheetAtIndex:(unsigned int)arg1;
- (id)styleSheetChecksumAtIndex:(unsigned int)arg1;
- (id)styleSheetChecksums;
- (unsigned int)styleSheetChecksumsCount;
- (id)styleSheets;
- (unsigned int)styleSheetsCount;
- (id)textureAtIndex:(unsigned int)arg1;
- (id)textureChecksumAtIndex:(unsigned int)arg1;
- (id)textureChecksums;
- (unsigned int)textureChecksumsCount;
- (id)textures;
- (unsigned int)texturesCount;
- (id)tileGroupAtIndex:(unsigned int)arg1;
- (id)tileGroups;
- (unsigned int)tileGroupsCount;
- (id)tileSetAtIndex:(unsigned int)arg1;
- (id)tileSets;
- (unsigned int)tileSetsCount;
- (id)usageURL;
- (id)versionManifest;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned int)arg1;
- (id)xmlChecksumAtIndex:(unsigned int)arg1;
- (id)xmlChecksums;
- (unsigned int)xmlChecksumsCount;
- (id)xmls;
- (unsigned int)xmlsCount;

@end
