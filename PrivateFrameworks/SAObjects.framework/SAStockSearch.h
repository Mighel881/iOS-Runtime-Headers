/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSArray;

@interface SAStockSearch : SABaseClientBoundCommand {
}

@property(copy) NSArray * companyNameList;
@property(copy) NSArray * stockReferences;
@property(copy) NSURL * targetAppId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)companyNameList;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setCompanyNameList:(id)arg1;
- (void)setStockReferences:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)stockReferences;
- (id)targetAppId;

@end
