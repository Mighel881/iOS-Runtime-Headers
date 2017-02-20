/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSURL : NSObject <CKXPCSuitableString, NSCopying, NSSecureCoding, PQLValuable, QLPreviewItem, SBFFileCacheFileIdentifier, TSUDownloadItem> {
    NSURL * _baseURL;
    void * _clients;
    void * _reserved;
    NSString * _urlString;
}

@property (readonly, copy) NSURL *URLByDeletingLastPathComponent;
@property (readonly, copy) NSURL *URLByDeletingPathExtension;
@property (readonly, copy) NSURL *URLByResolvingSymlinksInPath;
@property (readonly, copy) NSURL *URLByStandardizingPath;
@property (readonly, copy) NSString *absoluteString;
@property (readonly, copy) NSURL *absoluteURL;
@property (readonly) int addressBookUID;
@property (readonly, copy) NSURL *baseURL;
@property (nonatomic, readonly) NSString *br_lastEditorDeviceName;
@property (nonatomic, readonly) NSString *br_lastEditorName;
@property (nonatomic, readonly) NSPersonNameComponents *br_lastEditorNameComponents;
@property (readonly) int callService;
@property (nonatomic, readonly) BOOL ckAllowRetargeting;
@property (nonatomic, readonly) BOOL ckShouldShowComposeUI;
@property (nonatomic, readonly) BOOL ckShouldShowDigitalTouchCanvas;
@property (nonatomic, readonly) NSArray *ckSuggestedReplies;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *downloadTaskDescription;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (readonly, copy) NSURL *filePathURL;
@property (readonly) const char *fileSystemRepresentation;
@property (getter=isFileURL, readonly) BOOL fileURL;
@property (readonly) BOOL forceAssist;
@property (readonly, copy) NSString *fragment;
@property (readonly) BOOL hasDirectoryPath;
@property (readonly) unsigned int hash;
@property (readonly, copy) NSString *host;
@property (nonatomic, readonly) BOOL isAppStoreURL;
@property (readonly) BOOL isBasebandLogURL;
@property (readonly) BOOL isEmergencyCallURL;
@property (readonly) BOOL isEmergencyURL;
@property (nonatomic, readonly) BOOL isMapURL;
@property (nonatomic, readonly) BOOL isNewsURL;
@property (readonly) BOOL isVoicemailURL;
@property (nonatomic, readonly) BOOL isiTunesURL;
@property (readonly, copy) NSString *lastPathComponent;
@property (setter=ls_setPreferredLocalizations:, retain) NSArray *ls_preferredLocalizations;
@property (nonatomic, readonly) NSString *mpUniversalTrackIDBaseID;
@property (nonatomic, readonly) int mpUniversalTrackIDType;
@property (nonatomic, readonly) BOOL needsDownload;
@property (readonly) NSString *originatingUIIdentifier;
@property (readonly, copy) NSString *parameterString;
@property (readonly, copy) NSString *password;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *pathComponents;
@property (readonly, copy) NSString *pathExtension;
@property (readonly) NSString *phoneNumber;
@property (readonly, copy) NSNumber *port;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly, copy) NSString *query;
@property (readonly, copy) NSString *relativePath;
@property (readonly, copy) NSString *relativeString;
@property (readonly, copy) NSString *resourceSpecifier;
@property (readonly, copy) NSString *scheme;
@property (nonatomic, readonly) LSAppLink *sf_appLink;
@property (nonatomic, readonly) BOOL sf_isOfflineReadingListURL;
@property (nonatomic, readonly) BOOL sf_isWebSearchURL;
@property (nonatomic, readonly) BOOL ssb_hasUserInfo;
@property (nonatomic, readonly) BOOL ssb_isSafeURL;
@property (readonly, copy) NSURL *standardizedURL;
@property (readonly) Class superclass;
@property (readonly) BOOL suppressAssist;
@property (nonatomic, readonly) long long totalBytesExpectedToBeDownloaded;
@property (nonatomic, readonly) NSString *tsu_UTI;
@property (nonatomic, readonly) NSURL *uniquedURL;
@property (readonly, copy) NSString *user;
@property (readonly) BOOL wasAlreadyAssisted;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)__unurl;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;

