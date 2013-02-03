/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSData;

@interface SBWallpaperImage : UIImage {
    NSData *_data;
    int _variant;
}

@property(readonly) NSData * data;
@property(readonly) int variant;

+ (id)cachedWallpaperDataForVariant:(int)arg1;
+ (void)clearCachedWallpaper;
+ (void)preheatWallpaperDataForVariant:(int)arg1;

- (id)data;
- (void)dealloc;
- (id)initWithVariant:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)variant;

@end
