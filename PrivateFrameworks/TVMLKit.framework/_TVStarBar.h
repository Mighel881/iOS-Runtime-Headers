/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStarBar : NSObject {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _barMargin;
    float  _barWidth;
    NSAttributedString * _countStr;
    float  _height;
    unsigned int  _numStars;
    float  _value;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } barMargin;
@property (nonatomic) float barWidth;
@property (nonatomic, retain) NSAttributedString *countStr;
@property (nonatomic) float height;
@property (nonatomic) unsigned int numStars;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })barMargin;
- (float)barWidth;
- (id)countStr;
- (float)height;
- (unsigned int)numStars;
- (void)setBarMargin:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBarWidth:(float)arg1;
- (void)setCountStr:(id)arg1;
- (void)setHeight:(float)arg1;
- (void)setNumStars:(unsigned int)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
