/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <NSObject>, NSString, TSDPathSource, TSUColor;

@interface KNBuildAttributeValue : TSPObject <NSCopying> {
    BOOL _boolValue;
    TSUColor *_colorValue;
    BOOL _definedBoolValue;
    BOOL _definedColorValue;
    BOOL _definedDoubleValue;
    BOOL _definedIntegerValue;
    BOOL _definedPathSourceValue;
    BOOL _definedStringValue;
    double _doubleValue;
    int _integerValue;
    TSDPathSource *_pathSourceValue;
    NSString *_stringValue;
}

@property(readonly) BOOL boolValue;
@property(readonly) TSUColor * colorValue;
@property(readonly) double doubleValue;
@property(readonly) int integerValue;
@property(readonly) BOOL isEmpty;
@property(readonly) <NSObject> * objectValue;
@property(readonly) TSDPathSource * pathSourceValue;
@property(readonly) NSString * stringValue;
@property(readonly) unsigned int type;

+ (id)emptyValue;
+ (id)valueWithBool:(BOOL)arg1;
+ (id)valueWithColor:(id)arg1;
+ (id)valueWithDouble:(double)arg1;
+ (id)valueWithInteger:(int)arg1;
+ (id)valueWithPathSource:(id)arg1;
+ (id)valueWithString:(id)arg1;

- (BOOL)boolValue;
- (id)colorValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (unsigned int)hash;
- (id)initWithBoolValue:(BOOL)arg1;
- (id)initWithColorValue:(id)arg1;
- (id)initWithDoubleValue:(double)arg1;
- (id)initWithIntegerValue:(int)arg1;
- (id)initWithPathSourceValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (int)integerValue;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)objectValue;
- (id)pathSourceValue;
- (id)stringValue;
- (unsigned int)type;

@end
