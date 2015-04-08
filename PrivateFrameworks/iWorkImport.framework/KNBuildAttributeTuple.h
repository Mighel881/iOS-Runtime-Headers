/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNBuild, KNBuildAttributeValue, KNBuildChunk, KNBuildChunkIdentifier, NSString, NSUUID;

@interface KNBuildAttributeTuple : TSPObject <NSCopying> {
    KNBuildAttributeValue *_attributeValue;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    BOOL _definedAttributeValue;
    BOOL _definedBuildChunkIdentifier;
    BOOL _definedBuildId;
    NSString *_property;
}

@property(readonly) KNBuild * build;
@property(readonly) KNBuildChunk * chunk;
@property(readonly) BOOL isBuildTuple;
@property(readonly) BOOL isChunkTuple;
@property(readonly) NSString * property;
@property(readonly) KNBuildAttributeValue * value;

+ (id)tupleForBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 referent:(unsigned int)arg2;

- (id)build;
- (id)chunk;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithBuild:(id)arg1 chunk:(id)arg2 property:(id)arg3 value:(id)arg4;
- (id)initWithBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (BOOL)isBuildTuple;
- (BOOL)isChunkTuple;
- (id)property;
- (id)value;

@end