- (id)bookmarkDataWithAliasRecord:(id)arg1;
- (id)bookmarkDataWithOptions:(unsigned int)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4;
- (BOOL)checkResourceIsReachableAndReturnError:(id*)arg1;
- (id)filePathURL;
- (id)fileReferenceURL;
- (BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (BOOL)isFileReferenceURL;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (id)resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)setResourceValues:(id)arg1 error:(id*)arg2;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

+ (id)ab_URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)ab_faceTimeURLWithDestinationID:(id)arg1;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (BOOL)_isSafeDirectoryForDownloads:(int)arg1;
- (BOOL)_isSafeFileForBackgroundUpload:(int)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKSharingURLSubscheme;
- (id)CKXPCSuitableString;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (BOOL)cs_addDocumentTracking;
- (BOOL)cs_isInMobileDocuments;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned int)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5;
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithComponents:(/* Warning: unhandled struct encoding: '{?=@@@@i@@@}' */ struct { id x1; id x2; int x3; id x4; id x5; })arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
+ (id)fileURLWithPathComponents:(id)arg1;

- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)URLByDeletingLastPathComponent;
- (id)URLByDeletingPathExtension;
- (id)URLByResolvingSymlinksInPath;
- (id)URLByStandardizingPath;
- (id)_URLByEscapingSpacesAndControlChars;
- (unsigned long)_cfTypeID;
- (struct __CFURL { }*)_cfurl;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(BOOL)arg1;
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_freeClients;
- (id)_hostString;
- (BOOL)_isAbsolute;
- (BOOL)_isDeallocating;
- (void)_performWithPhysicalURL:(id /* block */)arg1;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (BOOL)_tryRetain;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (/* Warning: unhandled struct encoding: '{?=@@@@i@@@}' */ struct { id x1; id x2; int x3; id x4; id x5; })_web_URLComponents;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)absoluteString;
- (id)absoluteURL;
- (id)baseURL;
- (BOOL)checkPromisedItemIsReachableAndReturnError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (const char *)fileSystemRepresentation;
- (id)fragment;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (BOOL)hasDirectoryPath;
- (unsigned int)hash;
- (id)host;
- (id)init;
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned int)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFileURL;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (id)lastPathComponent;
- (id)parameterString;
- (id)password;
- (id)path;
- (id)pathComponents;
- (id)pathExtension;
- (id)port;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)query;
- (id)relativePath;
- (id)relativeString;
- (oneway void)release;
- (id)resourceSpecifier;
- (id)retain;
- (unsigned int)retainCount;
- (id)scheme;
- (id)standardizedURL;
- (id)user;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (int)_mpUTITypeFromMRUTIType:(unsigned int)arg1;
- (id)mpUniversalTrackIDBaseID;
- (int)mpUniversalTrackIDType;

// Image: /System/Library/Frameworks/Messages.framework/Messages

- (id)__ms_UTI;
- (BOOL)__ms_conformsToUTI:(id)arg1;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

- (id)LS_nooverride:(id)arg1;
- (BOOL)LS_pathHasCaseInsensitivePrefix:(id)arg1;
- (BOOL)conformsToOverridePatternWithKey:(id)arg1;
- (id)fmfURL;
- (id)fmipURL;
- (id)iCloudEmailPrefsURL;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)iTunesStoreURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (BOOL)isiWorkURL;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)ls_preferredLocalizations;
- (void)ls_setPreferredLocalizations:(id)arg1;
- (id)mapsURL;
- (id)photosURL;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)previewItemURL;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)sf_appLink;
- (BOOL)sf_isOfflineReadingListURL;
- (BOOL)sf_isWebSearchURL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)SLTwitterAccessTokenURL;
+ (id)SLTwitterAccountGenerateURL;
+ (id)SLTwitterAccountSettingsURL;
+ (id)SLTwitterCleanupPushDestinationsURL;
+ (id)SLTwitterDirectMessageURL;
+ (id)SLTwitterFriendsURL;
+ (id)SLTwitterFriendshipsURL;
+ (id)SLTwitterImageLimitsURL;
+ (id)SLTwitterNearbyPlacesURL;
+ (id)SLTwitterRequestTokenURL;
+ (id)SLTwitterRetweetURLForTweetID:(id)arg1;
+ (id)SLTwitterTCoLengthURL;
+ (id)SLTwitterUpdateMultiPartStatusURL;
+ (id)SLTwitterUpdateStatusURL;
+ (id)SLTwitterUserInfoURL;
+ (id)SLTwitterUsersLookupURL;
+ (id)SLTwitterVerifyCredentialsURL;
+ (id)URLForFacebookGraphAPIWithDomain:(id)arg1 path:(id)arg2;
+ (id)URLForFacebookGraphAPIWithPath:(id)arg1;
+ (id)URLForFacebookPageAtPath:(id)arg1;
+ (id)URLForFacebookRESTMethod:(id)arg1;
+ (BOOL)_isBetaSwitchEnabledForKey:(struct __CFString { }*)arg1;

