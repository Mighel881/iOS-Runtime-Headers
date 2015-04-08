/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@class NSArray, NSString;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding> {
    BOOL _alwaysLaunchesFullScreen;
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSArray *_launchImageInfos;
    NSString *_launchNibName;
    NSString *_launchStoryboardName;
    BOOL _launchesOpaque;
    NSString *_sandboxPath;
}

@property(readonly) BOOL allowsSavingLaunchImages;
@property BOOL alwaysLaunchesFullScreen;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundlePath;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSArray * launchImageInfos;
@property(copy) NSString * launchNibName;
@property(copy) NSString * launchStoryboardName;
@property BOOL launchesOpaque;
@property(copy) NSString * sandboxPath;
@property(readonly) Class superclass;

+ (id)_compatibilityInfoForBundleIdentifier:(id)arg1 creatingIfNecessaryWithBundle:(id)arg2 andSandboxPath:(id)arg3;
+ (id)_compatibilityInfoForBundleIdentifier:(id)arg1 creatingIfNecessaryWithBundle:(id)arg2 andSandboxPath:(id)arg3 lazy:(BOOL)arg4;
+ (id)compatibilityInfoForBundleIdentifier:(id)arg1;
+ (void)removeCachedLaunchImagesInfoForBundleIdentifier:(id)arg1 forgetApp:(BOOL)arg2;
+ (void)removeCompatibilityInfoForBundleIdentifier:(id)arg1;

- (id)_baseAppLaunchImagePath;
- (id)_infoForLaunchImageWithRequest:(id)arg1 createIfNeeded:(BOOL)arg2 launchingOrientation:(int*)arg3;
- (id)_pathForLaunchImageWithName:(id)arg1 sceneID:(id)arg2 scale:(float)arg3 size:(struct CGSize { float x1; float x2; })arg4 downscaled:(BOOL)arg5 interfaceOrientation:(int)arg6;
- (id)_snapshotContainerName;
- (id)_snapshotSceneContainerNameForSceneID:(id)arg1;
- (void)_writeOutChanges;
- (void)addLaunchImageForRequest:(id)arg1 finalOrientation:(int)arg2 ifCreatedAt:(id)arg3;
- (BOOL)allowsSavingLaunchImages;
- (BOOL)alwaysLaunchesFullScreen;
- (id)appLaunchImagePathForSceneID:(id)arg1 downscaled:(BOOL)arg2;
- (id)bundleIdentifier;
- (id)bundlePath;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)infoForLaunchImageWithRequest:(id)arg1 launchingOrientation:(int*)arg2;
- (id)initWithBundle:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)launchImageInfos;
- (id)launchNibName;
- (id)launchStoryboardName;
- (BOOL)launchesOpaque;
- (id)pathForLaunchImageWithRequest:(id)arg1 launchingOrientation:(int*)arg2;
- (void)purgeSavedImages;
- (id)sandboxPath;
- (id)savedLaunchImagesDirectory;
- (void)setAlwaysLaunchesFullScreen:(BOOL)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setLaunchImageInfos:(id)arg1;
- (void)setLaunchNibName:(id)arg1;
- (void)setLaunchStoryboardName:(id)arg1;
- (void)setLaunchesOpaque:(BOOL)arg1;
- (void)setSandboxPath:(id)arg1;

@end
