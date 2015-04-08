/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString;

@interface PUCropAspect : NSObject {
    float _height;
    NSString *_localizedName;
    float _width;
}

@property(readonly) float height;
@property(readonly) NSString * localizedName;
@property(readonly) float ratio;
@property(readonly) float width;

+ (id)allAspectsWithOriginalSize:(struct CGSize { float x1; float x2; })arg1 currentSize:(struct CGSize { float x1; float x2; })arg2;

- (void).cxx_destruct;
- (id)_initWithWidth:(float)arg1 height:(float)arg2 localizedName:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 boundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 boundingAngle:(float)arg3 minSize:(struct CGSize { float x1; float x2; })arg4;
- (id)description;
- (float)height;
- (float)heightForWidth:(float)arg1;
- (id)init;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (id)inverseAspect;
- (BOOL)isEqualToCropAspect:(id)arg1;
- (id)localizedName;
- (float)ratio;
- (float)width;
- (float)widthForHeight:(float)arg1;

@end
