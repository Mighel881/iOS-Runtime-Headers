/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDictionary, NSString;

@interface PLPhotoEditModel : NSObject <NSCopying> {
    int _appliedOrientation;
    BOOL _autoCropped;
    NSArray *_autoRedEyeCorrections;
    NSString *_autoSmartColorIdentifier;
    float _autoSmartColorLevel;
    NSString *_autoSmartToneIdentifier;
    float _autoSmartToneLevel;
    NSString *_autoWhiteBalanceIdentifier;
    NSDictionary *_autoWhiteBalanceSettings;
    float _blackPointLevelOffset;
    float _brightnessLevelOffset;
    float _bwGrainLevelOffset;
    float _bwHueLevelOffset;
    float _bwNeutralGammaLevelOffset;
    float _bwStrengthLevelOffset;
    float _bwToneLevelOffset;
    float _colorCastLevelOffset;
    float _colorContrastLevelOffset;
    float _colorVibrancyLevelOffset;
    float _contrastLevelOffset;
    int _cropConstraintHeight;
    int _cropConstraintWidth;
    NSString *_effectFilterName;
    int _effectFilterVersion;
    float _exposureLevelOffset;
    float _highlightsLevelOffset;
    NSArray *_legacyAutoEnhanceFilters;
    BOOL _legacyAutoEnhanceIsOn;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _normalizedCropRect;
    NSArray *_redEyeCorrections;
    float _shadowsLevelOffset;
    BOOL _smartBWEnabled;
    float _smartBWLevel;
    NSDictionary *_smartBWStatistics;
    BOOL _smartColorEnabled;
    float _smartColorLevel;
    NSDictionary *_smartColorStatistics;
    BOOL _smartToneEnabled;
    float _smartToneLevel;
    NSDictionary *_smartToneStatistics;
    float _straightenAngle;
    BOOL _whiteBalanceEnabled;
    float _whiteBalanceFaceI;
    float _whiteBalanceFaceQ;
    float _whiteBalanceFaceStrength;
    float _whiteBalanceFaceWarmth;
}

@property(readonly) int appliedOrientation;
@property(getter=isAutoCropped,readonly) BOOL autoCropped;
@property(copy,readonly) NSArray * autoRedEyeCorrections;
@property(copy,readonly) NSString * autoSmartColorIdentifier;
@property(readonly) float autoSmartColorLevel;
@property(copy,readonly) NSString * autoSmartToneIdentifier;
@property(readonly) float autoSmartToneLevel;
@property(copy,readonly) NSString * autoWhiteBalanceIdentifier;
@property(copy,readonly) NSDictionary * autoWhiteBalanceSettings;
@property(readonly) float blackPointLevelOffset;
@property(readonly) float brightnessLevelOffset;
@property(readonly) float bwGrainLevelOffset;
@property(readonly) float bwHueLevelOffset;
@property(readonly) float bwNeutralGammaLevelOffset;
@property(readonly) float bwStrengthLevelOffset;
@property(readonly) float bwToneLevelOffset;
@property(readonly) float colorCastLevelOffset;
@property(readonly) float colorContrastLevelOffset;
@property(readonly) float colorVibrancyLevelOffset;
@property(readonly) float contrastLevelOffset;
@property(getter=isCropConstrained,readonly) BOOL cropConstrained;
@property(readonly) int cropConstraintHeight;
@property(readonly) int cropConstraintWidth;
@property(copy,readonly) NSString * effectFilterName;
@property(readonly) int effectFilterVersion;
@property(readonly) float exposureLevelOffset;
@property(readonly) BOOL hasAnyAutoEnhancement;
@property(readonly) BOOL hasIdentityCrop;
@property(readonly) BOOL hasRedEyeCorrections;
@property(readonly) float highlightsLevelOffset;
@property(copy,readonly) NSArray * legacyAutoEnhanceFilters;
@property(readonly) BOOL legacyAutoEnhanceIsOn;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } normalizedCropRect;
@property(copy,readonly) NSArray * redEyeCorrections;
@property(readonly) float shadowsLevelOffset;
@property(getter=isSmartBWEnabled,readonly) BOOL smartBWEnabled;
@property(readonly) float smartBWLevel;
@property(copy,readonly) NSDictionary * smartBWStatistics;
@property(getter=isSmartColorEnabled,readonly) BOOL smartColorEnabled;
@property(readonly) float smartColorLevel;
@property(copy,readonly) NSDictionary * smartColorStatistics;
@property(getter=isSmartToneEnabled,readonly) BOOL smartToneEnabled;
@property(readonly) float smartToneLevel;
@property(copy,readonly) NSDictionary * smartToneStatistics;
@property(readonly) float straightenAngle;
@property(getter=isWhiteBalanceEnabled,readonly) BOOL whiteBalanceEnabled;
@property(readonly) float whiteBalanceFaceI;
@property(readonly) float whiteBalanceFaceQ;
@property(readonly) float whiteBalanceFaceStrength;
@property(readonly) float whiteBalanceFaceWarmth;

