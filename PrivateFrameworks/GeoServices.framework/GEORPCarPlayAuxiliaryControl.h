/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOCarInfo;

@interface GEORPCarPlayAuxiliaryControl : PBCodable <NSCopying> {
    GEOCarInfo *_carInfo;
}

@property(retain) GEOCarInfo * carInfo;
@property(readonly) BOOL hasCarInfo;

- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCarInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCarInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
