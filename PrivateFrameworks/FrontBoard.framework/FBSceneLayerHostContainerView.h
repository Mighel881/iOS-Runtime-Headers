/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {
    BOOL  _clippingDisabled;
    <FBSceneLayerHostContainerViewDataSource> * _dataSource;
    <FBSceneLayerHostContainerViewDelegate> * _delegate;
    NSMutableArray * _hostViews;
    NSMutableArray * _hostedLayers;
    FBScene * _scene;
}

@property (getter=isClippingDisabled, nonatomic) BOOL clippingDisabled;
@property (nonatomic) <FBSceneLayerHostContainerViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneLayerHostContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSArray *hostedLayers;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (readonly) Class superclass;

- (void)_adjustHostViewFrame:(id)arg1;
- (id)_createHostViewForLayer:(id)arg1;
- (id)_hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_noteHostingStatusChanged;
- (void)_rebuildLayers;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)hasContent;
- (id)hostedLayers;
- (id)init;
- (id)initWithScene:(id)arg1;
- (BOOL)isClippingDisabled;
- (BOOL)isHosting;
- (void)rebuildLayers;
- (id)scene;
- (void)setClippingDisabled:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)window;

@end
