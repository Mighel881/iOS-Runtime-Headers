/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSData;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {
    double _creationDate;
    NSData *_data;
    GEOLatLng *_geotagCoordinate;
    double _geotagHorizontalAccuracy;
    double _geotagTimestamp;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int geotagHorizontalAccuracy : 1; 
        unsigned int geotagTimestamp : 1; 
    } _has;
}

@property double creationDate;
@property(retain) NSData * data;
@property(retain) GEOLatLng * geotagCoordinate;
@property double geotagHorizontalAccuracy;
@property double geotagTimestamp;
@property BOOL hasCreationDate;
@property(readonly) BOOL hasData;
@property(readonly) BOOL hasGeotagCoordinate;
@property BOOL hasGeotagHorizontalAccuracy;
@property BOOL hasGeotagTimestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geotagCoordinate;
- (double)geotagHorizontalAccuracy;
- (double)geotagTimestamp;
- (BOOL)hasCreationDate;
- (BOOL)hasData;
- (BOOL)hasGeotagCoordinate;
- (BOOL)hasGeotagHorizontalAccuracy;
- (BOOL)hasGeotagTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setData:(id)arg1;
- (void)setGeotagCoordinate:(id)arg1;
- (void)setGeotagHorizontalAccuracy:(double)arg1;
- (void)setGeotagTimestamp:(double)arg1;
- (void)setHasCreationDate:(BOOL)arg1;
- (void)setHasGeotagHorizontalAccuracy:(BOOL)arg1;
- (void)setHasGeotagTimestamp:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
