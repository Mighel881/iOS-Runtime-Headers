/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPResultGradingFeedback : PBCodable <NSCopying> {
    int  _grade;
    struct { 
        unsigned int grade : 1; 
    }  _has;
    _CPSearchResultForFeedback * _result;
    NSString * _textFeedback;
    unsigned long long  _timestamp;
}

@property (nonatomic) int grade;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic, readonly) BOOL hasResult;
@property (nonatomic, readonly) BOOL hasTextFeedback;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (nonatomic, retain) NSString *textFeedback;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsGrade:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)grade;
- (id)gradeAsString:(int)arg1;
- (BOOL)hasGrade;
- (BOOL)hasResult;
- (BOOL)hasTextFeedback;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)result;
- (void)setGrade:(int)arg1;
- (void)setHasGrade:(BOOL)arg1;
- (void)setResult:(id)arg1;
- (void)setTextFeedback:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)textFeedback;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
