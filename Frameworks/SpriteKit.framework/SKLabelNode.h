/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSMutableArray, NSString, SKBitmapFont, SKSpriteNode, UIColor;

@interface SKLabelNode : SKNode {
    SKBitmapFont *_bmf;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _fontColor;
    NSString *_fontName;
    float _fontSize;
    int _horizontalAlignmentMode;
    int _labelBlendMode;
    UIColor *_labelColor;
    float _labelColorBlend;
    NSString *_text;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textRect;
    SKSpriteNode *_textSprite;
    NSMutableArray *_textSprites;
    int _verticalAlignmentMode;
}

@property int blendMode;
@property(retain) UIColor * color;
@property float colorBlendFactor;
@property(retain) UIColor * fontColor;
@property(copy) NSString * fontName;
@property float fontSize;
@property int horizontalAlignmentMode;
@property(copy) NSString * text;
@property int verticalAlignmentMode;

+ (id)_labelNodeWithFontNamed:(id)arg1;
+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)labelNodeWithFontNamed:(id)arg1;
+ (id)labelNodeWithText:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (id)_getTextSprites;
- (void)_initialize;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (int)blendMode;
- (id)childrenInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)color;
- (float)colorBlendFactor;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createBitmapSpritesForText;
- (void)createSpritesForText;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fontColor;
- (id)fontName;
- (float)fontSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (int)horizontalAlignmentMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontNamed:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (id)nodeAtPoint:(struct CGPoint { float x1; float x2; })arg1 recursive:(BOOL)arg2;
- (id)nodesAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(float)arg1;
- (void)setFontColor:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHorizontalAlignmentMode:(int)arg1;
- (void)setText:(id)arg1;
- (void)setVerticalAlignmentMode:(int)arg1;
- (id)text;
- (int)verticalAlignmentMode;

@end