- (BOOL)isAppStoreURL;
- (BOOL)isAssetURL;
- (BOOL)isMusicStoreURL;
- (BOOL)loadingInUIWebViewWillLaunchAnotherApp;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)ui_cloudDocsContainerURL;
+ (id)ui_incomingDirectory:(BOOL)arg1;

- (void)_domain:(id*)arg1 subdomain:(id*)arg2;
- (BOOL)_isGoogleMapsDomain:(id)arg1 subdomain:(id)arg2 path:(id)arg3 queryKeysAndValues:(id)arg4;
- (id)appleStoreURL;
- (BOOL)isAccountURL;
- (BOOL)isGoogleMapsURL;
- (BOOL)isHTTPOrHTTPSURL;
- (BOOL)isInternalUIKitURL;
- (BOOL)isJavaScriptURL;
- (BOOL)isSpringboardHandledURL;
- (BOOL)isWebcalURL;
- (id)itmsURL;
- (id)phobosURL;
- (id)radarWebURL;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (id)ui_bookmarkForExportWithError:(id*)arg1;
- (BOOL)ui_canOpenInPlace;
- (id)ui_downloadOperationForActivity:(id)arg1;
- (BOOL)ui_hasReadSandboxExtended;
- (BOOL)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (BOOL)ui_isFileProviderURL;
- (BOOL)ui_isUnfulfilledPromiseURL;
- (id)ui_issueReadSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (void)ui_scheduleForCleanup;
- (void)ui_setIsFileProviderURL:(BOOL)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (unsigned long long)un_fileSize;
- (id)un_resourceTypeHint;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_web_URLWithWTFString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
+ (id)_web_URLWithWTFString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1 relativeToURL:(id)arg2;

- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })_web_originalDataAsWTFString;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)_af_URLWithMessageIdentifier:(id)arg1;

- (id)_af_messageIdentifierValue;
- (BOOL)isAMOSCommittedIdentifier;
- (BOOL)isAMOSIdentifier;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (BOOL)afui_hasMapItemScheme;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (BOOL)MD5:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (int)classicPortForScheme:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;

- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutPassword;
- (id)URLWithoutUsername;
- (BOOL)absoluteURLisEqual:(id)arg1;
- (id)initWithDirtyString:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (BOOL)isEqualToURL:(id)arg1;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (id)queryParameters;
- (id)serverURL;
- (id)unquotedPassword;
- (id)uri;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)URLWithAddressBookUID:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;

- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (BOOL)compareToLocalString:(id)arg1;
- (BOOL)compareToLocalURL:(id)arg1;
- (id)hostWithoutWWW;
- (id)initWithCalDirtyString:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (BOOL)isEqualToURL:(id)arg1;
- (BOOL)isEqualToURLIgnoringScheme:(id)arg1;
- (BOOL)isOnRemoteFileSystem;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)pathWithoutTrailingRemovingSlash;
- (id)queryParameters;
- (id)serverURL;
- (id)unquotedPassword;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)_caseSensitiveQueryKeysAndValues;
- (id)configurationRequest;
- (BOOL)isConfigurationURL;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2;
+ (id)ckURLForResource:(id)arg1 withExtension:(id)arg2;

- (BOOL)ckAllowRetargeting;
- (BOOL)ckShouldShowComposeUI;
- (BOOL)ckShouldShowDigitalTouchCanvas;
- (id)ckSuggestedReplies;
- (id)ckWillNotLaunchComposeUIURL;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(id /* block */)arg2;
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(BOOL)arg3;

