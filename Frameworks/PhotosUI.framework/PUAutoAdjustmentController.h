/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSDictionary, PLPhotoEditModel;

@interface PUAutoAdjustmentController : NSObject {
    BOOL _busy;
    NSArray *_cachedRedEyeCorrections;
    float _cachedSmartColorLevel;
    float _cachedSmartToneLevel;
    BOOL _cachedValuesAreValid;
    NSDictionary *_cachedWhiteBalanceSettings;
    PLPhotoEditModel *_stashedPreviousManualModel;
}

@property(getter=isBusy) BOOL busy;

- (void).cxx_destruct;
- (void)_applyAutoValuesOnModel:(id)arg1 whiteBalanceSettings:(id)arg2 redEyeCorrections:(id)arg3 smartToneLevel:(float)arg4 smartColorLevel:(float)arg5 valuesCalculator:(id)arg6 animated:(BOOL)arg7;
- (void)_removeLegacyAutoEnhanceFromModel:(id)arg1;
- (void)_revertAutoValuesOnModel:(id)arg1;
- (void)_setBusy:(BOOL)arg1;
- (void)disableAutoEnhanceOnModel:(id)arg1;
- (void)enableAutoEnhanceOnModel:(id)arg1 baseImage:(id)arg2 valuesCalculator:(id)arg3 allowRedEye:(BOOL)arg4 animated:(BOOL)arg5 completionHandler:(id)arg6;
- (void)invalidateCachedAdjustments;
- (BOOL)isAutoEnhanceEnabledForModel:(id)arg1;
- (BOOL)isBusy;

@end
