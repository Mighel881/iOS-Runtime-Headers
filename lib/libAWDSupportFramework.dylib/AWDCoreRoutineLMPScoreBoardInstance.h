/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <NSCopying> {
    int  _corrects;
    struct { 
        unsigned int corrects : 1; 
        unsigned int incorrects : 1; 
        unsigned int invalids : 1; 
        unsigned int unknowns : 1; 
    }  _has;
    int  _incorrects;
    int  _invalids;
    NSString * _keyword;
    int  _unknowns;
}

@property (nonatomic) int corrects;
@property (nonatomic) BOOL hasCorrects;
@property (nonatomic) BOOL hasIncorrects;
@property (nonatomic) BOOL hasInvalids;
@property (nonatomic, readonly) BOOL hasKeyword;
@property (nonatomic) BOOL hasUnknowns;
@property (nonatomic) int incorrects;
@property (nonatomic) int invalids;
@property (nonatomic, retain) NSString *keyword;
@property (nonatomic) int unknowns;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)corrects;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCorrects;
- (BOOL)hasIncorrects;
- (BOOL)hasInvalids;
- (BOOL)hasKeyword;
- (BOOL)hasUnknowns;
- (unsigned int)hash;
- (int)incorrects;
- (int)invalids;
- (BOOL)isEqual:(id)arg1;
- (id)keyword;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCorrects:(int)arg1;
- (void)setHasCorrects:(BOOL)arg1;
- (void)setHasIncorrects:(BOOL)arg1;
- (void)setHasInvalids:(BOOL)arg1;
- (void)setHasUnknowns:(BOOL)arg1;
- (void)setIncorrects:(int)arg1;
- (void)setInvalids:(int)arg1;
- (void)setKeyword:(id)arg1;
- (void)setUnknowns:(int)arg1;
- (int)unknowns;
- (void)writeTo:(id)arg1;

@end
