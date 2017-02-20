/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainItem : NSObject {
    NSMutableSet * _dirtyProperties;
    const struct __CFData { } * _persistentRef;
    NSMutableDictionary * _properties;
}

@property (copy) NSString *accessGroup;
@property (copy) NSString *accessibility;
@property (copy) NSString *account;
@property (copy) NSDictionary *metadata;
@property (readonly) const struct __CFData { }*persistentRef;
@property (copy) NSString *service;
@property BOOL synchronizable;
@property int version;

- (void).cxx_destruct;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (id)_metadataWithError:(id*)arg1;
- (id)_modifiedProperties;
- (void)_reloadProperties;
- (BOOL)_setMetadata:(id)arg1 withError:(id*)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)accessGroup;
- (id)accessibility;
- (id)account;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithPersistentRef:(const struct __CFData { }*)arg1;
- (id)initWithPersistentRef:(const struct __CFData { }*)arg1 properties:(id)arg2;
- (id)metadata;
- (const struct __CFData { }*)persistentRef;
- (void)reload;
- (BOOL)save:(id*)arg1;
- (id)service;
- (void)setAccessGroup:(id)arg1;
- (void)setAccessibility:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSynchronizable:(BOOL)arg1;
- (void)setVersion:(int)arg1;
- (BOOL)synchronizable;
- (int)version;

@end