- (BOOL)_br_isInSyncedLocationStrictly:(BOOL)arg1;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id*)arg1;
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id*)arg3;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id*)arg4;
- (void)br_addPhysicalProperty;
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)br_bookmarkableStringWithEtag:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)br_cloudDocsContainer;
- (id)br_cloudDocsContainerWithResolveInnerSharedContainerID:(BOOL)arg1;
- (id)br_containerID;
- (id)br_containerIDIfIsDesktopOrDocumentsURL;
- (id)br_containerIDIfIsDocumentsContainerURL;
- (id)br_containerIDWithResolveInnerSharedContainerID:(BOOL)arg1;
- (void)br_containerIDsWithExternalReferencesWithHandler:(id /* block */)arg1;
- (id)br_debugDescription;
- (id)br_externalDocumentPropertiesWithError:(id*)arg1;
- (BOOL)br_getTagNames:(id*)arg1 error:(id*)arg2;
- (void)br_isConflictedWithHandler:(id /* block */)arg1;
- (BOOL)br_isDocumentsContainer;
- (BOOL)br_isExternalDocumentReference;
- (BOOL)br_isInCloudDocsPrivateStorages;
- (BOOL)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
- (BOOL)br_isInLocalHomeDirectory;
- (BOOL)br_isInMobileDocuments;
- (BOOL)br_isInSharedDocsContainer;
- (BOOL)br_isInSyncedDesktop;
- (BOOL)br_isInSyncedDocuments;
- (BOOL)br_isInSyncedLocation;
- (BOOL)br_isInTrash;
- (BOOL)br_isParentOfURL:(id)arg1;
- (BOOL)br_isParentOfURL:(id)arg1 strictly:(BOOL)arg2;
- (BOOL)br_isStrictlyInSyncedLocation;
- (id)br_itemID;
- (id)br_lastEditorDeviceName;
- (id)br_lastEditorName;
- (id)br_lastEditorNameComponents;
- (id)br_logicalURL;
- (BOOL)br_mightBeBRAlias;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_pathRelativeToSyncedRootURL:(id)arg1;
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;
- (id)br_physicalURL;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (id)br_realpathURL;
- (BOOL)br_setAccessTime:(unsigned long long)arg1 error:(id*)arg2;
- (BOOL)br_setTagNames:(id)arg1 error:(id*)arg2;
- (id)br_typeIdentifierWithError:(id*)arg1;
- (BOOL)br_wouldBeExcludedFromSync;
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)brc_applicationBundleID;
- (id)brc_applicationContainerID;
- (id)brc_applicationName;
- (id)brc_attributesValues:(id)arg1 container:(id)arg2 lookup:(id)arg3;
- (id)brc_iWorkPathExtension;

// Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI

- (id)_ui_extendedAttributeForKey:(id)arg1;
- (void)_ui_setExtendedAttribute:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)CNFQueryDictionary;
- (id)URLByAppendingCNFQueryDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)_SYTemporaryFileURL:(id*)arg1;
+ (id)_SYURLForNewTemporaryFile:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/Conference.framework/Conference

- (BOOL)_isPhoneNumberID:(id)arg1;
- (id)formattedFaceTimeDestinationAccount;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_dialRequestURLWithDestinationID:(id)arg1 contact:(id)arg2 faceTime:(BOOL)arg3 video:(BOOL)arg4 ttyType:(int)arg5;
+ (id)_cnui_faceTimeAudioURLFutureWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeAudioURLWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLFutureWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLFutureWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLFutureWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_skypeTextURLFutureWithDestinationID:(id)arg1;
+ (id)_cnui_skypeTextURLWithDestinationID:(id)arg1;
+ (id)_cnui_skypeVideoURLFutureWithDestinationID:(id)arg1;
+ (id)_cnui_skypeVideoURLWithDestinationID:(id)arg1;
+ (id)_cnui_skypeVoiceURLFutureWithDestinationID:(id)arg1;
+ (id)_cnui_skypeVoiceURLWithDestinationID:(id)arg1;
+ (id)_cnui_telephonyURLFutureWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLFutureWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLFutureWithDestinationID:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLWithDestinationID:(id)arg1 contact:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

