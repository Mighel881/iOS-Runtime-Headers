/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAWebSiteSearch : SABaseClientBoundCommand {
}

@property(copy) NSString * provider;
@property(copy) NSString * query;
@property(copy) NSURL * targetAppId;

+ (id)siteSearch;
+ (id)siteSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)provider;
- (id)query;
- (BOOL)requiresResponse;
- (void)setProvider:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end