+ (id)_identityModel;
+ (void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(struct { /* ? */ }**)arg3;
+ (void)_loadSubfilterReferenceLevelsIfNeeded;
+ (float)_referenceValueOfType:(int)arg1 fromLevels:(struct { float x1; float x2; float x3; })arg2;
+ (int)identityCropConstraint;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })identityNormalizedCropRect;
+ (int)identityOrientation;
+ (float)referenceBWGrainLevelOfType:(int)arg1;
+ (float)referenceBWHueLevelOfType:(int)arg1;
+ (float)referenceBWNeutralGammaLevelOfType:(int)arg1;
+ (float)referenceBWStrengthLevelOfType:(int)arg1;
+ (float)referenceBWToneLevelOfType:(int)arg1;
+ (float)referenceBlackPointLevelOfType:(int)arg1;
+ (float)referenceBrightnessLevelOfType:(int)arg1;
+ (float)referenceColorCastLevelOfType:(int)arg1;
+ (float)referenceColorContrastLevelOfType:(int)arg1;
+ (float)referenceColorVibrancyLevelOfType:(int)arg1;
+ (float)referenceContrastLevelOfType:(int)arg1;
+ (float)referenceExposureLevelOfType:(int)arg1;
+ (float)referenceHighlightsLevelOfType:(int)arg1;
+ (float)referenceShadowsLevelOfType:(int)arg1;
+ (float)referenceSmartBWLevelOfType:(int)arg1;
+ (float)referenceSmartColorLevelOfType:(int)arg1;
+ (float)referenceSmartToneLevelOfType:(int)arg1;
+ (float)referenceStraightenAngleOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceILevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceQLevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceStrengthLevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceWarmthLevelOfType:(int)arg1;

- (void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(float)arg3;
- (id)_debugDictionaryRepresentation;
- (BOOL)_shouldEarlyExitComparisonToModel:(id)arg1 returnValue:(BOOL*)arg2;
- (int)appliedOrientation;
- (id)autoRedEyeCorrections;
- (id)autoSmartColorIdentifier;
- (float)autoSmartColorLevel;
- (id)autoSmartToneIdentifier;
- (float)autoSmartToneLevel;
- (id)autoWhiteBalanceIdentifier;
- (id)autoWhiteBalanceSettings;
- (float)blackPointLevelOffset;
- (float)brightnessLevelOffset;
- (float)bwGrainLevelOffset;
- (float)bwHueLevelOffset;
- (float)bwNeutralGammaLevelOffset;
- (float)bwStrengthLevelOffset;
- (float)bwToneLevelOffset;
- (float)colorCastLevelOffset;
- (float)colorContrastLevelOffset;
- (float)colorVibrancyLevelOffset;
- (float)contrastLevelOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)cropConstraintHeight;
- (int)cropConstraintWidth;
- (void)dealloc;
- (id)description;
- (id)effectFilterName;
- (int)effectFilterVersion;
- (float)exposureLevelOffset;
- (BOOL)hasAnyAutoEnhancement;
- (BOOL)hasIdentityCrop;
- (BOOL)hasRedEyeCorrections;
- (float)highlightsLevelOffset;
- (id)init;
- (BOOL)isAutoCropped;
- (BOOL)isCropConstrained;
- (BOOL)isCropConstraintEqualToPhotoEditModel:(id)arg1;
- (BOOL)isEffectFilterEqualToPhotoEditModel:(id)arg1;
- (BOOL)isEqualToPhotoEditModel:(id)arg1;
- (BOOL)isGeometryEqualToPhotoEditModel:(id)arg1;
- (BOOL)isGeometryIdentity;
- (BOOL)isIdentityModel;
- (BOOL)isRedEyeCorrectionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartBWEnabled;
- (BOOL)isSmartBWPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartColorEnabled;
- (BOOL)isSmartColorPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartToneEnabled;
- (BOOL)isSmartTonePrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1;
- (BOOL)isWhiteBalanceEnabled;
- (id)legacyAutoEnhanceFilters;
- (BOOL)legacyAutoEnhanceIsOn;
- (id)mutableCopy;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })normalizedCropRect;
- (id)pl_aggregateKeysForPreviousPhotoEditModel:(id)arg1;
- (id)pl_aggregateNameForEffectFilter;
- (struct CGSize { float x1; float x2; })pl_dataCropConstraintSizeForImageGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pl_dataCropRectForImageGeometry:(id)arg1 straightenAngle:(float)arg2;
- (BOOL)pl_isCropConstraintEnabled;
- (BOOL)pl_isCropEnabled;
- (id)redEyeCorrections;
- (float)shadowsLevelOffset;
- (float)smartBWLevel;
- (id)smartBWStatistics;
- (float)smartColorLevel;
- (id)smartColorStatistics;
- (float)smartToneLevel;
- (id)smartToneStatistics;
- (float)straightenAngle;
- (float)whiteBalanceFaceI;
- (float)whiteBalanceFaceQ;
- (float)whiteBalanceFaceStrength;
- (float)whiteBalanceFaceWarmth;

@end
