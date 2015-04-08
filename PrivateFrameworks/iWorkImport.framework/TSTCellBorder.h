/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSDStroke;

@interface TSTCellBorder : NSObject <NSCopying, TSSPropertyCommandSerializing, TSTCellDiffing> {
    TSDStroke *_bottomStroke;
    int _bottomStrokeOrder;
    BOOL _definedBottomStroke;
    BOOL _definedBottomStrokeOrder;
    BOOL _definedLeftStroke;
    BOOL _definedLeftStrokeOrder;
    BOOL _definedRightStroke;
    BOOL _definedRightStrokeOrder;
    BOOL _definedTopStroke;
    BOOL _definedTopStrokeOrder;
    TSDStroke *_leftStroke;
    int _leftStrokeOrder;
    TSDStroke *_rightStroke;
    int _rightStrokeOrder;
    TSDStroke *_topStroke;
    int _topStrokeOrder;
}

@property(retain,readonly) TSDStroke * bottomStroke;
@property(readonly) int bottomStrokeOrder;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) BOOL definedBottomStroke;
@property(readonly) BOOL definedLeftStroke;
@property(readonly) BOOL definedRightStroke;
@property(readonly) BOOL definedTopStroke;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isEmpty;
@property(retain,readonly) TSDStroke * leftStroke;
@property(readonly) int leftStrokeOrder;
@property(retain,readonly) TSDStroke * rightStroke;
@property(readonly) int rightStrokeOrder;
@property(readonly) Class superclass;
@property(retain,readonly) TSDStroke * topStroke;
@property(readonly) int topStrokeOrder;

+ (id)cellBorder;
+ (id)cellBorderForResettingAllStrokes;
+ (id)cellDiffProperties;

- (void)_clearBottomStroke;
- (void)_clearLeftStroke;
- (void)_clearRightStroke;
- (void)_clearTopStroke;
- (void)applyToCell:(id)arg1;
- (id)bottomStroke;
- (int)bottomStrokeOrder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)definedBottomStroke;
- (BOOL)definedLeftStroke;
- (BOOL)definedRightStroke;
- (BOOL)definedTopStroke;
- (void)didInitFromSOS;
- (id)initFromMessage:(const struct CellBorderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StrokeArchive {} *x5; struct StrokeArchive {} *x6; int x7; int x8; struct StrokeArchive {} *x9; struct StrokeArchive {} *x10; int x11; int x12; }*)arg1 unarchiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (BOOL)isEmpty;
- (id)leftStroke;
- (int)leftStrokeOrder;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id)rightStroke;
- (int)rightStrokeOrder;
- (void)saveToMessage:(struct CellBorderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StrokeArchive {} *x5; struct StrokeArchive {} *x6; int x7; int x8; struct StrokeArchive {} *x9; struct StrokeArchive {} *x10; int x11; int x12; }*)arg1 archiver:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (void)setBottomStroke:(id)arg1 order:(int)arg2;
- (void)setLeftStroke:(id)arg1 order:(int)arg2;
- (void)setRightStroke:(id)arg1 order:(int)arg2;
- (void)setTopStroke:(id)arg1 order:(int)arg2;
- (id)topStroke;
- (int)topStrokeOrder;

@end
