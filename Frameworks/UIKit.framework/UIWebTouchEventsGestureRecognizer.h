/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebTouchEventsGestureRecognizerDelegate>, NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
    BOOL _defaultPrevented;
    BOOL _dispatchingTouchEvents;
    struct _UIWebTouchEvent { 
        int type; 
        double timestamp; 
        struct CGPoint { 
            float x; 
            float y; 
        } locationInScreenCoordinates; 
        struct CGPoint { 
            float x; 
            float y; 
        } locationInDocumentCoordinates; 
        float scale; 
        float rotation; 
        bool inJavaScriptGesture; 
        struct _UIWebTouchPoint {} *touchPoints; 
        unsigned int touchPointCount; 
    } _lastTouchEvent;
    float _originalGestureAngle;
    float _originalGestureDistance;
    BOOL _passedHitTest;
    SEL _touchAction;
    id _touchTarget;
    <UIWebTouchEventsGestureRecognizerDelegate> *_webTouchDelegate;
}

@property(getter=isDefaultPrevented) BOOL defaultPrevented;
@property(getter=isDispatchingTouchEvents,readonly) BOOL dispatchingTouchEvents;
@property(readonly) BOOL inJavaScriptGesture;
@property(readonly) const struct _UIWebTouchEvent { int x1; double x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; float x5; float x6; bool x7; struct _UIWebTouchPoint {} *x8; unsigned int x9; }* lastTouchEvent;
@property(readonly) struct CGPoint { float x1; float x2; } locationInWindow;
@property(readonly) float rotation;
@property(readonly) float scale;
@property(readonly) NSMutableArray * touchIdentifiers;
@property(readonly) NSMutableArray * touchLocations;
@property(readonly) NSMutableArray * touchPhases;
@property(readonly) int type;

+ (void)initialize;

- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (void)dealloc;
- (BOOL)inJavaScriptGesture;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3;
- (BOOL)isDefaultPrevented;
- (BOOL)isDispatchingTouchEvents;
- (const struct _UIWebTouchEvent { int x1; double x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; float x5; float x6; bool x7; struct _UIWebTouchPoint {} *x8; unsigned int x9; }*)lastTouchEvent;
- (struct CGPoint { float x1; float x2; })locationInWindow;
- (void)reset;
- (float)rotation;
- (float)scale;
- (void)setDefaultPrevented:(BOOL)arg1;
- (id)touchIdentifiers;
- (id)touchLocations;
- (id)touchPhases;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (int)type;

@end
