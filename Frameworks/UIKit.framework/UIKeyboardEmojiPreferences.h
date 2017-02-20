/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiPreferences : NSObject {
    NSObject<OS_dispatch_queue> * _clientDispatchQueue;
    EMFEmojiPreferencesClient * _preferencesClient;
}

@property (nonatomic, readonly) BOOL hasDisplayedSkinToneHelp;
@property (nonatomic) unsigned int maximumRecentsCount;
@property (nonatomic, retain) NSArray *recents;
@property (nonatomic) int selectedCategoryType;
@property (nonatomic, retain) NSDictionary *skinToneBaseKeyPreferences;

+ (id)sharedInstance;

- (void)_createPreferencesClientIfNecessary;
- (void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 typingName:(id)arg4;
- (void)dealloc;
- (void)didDisplaySkinToneHelp;
- (int)emojiCategoryDefaultsIndex:(id)arg1;
- (void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3;
- (void)emojiUsed:(id)arg1;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (void)handleRead:(id)arg1;
- (void)handleWrite:(id)arg1;
- (BOOL)hasDisplayedSkinToneHelp;
- (BOOL)hasLastUsedVariantForEmojiString:(id)arg1;
- (id)init;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (unsigned int)maximumRecentsCount;
- (void)readEmojiDefaults;
- (id)recentEmojiAtIndex:(int)arg1 size:(unsigned int*)arg2;
- (id)recents;
- (int)selectedCategoryType;
- (void)setEmojiCategoryDefaultsIndex:(int)arg1 forCategory:(id)arg2;
- (void)setMaximumRecentsCount:(unsigned int)arg1;
- (void)setRecents:(id)arg1;
- (void)setSelectedCategoryType:(int)arg1;
- (void)setSkinToneBaseKeyPreferences:(id)arg1;
- (id)skinToneBaseKeyPreferences;
- (id)typingNameForEmoji:(id)arg1 language:(id)arg2;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (void)writeEmojiDefaults;

@end