+ (id)CDVDefaultPortForScheme:(id)arg1;
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;

- (id)CDVFileSystemSafePath;
- (BOOL)CDVIsEqualToURL:(id)arg1;
- (BOOL)CDVIsSafeRedirectForRequestURL:(id)arg1;
- (id)CDVPassword;
- (id)CDVRawLastPathComponent;
- (id)CDVRawLastPathComponentPreservingEscapes;
- (id)CDVRawPath;
- (id)CDVServerURL;
- (id)CDVServerURLWithPath:(BOOL)arg1;
- (id)CDVURLByDeletingLastPathComponent;
- (id)CDVURLWithPassword:(id)arg1;
- (id)CDVURLWithPath:(id)arg1;
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(BOOL)arg7;
- (id)CDVURLWithUser:(id)arg1;
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)sf_asPunchout;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)da_URLWithDirtyString:(id)arg1;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (int)da_classicPortForScheme:(id)arg1;

- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutUsername;
- (BOOL)da_isEqualToDAVURL:(id)arg1;
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
- (id)da_pathWithoutTrailingRemovingSlash;
- (id)da_rawPath;
- (id)da_urlByRemovingUsername;
- (id)da_urlBySettingHost:(id)arg1;
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(BOOL)arg2;
- (id)da_urlBySettingPath:(id)arg1;
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(BOOL)arg2;
- (id)da_urlBySettingPort:(id)arg1;
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(BOOL)arg2;
- (id)da_urlBySettingScheme:(id)arg1;
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(BOOL)arg2;
- (id)da_urlBySettingUsername:(id)arg1;
- (id)uri;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

+ (id)dd_URLWithPotentiallyInvalidURLString:(id)arg1;

- (id)dd_emailFromMailtoScheme;
- (id)dd_phoneNumberFromTelScheme;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (id)fm_preferencesPathURLForDomain:(id)arg1;
- (id)preferencesPathURLForDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (BOOL)_gkIsSecure;
- (BOOL)_gkIsValidServerURL;
- (id)_gkQueryDictionary;
- (id)_gkURLByAddingQueryParameters:(id)arg1;
- (id)_gkURLByReplacingSchemeWithScheme:(id)arg1;
- (id)cacheKeyRepresentation;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

- (void)chmod:(unsigned short)arg1;
- (id)gs_URLByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (id)gs_issueExtension:(const char *)arg1 error:(id*)arg2;
- (id)gs_issueReadExtensionIfNeededForPid:(int)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_portionAfterHostname;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__imURLByAppendingQueryString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_URLWithData:(id)arg1 baseURL:(id)arg2;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })_lp_hostAndPortRangeFromUserTypedString:(id)arg1;

- (id)_lp_fullySimplifiedUserVisibleURLString;
- (BOOL)_lp_isHTTPFamilyURL;
- (id)_lp_originalData;
- (id)_lp_userVisibleString;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_firstPartNumber;
- (BOOL)mf_isResourceURL;
- (BOOL)mf_isValidAttachmentURL;
- (id)mf_lastPartNumber;
- (id)mf_partNumbers;
- (unsigned int)mf_rowID;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_URLWithResourceID:(id)arg1;
+ (id)fc_urlForUserDomainCachesDirectory;
+ (id)fc_urlForUserDomainDocumentsDirectory;
+ (id)fc_urlForUserDomainLibraryDirectory;

- (BOOL)fc_isResourceURL;
- (id)fc_resourceID;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (BOOL)isAppStoreURL;
- (BOOL)isMapURL;
- (BOOL)isNewsURL;
- (BOOL)isiTunesURL;
- (id)queryComponents;
- (id)uniquedURL;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)URLWithPackagePart:(id)arg1;
+ (id)sfu_filePathURLWithEscapes:(id)arg1;
+ (id)sfu_improperlyEscapedString:(id)arg1;
+ (id)sfu_properlyEscapedString:(id)arg1;
+ (id)sfu_relativeURLWithEscapes:(id)arg1;

