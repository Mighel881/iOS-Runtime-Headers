/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class <NSCopying><NSSecureCoding>, GSPermanentStorage, NSDate, NSString, NSURL;

@interface BRNonLocalVersion : NSObject {
    NSString *_displayName;
    NSString *_etag;
    BOOL _hasThumbnail;
    NSString *_lastEditorDeviceName;
    NSString *_lastEditorFormattedName;
    NSDate *_modificationDate;
    NSURL *_physicalURL;
    long long _sandboxHandle;
    unsigned long long _size;
    NSURL *_url;
    GSPermanentStorage *_versionsStore;
}

@property(readonly) NSString * displayName;
@property(readonly) NSString * etag;
@property BOOL hasThumbnail;
@property(readonly) BOOL isLatestVersion;
@property(readonly) NSString * lastEditorDeviceName;
@property(readonly) NSString * lastEditorFormattedName;
@property(readonly) NSDate * modificationDate;
@property(readonly) <NSCopying><NSSecureCoding> * persistentIdentifier;
@property(readonly) unsigned long long size;
@property(readonly) NSURL * url;

+ (id)listVersionsOfDocumentAtURL:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)etag;
- (BOOL)hasThumbnail;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 size:(id)arg3 extension:(id)arg4 etag:(id)arg5 hasThumbnail:(BOOL)arg6 displayName:(id)arg7 lastEditorDeviceName:(id)arg8 lastEditorFormattedName:(id)arg9 modificationDate:(id)arg10 versionsStore:(id)arg11;
- (BOOL)isLatestVersion;
- (id)lastEditorDeviceName;
- (id)lastEditorFormattedName;
- (id)modificationDate;
- (id)persistentIdentifier;
- (void)setHasThumbnail:(BOOL)arg1;
- (unsigned long long)size;
- (id)url;

@end
