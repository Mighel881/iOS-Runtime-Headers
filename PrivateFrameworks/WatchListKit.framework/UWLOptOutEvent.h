/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLOptOutEvent : PBCodable <NSCopying> {
    NSString * _brandId;
}

@property (nonatomic, retain) NSString *brandId;
@property (nonatomic, readonly) BOOL hasBrandId;

- (void).cxx_destruct;
- (id)brandId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBrandId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBrandId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
