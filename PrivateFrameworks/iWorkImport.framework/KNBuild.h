/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNAbstractSlide, KNAnimationInfo, KNAnimationPluginMenu, KNBuildAttributes, KNBuildChunk, NSArray, NSMutableDictionary, NSSet, NSString, NSUUID, TSDBezierPathSource, TSDDrawableInfo, TSDEditableBezierPathSource, TSUColor;

@interface KNBuild : TSPObject <KNInspectableAnimation, NSCopying, TSKTransformableObject> {
    KNBuildAttributes *_attributes;
    NSMutableDictionary *_buildChunkIDMap;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _cachedActiveChunkRange;
    BOOL _cachedActiveChunkRangeIsValid;
    NSArray *_cachedChunks;
    int _chunkIDSeed;
    NSString *_delivery;
    TSDDrawableInfo *_drawable;
    NSUUID *_drawableId;
    KNAbstractSlide *_slide;
}

@property(readonly) unsigned int actionAcceleration;
@property(readonly) TSDEditableBezierPathSource * actionMotionPathSource;
@property(readonly) float actionOpacity;
@property(readonly) float actionRotationAngle;
@property(readonly) unsigned int actionRotationDirection;
@property(readonly) float actionScale;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } activeChunkRange;
@property(readonly) NSString * animationFilter;
@property(readonly) KNAnimationInfo * animationInfo;
@property(readonly) int animationType;
@property(copy) KNBuildAttributes * attributes;
@property(readonly) BOOL canEditAnimations;
@property(readonly) unsigned int chunkCount;
@property(readonly) NSArray * chunks;
@property(readonly) TSUColor * color;
@property(readonly) float custom3DChartRotation;
@property(readonly) BOOL customBounce;
@property(readonly) BOOL customDecay;
@property(readonly) unsigned int customDeliveryOption;
@property(readonly) float customDetail;
@property(readonly) TSDBezierPathSource * customEffectTimingCurve1;
@property(readonly) TSDBezierPathSource * customEffectTimingCurve2;
@property(readonly) TSDBezierPathSource * customEffectTimingCurve3;
@property(readonly) NSString * customEffectTimingCurveThemeName1;
@property(readonly) NSString * customEffectTimingCurveThemeName2;
@property(readonly) NSString * customEffectTimingCurveThemeName3;
@property(readonly) unsigned int customJiggleIntensity;
@property(readonly) BOOL customMotionBlur;
@property(readonly) unsigned int customRepeatCount;
@property(readonly) unsigned int customScale;
@property(readonly) int customTextDelivery;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * delivery;
@property(readonly) unsigned int deliveryStyle;
@property(readonly) NSString * deliveryWithoutDowngrading;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int direction;
@property(readonly) KNAnimationPluginMenu * directionMenu;
@property(readonly) unsigned int directionType;
@property(readonly) BOOL downgradesDelivery;
@property(retain) TSDDrawableInfo * drawable;
@property(readonly) double durationDefaultForInitialChunk;
@property(readonly) NSString * effect;
@property(readonly) unsigned int endOffset;
@property(readonly) unsigned int expectedChunkCount;
@property(readonly) unsigned int firstActiveChunkIndexInBuild;
@property(readonly) KNBuildChunk * firstChunk;
@property(readonly) unsigned int firstChunkIndexOnSlide;
@property(readonly) BOOL hasComplement;
@property(readonly) BOOL hasInactiveChunks;
@property(readonly) unsigned int hash;
@property(readonly) TSDDrawableInfo * i_drawable;
@property(readonly) NSSet * inspectableAttributes;
@property(readonly) BOOL isActionBuild;
@property(readonly) BOOL isActionMotionBuild;
@property(readonly) BOOL isEmphasisBuild;
@property(readonly) BOOL isOnSlide;
@property(readonly) unsigned int lastActiveChunkIndexInBuild;
@property(readonly) unsigned int lastChunkIndexOnSlide;
@property(readonly) NSString * localizedEffect;
@property(readonly) int randomNumberSeed;
@property KNAbstractSlide * slide;
@property(readonly) unsigned int startOffset;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsBounce;
@property(readonly) BOOL supportsCustomDetail;
@property(readonly) BOOL supportsCustomEffectTimingCurve1;
@property(readonly) BOOL supportsCustomEffectTimingCurve2;
@property(readonly) BOOL supportsCustomEffectTimingCurve3;
@property(readonly) BOOL supportsCustomTextDelivery;
@property(readonly) BOOL supportsDelivery;
@property(readonly) BOOL supportsDirection;
@property(readonly) BOOL supportsDuration;
@property(readonly) BOOL supportsRandomNumberSeed;
@property(readonly) NSString * title;

