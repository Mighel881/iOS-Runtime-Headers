/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFEmojiCategory : NSObject {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *shortLocalizedName;

+ (id)ActivityEmoji;
+ (id)CelebrationEmoji;
+ (id)DingbatsVariantEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)GenderEmoji;
+ (id)NatureEmoji;
+ (id)NoneVariantEmoji;
+ (id)ObjectsEmoji;
+ (id)PeopleEmoji;
+ (id)PrepopulatedEmoji;
+ (id)ProfessionEmoji;
+ (id)SkinToneEmoji;
+ (id)SymbolsEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)_baseLocalizationKeyForIdentifier:(id)arg1;
+ (id)_emojiSetForIdentifier:(id)arg1;
+ (id)categoryIdentifierList;
+ (id)categoryWithIdentifier:(id)arg1;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)flagEmojiCountryCodesCommon;
+ (id)localizedRecentsDescription;
+ (id)localizedRecentsDescriptionForLocale:(id)arg1;
+ (id)localizedSkinToneEmojiDescription;
+ (id)localizedSkinToneEmojiDescriptionForLocale:(id)arg1;
+ (id)stringToRegionalIndicatorString:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)emojiTokensForLocaleData:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)localizedName;
- (id)localizedNameForLocale:(id)arg1;
- (id)shortLocalizedName;
- (id)shortLocalizedNameForLocale:(id)arg1;

@end
