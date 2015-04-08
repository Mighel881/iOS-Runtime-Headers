/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSMutableArray, VKAnimation;

@interface VKPolygonTile : VKVectorTile {
    float _alpha;
    VKAnimation *_animation;
    VKAnimation *_animationForPitch;
    NSMutableArray *_coastlineGroups;
    float _maxLayeringHeight;
    float _minLayeringHeight;
    NSMutableArray *_polygonGroups;
    float _scale;
}

@property float alpha;
@property(retain) VKAnimation * animation;
@property(retain) VKAnimation * animationForPitch;
@property(readonly) NSArray * coastlineGroups;
@property(readonly) float maxLayeringHeight;
@property(readonly) float minLayeringHeight;
@property(readonly) NSArray * polygonGroups;
@property float scale;

- (float)alpha;
- (id)animation;
- (id)animationForPitch;
- (void)buildCoastlinesWithStyleSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > { struct _retain_ptr<VKStyleManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_1_1_1)(); id x_1_1_2; struct _retain_objc { } x_1_1_3; struct _release_objc { } x_1_1_4; } x1; struct unordered_map<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, std::__1::allocator<std::__1::pair<const std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct __hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; bool x3; int x4; unsigned int x5; }*)arg1;
- (void)buildMeshesWithStyleSession:(struct StyleResolutionSession<std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > > { struct _retain_ptr<VKStyleManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_1_1_1)(); id x_1_1_2; struct _retain_objc { } x_1_1_3; struct _release_objc { } x_1_1_4; } x1; struct unordered_map<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > >, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, std::__1::allocator<std::__1::pair<const std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > > > > { struct __hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; bool x3; int x4; unsigned int x5; }*)arg1 device:(struct Device { int (**x1)(); int x2; }*)arg2 triangulator:(id)arg3 prepareExtrusion:(BOOL)arg4;
- (id)coastlineGroups;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 prepareExtrusion:(BOOL)arg3 styleManager:(id)arg4 sharedResources:(id)arg5 contentScale:(float)arg6 device:(struct Device { int (**x1)(); int x2; }*)arg7;
- (float)maxLayeringHeight;
- (float)minLayeringHeight;
- (id)polygonGroups;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setAnimation:(id)arg1;
- (void)setAnimationForPitch:(id)arg1;
- (void)setScale:(float)arg1;

@end
