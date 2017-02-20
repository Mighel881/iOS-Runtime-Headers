/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplay : NSObject <SCROBrailleDisplayCommandDispatcherDelegate> {
    BOOL  _automaticBrailleTranslationEnabled;
    struct __CFRunLoopTimer { } * _blinkerEventTimer;
    BOOL  _blinkingEnabled;
    <SCROBrailleDriverProtocol> * _brailleDriver;
    int  _brailleInputMode;
    SCROBrailleLine * _brailleLine;
    <SCROBrailleDisplayCommandDispatcherProtocol> * _commandDispatcher;
    NSLock * _contentLock;
    int  _contractionMode;
    <SCROBrailleDisplayDelegate> * _delegate;
    BOOL  _delegateWantsDisplayCallback;
    NSString * _driverIdentifier;
    NSString * _driverModelIdentifier;
    SCROBrailleEventDispatcher * _eventDispatcher;
    struct { 
        double quietSince; 
        double busySince; 
        double nextWillMemorizeNotificationTime; 
        double memorizeNextKeyImmediatelyTimeout; 
        BOOL prepareToMemorizeNextKey; 
        BOOL requestPrepareToMemorizeNextKey; 
        BOOL memorizeNextKeyImmediately; 
        BOOL willMemorizeNow; 
        BOOL isQuiet; 
        BOOL newDown; 
        struct __CFArray {} *currentChord; 
        struct __CFSet {} *downKeys; 
        unsigned int routerEvent; 
        BOOL currentBrailleChordContainsSpacebar; 
        BOOL spacebarIsDown; 
        BOOL skipBrailleKeyboardKeyTranslation; 
        struct __CFArray {} *currentBrailleChord; 
        struct __CFSet {} *downBrailleDots; 
        unsigned int currentBrailleModifiers; 
        unsigned int downBrailleModifiers; 
        NSMutableString *brailleString; 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } brailleStringSelectionRange; 
        BOOL brailleStringNeedsUpdate; 
        NSMutableArray *brailleStringModifiers; 
        double lastBrailleChordPosted; 
        double brailleCharExponentialMovingAverage; 
        double brailleTranslationTimeout; 
    }  _input;
    BOOL  _inputAllowed;
    SCROBrailleLine * _inputBrailleLine;
    int  _inputContractionMode;
    BOOL  _inputEightDot;
    BOOL  _inputEnabled;
    struct __CFRunLoopTimer { } * _inputEventTimer;
    <SCROIOElementProtocol> * _ioElement;
    BOOL  _isInBrailleEntryMode;
    BOOL  _isValid;
    int  _mainSize;
    BOOL  _needsUpdating;
    BOOL  _postsKeyboardEvents;
    struct __CFRunLoop { } * _runLoop;
    BOOL  _shouldBatchUpdates;
    BOOL  _showEightDot;
    struct { 
        NSData *realData; 
        NSData *virtualData; 
        NSData *aggregatedData; 
        int virtualAlignment; 
        int masterStatusCellIndex; 
    }  _status;
    int  _statusSize;
}

@property (nonatomic) BOOL automaticBrailleTranslationEnabled;
@property (nonatomic, readonly) unsigned long long brailleLineGenerationID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delegateWantsDisplayCallback;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inputAllowed;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) BOOL inputEightDot;
@property (nonatomic, readonly) int lineOffset;
@property (readonly) Class superclass;

+ (BOOL)brailleDriverClassIsValid:(Class)arg1;
+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;

- (void)_aggregatedStatusHandler:(id)arg1;
- (void)_appendTranslatedBrailleStringEventsToArray:(struct __CFArray {}**)arg1;
- (void)_blinkerEventHandler;
- (void)_bulkStatusAttributesHandler:(id)arg1;
- (void)_configurationChangeHandler;
- (void)_configurationChangeNotification:(id)arg1;
- (void)_delayedConfigurationChangeNotification;
- (void)_delayedDisplayLoad;
- (void)_delayedSleepNotification:(id)arg1;
- (void)_delayedUnloadNotification;
- (BOOL)_hasBrailleChord;
- (BOOL)_hasKeyChord;
- (BOOL)_hasPressedBrailleKeys;
- (id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4;
- (void)_inputEventHandler;
- (BOOL)_isMemorizingKeys;
- (id)_newBrailleKeyForCurrentBrailleChord;
- (id)_newBrailleKeyForCurrentKeyChord;
- (id)_newBrailleKeyboardKeyForText:(id)arg1 modifiers:(unsigned int)arg2;
- (void)_panHandler:(id)arg1;
- (void)_processKeyEvents:(id)arg1;
- (void)_runThread;
- (void)_setBatchUpdates:(id)arg1;
- (void)_setBrailleFormatter:(id)arg1;
- (void)_setBrailleFormatterHandler:(id)arg1;
- (void)_setBrailleInputFormatter:(id)arg1;
- (void)_setDelegateWantsDisplayCallbackHandler:(id)arg1;
- (void)_setIsInBrailleEntryMode:(BOOL)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_sleepNotification:(id)arg1;
- (void)_statusDisplayHandler:(id)arg1;
- (id)_statusStringWithDictionary:(id)arg1;
- (void)_stopMemorization;
- (void)_translateBrailleStringAndPostEvent;
- (void)_unloadHandler;
- (void)_unloadNotification:(id)arg1;
- (void)_updateBrailleInputFormatter;
- (void)_updateDisplay;
- (id)aggregatedStatus;
- (BOOL)automaticBrailleTranslationEnabled;
- (void)beginUpdates;
- (id)brailleInputManager;
- (unsigned long long)brailleLineGenerationID;
- (id)configuration;
- (void)dealloc;
- (BOOL)delegateWantsDisplayCallback;
- (id)driverIdentifier;
- (id)driverModelIdentifier;
- (void)endUpdates;
- (void)handleCommandDeleteForDispatcher:(id)arg1;
- (void)handleCommandEscapeForDispatcher:(id)arg1;
- (void)handleCommandForwardDeleteForDispatcher:(id)arg1;
- (void)handleCommandMoveLeftForDispatcher:(id)arg1;
- (void)handleCommandMoveRightForDispatcher:(id)arg1;
- (void)handleCommandPanLeftForDispatcher:(id)arg1;
- (void)handleCommandPanRightForDispatcher:(id)arg1;
- (void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandTranslateForDispatcher:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (BOOL)inputAllowed;
- (int)inputContractionMode;
- (BOOL)inputEightDot;
- (void)invalidate;
- (id)ioElement;
- (BOOL)isLoaded;
- (BOOL)isValid;
- (id)lineDescriptor;
- (int)lineOffset;
- (int)mainSize;
- (long)masterStatusCellIndex;
- (void)panLeft;
- (void)panRight;
- (id)realStatus;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (void)setBrailleFormatter:(id)arg1;
- (void)setDelegateWantsDisplayCallback:(BOOL)arg1;
- (void)setInputAllowed:(BOOL)arg1;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDot:(BOOL)arg1;
- (void)setMasterStatusCellIndex:(long)arg1;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2;
- (void)setStatusAttributesWithMasterCellIndex:(long)arg1 virtualAlignment:(int)arg2;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)simulateKeypress:(id)arg1;
- (int)statusSize;
- (long)token;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3;
- (id)virtualStatus;
- (int)virtualStatusAlignment;

@end