+ (id)buildWithEffect:(id)arg1 animationType:(int)arg2 drawable:(id)arg3;
+ (id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;
+ (BOOL)needsObjectUUID;
+ (id)p_drawableFromInfo:(id)arg1;
+ (BOOL)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2;
+ (id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;

- (unsigned int)actionAcceleration;
- (id)actionMotionPathSource;
- (float)actionOpacity;
- (float)actionRotationAngle;
- (unsigned int)actionRotationDirection;
- (float)actionScale;
- (struct _NSRange { unsigned int x1; unsigned int x2; })activeChunkRange;
- (id)animationFilter;
- (id)animationInfo;
- (int)animationType;
- (id)attributes;
- (BOOL)canEditAnimations;
- (unsigned int)chunkCount;
- (id)chunkForIdentifier:(id)arg1;
- (id)chunks;
- (id)color;
- (id)copyPreservingUUID:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)custom3DChartRotation;
- (BOOL)customBounce;
- (BOOL)customDecay;
- (unsigned int)customDeliveryOption;
- (float)customDetail;
- (id)customEffectTimingCurve1;
- (id)customEffectTimingCurve2;
- (id)customEffectTimingCurve3;
- (id)customEffectTimingCurveThemeName1;
- (id)customEffectTimingCurveThemeName2;
- (id)customEffectTimingCurveThemeName3;
- (unsigned int)customJiggleIntensity;
- (BOOL)customMotionBlur;
- (unsigned int)customRepeatCount;
- (unsigned int)customScale;
- (int)customTextDelivery;
- (void)dealloc;
- (id)deliveriesLocalized:(BOOL)arg1;
- (id)delivery;
- (unsigned int)deliveryStyle;
- (id)deliveryWithoutDowngrading;
- (id)description;
- (void)didInitFromSOS;
- (unsigned int)direction;
- (id)directionMenu;
- (unsigned int)directionType;
- (BOOL)downgradesDelivery;
- (id)drawable;
- (double)durationDefaultForInitialChunk;
- (id)effect;
- (unsigned int)endChunkIndexFromEndOffset:(unsigned int)arg1;
- (unsigned int)endOffset;
- (unsigned int)expectedChunkCount;
- (unsigned int)firstActiveChunkIndexInBuild;
- (id)firstChunk;
- (unsigned int)firstChunkIndexOnSlide;
- (BOOL)hasComplement;
- (BOOL)hasComplementInBuilds:(id)arg1;
- (BOOL)hasInactiveChunks;
- (id)i_buildChunkForChunkIdentifier:(id)arg1;
- (void)i_deregisterBuildChunkWithChunkIdentifier:(id)arg1;
- (id)i_drawable;
- (void)i_generateAndApplyNewChunkIdentifierToChunk:(id)arg1;
- (void)i_invalidateChunkCache;
- (void)i_registerBuildChunkIdentifierForChunk:(id)arg1;
- (void)i_resetChunkIDSeed;
- (void)i_rollbackChunkIDSeedForChunk:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(int)arg3 context:(id)arg4;
- (id)inspectableAttributes;
- (BOOL)isActionBuild;
- (BOOL)isActionMotionBuild;
- (BOOL)isComplementOfBuild:(id)arg1;
- (BOOL)isEmphasisBuild;
- (BOOL)isOnSlide;
- (unsigned int)lastActiveChunkIndexInBuild;
- (unsigned int)lastChunkIndexOnSlide;
- (void)loadFromArchive:(const struct BuildArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; double x7; struct BuildAttributesArchive {} *x8; int x9; }*)arg1 unarchiver:(id)arg2;
- (id)localizedEffect;
- (id)p_buildChunkIDMap;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_calculateActiveChunkRange;
- (id)p_chunkAtIndex:(unsigned int)arg1;
- (id)p_chunkTitleByTruncatingTitle:(id)arg1 toLength:(unsigned int)arg2;
- (BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1;
- (BOOL)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1;
- (int)randomNumberSeed;
- (void)saveToArchive:(struct BuildArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; double x7; struct BuildAttributesArchive {} *x8; int x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setDelivery:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setSlide:(id)arg1;
- (id)slide;
- (unsigned int)startOffset;
- (BOOL)supportsAcceleration;
- (BOOL)supportsBounce;
- (BOOL)supportsCustomDetail;
- (BOOL)supportsCustomEffectTimingCurve1;
- (BOOL)supportsCustomEffectTimingCurve2;
- (BOOL)supportsCustomEffectTimingCurve3;
- (BOOL)supportsCustomTextDelivery;
- (BOOL)supportsDelivery;
- (BOOL)supportsDirection;
- (BOOL)supportsDuration;
- (BOOL)supportsRandomNumberSeed;
- (id)title;

@end