- (id)initWithPackagePart:(id)arg1;
- (BOOL)isInternalToPackage;
- (BOOL)sfu_isRelative;
- (id)tsu_UTI;
- (BOOL)tsu_conformsToUTI:(id)arg1;
- (id)tsu_displayName;
- (id)tsu_documentIdentifier;
- (unsigned long long)tsu_fileSize;
- (BOOL)tsu_isFileSizeTooLargeForSharing;
- (BOOL)tsu_isShared;
- (BOOL)tsu_isSharedWithMe;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(id /* block */)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (BOOL)isAppleURL;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)userCachesDirectoryURL:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing

- (BOOL)ssb_hasUserInfo;
- (BOOL)ssb_isSafeURL;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)safari_URLWithUserTypedString:(id)arg1;
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(id /* block */)arg2;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })safari_hostAndPortRangeFromUserTypedString:(id)arg1;

- (id)_safari_URLByReplacingComponent:(long)arg1 includingSeparators:(BOOL)arg2 withString:(id)arg3;
- (id)_safari_URLByReplacingComponent:(long)arg1 withString:(id)arg2;
- (id)safari_URLByDeletingPort;
- (id)safari_URLByDeletingScheme;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (id)safari_URLByReplacingQueryWithString:(id)arg1;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;
- (id)safari_canonicalURL;
- (id)safari_displayNameWithTitle:(id)arg1;
- (BOOL)safari_hasCharactersBeyondPath;
- (BOOL)safari_hasSameOriginAsURL:(id)arg1;
- (BOOL)safari_hasScheme:(id)arg1;
- (BOOL)safari_isDataURL;
- (BOOL)safari_isHTTPFamilyURL;
- (id)safari_originalDataAsString;
- (id)safari_path;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
- (id)safari_userVisibleString;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

+ (id)_sp_URLFromFileID:(id)arg1 filename:(id)arg2 parentFileID:(id)arg3 documentID:(id)arg4;
+ (id)sp_URLFromFileID:(id)arg1 filename:(id)arg2 parentFileID:(id)arg3 documentID:(id)arg4;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

- (id)URLByReallyResolvingSymlinksInPath;
- (BOOL)sd_containsOrIsItemAtURL:(id)arg1 error:(id*)arg2;
- (BOOL)sd_strictlyContainsItemAtURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)_contentModificationDate:(id)arg1;
+ (id)_displayName:(id)arg1;
+ (BOOL)_hasUnresolvedConflict:(id)arg1;
+ (BOOL)_isDownloaded:(id)arg1;
+ (BOOL)_isDownloading:(id)arg1;
+ (BOOL)_isInCloud:(id)arg1;
+ (BOOL)_isUploaded:(id)arg1;
+ (BOOL)_isUploading:(id)arg1;
+ (int)isHostnameReachable:(id)arg1;
+ (id)parseURLParams:(id)arg1;

- (id)contentModificationDate;
- (id)displayName;
- (BOOL)hasUnresolvedConflict;
- (BOOL)isDownloaded;
- (BOOL)isDownloading;
- (BOOL)isInCloud;
- (BOOL)isUploaded;
- (BOOL)isUploading;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)fileCacheStableDataRepresentation;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isStoreServicesURL;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (int)tv_imageURLType;
- (BOOL)tv_isAppIconURL;
- (BOOL)tv_isResourceURL;
- (id)tv_resourceName;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)launchQueryForValue:(id)arg1;
+ (id)tp_inCallServiceURLWithReason:(int)arg1;

- (BOOL)tp_isInCallServiceURLWithReason:(int)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(BOOL)arg2;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(BOOL)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5 audioOnly:(BOOL)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3 forceAssist:(BOOL)arg4 suppressAssist:(BOOL)arg5 wasAssisted:(BOOL)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(BOOL)arg2;

- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)URLWithNewQueryParameterDictionary:(id)arg1;
- (id)_destinationIDConvertingNumbersToLatin:(BOOL)arg1;
- (BOOL)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;
- (BOOL)_hasScheme:(id)arg1;
- (BOOL)_isPhoneNumberID:(id)arg1;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (int)addressBookUID;
- (int)callService;
- (id)faceTimeDestinationAccount;
- (BOOL)forceAssist;
- (id)formattedPhoneNumber;
- (BOOL)hasNoPromptOption;
- (BOOL)hasTelephonyScheme;
- (BOOL)isBasebandLogURL;
- (BOOL)isDialCallURL;
- (BOOL)isEmergencyCallURL;
- (BOOL)isEmergencyURL;
- (BOOL)isFaceTimeAudioPromptURL;
- (BOOL)isFaceTimeAudioURL;
- (BOOL)isFaceTimePromptURL;
- (BOOL)isFaceTimeURL;
- (BOOL)isLaunchForIncomingCallURL;
- (BOOL)isShowInCallUIURL;
- (BOOL)isTelephonyPromptURL;
- (BOOL)isTelephonyURL;
- (BOOL)isVoicemailURL;
- (BOOL)isWebSafeTelephoneURL;
- (id)numberQualifiedForAddressBook;
- (id)originatingUIIdentifier;
- (id)phoneNumber;
- (id)queryParameters;
- (BOOL)suppressAssist;
- (id)telephonyParameterDictionary;
- (id)tuQueryParameters;
- (BOOL)wasAlreadyAssisted;
- (id)webSafeTelephoneURL;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (id)rc_URLByAppendingStringToLastComponentBasename:(id)arg1;
- (id)rc_URLByFixingUpPersistentMediaRecordingsDirectory;
- (id)rc_URLByReplacingPathExtensionWithExtension:(id)arg1;
- (id)rc_URLByStandardizingResolvedPath;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_inMemoryAddress;

- (BOOL)wf_URLHasParameter:(id)arg1;
- (id)wf_URLWithTracking:(id)arg1;
- (BOOL)wf_isInMemoryAddress;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (BOOL)_webBookmarks_isHTTPFamilyURL;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

- (BOOL)WF_hostnameIsIPAddress;
- (id)WF_normalizedRelativePath;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_uniqueWebDataURL;
+ (id)_webkit_URLWithUserTypedString:(id)arg1;
+ (id)_webkit_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)uniqueURLWithRelativePart:(id)arg1;

- (id)_web_URLByRemovingUserInfo;
- (const char *)_web_URLCString;
- (id)_web_dataForURLComponentType:(long)arg1;
- (id)_web_hostData;
- (id)_web_hostString;
- (BOOL)_web_isEmpty;
- (id)_web_originalData;
- (id)_web_originalDataAsString;
- (id)_web_schemeData;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_userVisibleString;
- (id)_webkit_URLByRemovingFragment;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_canonicalize;
- (BOOL)_webkit_isFileURL;
- (BOOL)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (BOOL)isStoreServicesURL;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)icqURLForIndex:(int)arg1;

- (int)icqIndex;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (id)_URLQueryParameterValueAllowedCharacterSet;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(BOOL)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(BOOL)arg2;
+ (id)unescapedStringForString:(id)arg1;

- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)arg1;
- (void)enumerateQueryWithBlock:(id /* block */)arg1;
- (BOOL)isSafeExternalURL;
- (id)sanitizedURL;
- (id)schemeSwizzledURL;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)urlBySettingQueryStringDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)termsAndConditionsURL;

- (int)storeURLType;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (BOOL)canHandleDownloadTask:(id)arg1;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (BOOL)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3 error:(id*)arg4;

- (id)downloadTaskDescription;
- (id)downloadURL;
- (long long)totalBytesExpectedToBeDownloaded;
- (id)tsp_URLExceptPrivate;
- (id)tsp_documentIdentifier;
- (id)tsp_documentIdentifierWithFallback:(BOOL)arg1;
- (id)tsp_embeddedUTI;
- (BOOL)tsp_getIsUbiquitousValue:(BOOL*)arg1 promised:(BOOL)arg2 error:(id*)arg3;
- (BOOL)tsp_isEqualToURLExceptPrivate:(id)arg1;
- (BOOL)tsp_isIWorkAVAssetURL;
- (BOOL)tsp_isOnNonHFSVolume;
- (BOOL)tsp_isUbiquitous;
- (BOOL)tsp_isUbiquitousPromised:(BOOL)arg1;
- (BOOL)tsp_matchesURL:(id)arg1;
- (id)tsp_pathExceptPrivate;
- (id)tsu_UTI;
- (BOOL)tsu_conformsToAnyUTI:(id)arg1;
- (BOOL)tsu_conformsToUTI:(id)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
