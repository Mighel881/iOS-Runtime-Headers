/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, NSMutableSet, NSString;

@interface TSDGLShader : NSObject {
    NSMutableDictionary *_attributeLocations;
    BOOL _isActive;
    NSString *_name;
    unsigned int _programObject;
    NSMutableDictionary *_uniforms;
    NSMutableSet *_uniformsNeedingUpdate;
}

@property(readonly) BOOL isActive;
@property(copy) NSString * name;
@property(readonly) unsigned int programObject;

- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)initWithDefaultHorizontalBlurShader;
- (id)initWithDefaultRandomColorShader;
- (id)initWithDefaultRandomColorTextureShader;
- (id)initWithDefaultTextureAndOpacityShader;
- (id)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(BOOL)arg1 ignoreTextureOpacity:(BOOL)arg2;
- (id)initWithDefaultTextureCoordinatesShader;
- (id)initWithDefaultTextureShader;
- (id)initWithDefaultTextureShaderWithMotionBlur:(BOOL)arg1 ignoreTextureOpacity:(BOOL)arg2;
- (id)initWithDefaultUniformMotionBlurShader;
- (id)initWithDefaultVelocityCollectionShaderWithSampleCount:(unsigned int)arg1 isSingleObject:(BOOL)arg2;
- (id)initWithDefaultVelocityMeshShader;
- (id)initWithDefaultVelocityShader;
- (id)initWithDefaultVelocityVisualizerShader;
- (id)initWithDefaultVerticalBlurShader;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3;
- (id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 defines:(id)arg4;
- (BOOL)isActive;
- (BOOL)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3;
- (int)locationForAttribute:(id)arg1;
- (int)locationForUniform:(id)arg1;
- (id)name;
- (BOOL)p_compileShader:(unsigned int*)arg1 withType:(unsigned int)arg2 shaderString:(id)arg3 defines:(id)arg4;
- (id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3;
- (id)p_qualifierForUniform:(id)arg1 class:(Class)arg2;
- (void)p_setQualifiersIfNecessary;
- (void)p_updateUniformsAndAttributesFromShader;
- (unsigned int)programObject;
- (void)setCGFloat:(float)arg1 forUniform:(id)arg2;
- (void)setColor:(struct { float x1; float x2; float x3; float x4; })arg1 forUniform:(id)arg2;
- (void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2;
- (void)setGLFloat:(float)arg1 forUniform:(id)arg2;
- (void)setGLint:(int)arg1 forShaderQualifier:(id)arg2;
- (void)setGLint:(int)arg1 forUniform:(id)arg2;
- (void)setInteger:(int)arg1 forShaderQualifier:(id)arg2;
- (void)setInteger:(int)arg1 forUniform:(id)arg2;
- (void)setLifeSpan:(struct { float x1; float x2; })arg1 forUniform:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forShaderQualifier:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forUniform:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 forShaderQualifier:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 forUniform:(id)arg2;
- (void)setName:(id)arg1;
- (void)setPoint2D:(struct { float x1; float x2; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint2D:(struct { float x1; float x2; })arg1 forUniform:(id)arg2;
- (void)setPoint3D:(struct { float x1; float x2; float x3; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint3D:(struct { float x1; float x2; float x3; })arg1 forUniform:(id)arg2;
- (void)setPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forUniform:(id)arg2;
- (id)shaderQualifierForUniform:(id)arg1 type:(int)arg2;
- (void)teardown;
- (BOOL)validateUniforms;

@end
