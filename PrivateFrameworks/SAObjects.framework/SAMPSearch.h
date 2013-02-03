/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSArray;

@interface SAMPSearch : SABaseClientBoundCommand {
}

@property(copy) NSArray * constraints;
@property int maxResults;
@property(copy) NSArray * searchProperties;
@property(copy) NSArray * searchTypes;
@property(copy) NSString * searchValue;
@property BOOL strict;
@property(copy) NSURL * targetAppId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (id)encodedClassName;
- (id)groupIdentifier;
- (int)maxResults;
- (BOOL)requiresResponse;
- (id)searchProperties;
- (id)searchTypes;
- (id)searchValue;
- (void)setConstraints:(id)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setSearchProperties:(id)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)setSearchValue:(id)arg1;
- (void)setStrict:(BOOL)arg1;
- (void)setTargetAppId:(id)arg1;
- (BOOL)strict;
- (id)targetAppId;

@end
