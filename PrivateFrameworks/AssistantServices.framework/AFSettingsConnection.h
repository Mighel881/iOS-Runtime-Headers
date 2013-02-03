/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class DKConnection;

@interface AFSettingsConnection : NSObject {
    DKConnection *_connection;
}

- (void)_clearConnection;
- (id)_connection;
- (id)accounts;
- (void)barrier;
- (void)dealloc;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)fetchSupportedLanguageCodes:(id)arg1;
- (void)killDaemon;
- (void)saveAccount:(id)arg1 setActive:(BOOL)arg2;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setAssistantEnabled:(BOOL)arg1;
- (void)setDictationEnabled:(BOOL)arg1;

@end
