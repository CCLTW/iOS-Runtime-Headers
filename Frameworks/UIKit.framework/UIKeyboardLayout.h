/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardLayout : UIView <_UIScreenEdgePanRecognizerDelegate> {
    UITouch *_activeTouch;
    int _cursorLocation;
    id /* block */ _deferredTouchDownTask;
    id /* block */ _deferredTouchMovedTask;
    BOOL _disableInteraction;
    UITextInputTraits *_inputTraits;
    BOOL _isExecutingDeferredTouchTasks;
    _UIScreenEdgePanRecognizer *_screenEdgePanRecognizer;
    UIKBScreenTraits *_screenTraits;
    UITouch *_shiftKeyTouch;
    UIKeyboardTaskQueue *_taskQueue;
    UIKBTextEditingTraits *_textEditingTraits;
    NSMutableArray *_uncommittedTouches;
    BOOL hideKeysUnderIndicator;
    double lastTouchUpTime;
}

@property (nonatomic, retain) UITouch *activeTouch;
@property (nonatomic) int cursorLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deferredTouchDownTask;
@property (nonatomic, copy) id /* block */ deferredTouchMovedTask;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableInteraction;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideKeysUnderIndicator;
@property (nonatomic, readonly) int idiom;
@property (nonatomic) BOOL isExecutingDeferredTouchTasks;
@property (nonatomic) double lastTouchUpTime;
@property (nonatomic, retain) NSString *layoutTag;
@property (nonatomic, readonly) int orientation;
@property (nonatomic, retain) _UIScreenEdgePanRecognizer *screenEdgePanRecognizer;
@property (nonatomic, retain) UITouch *shiftKeyTouch;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIKeyboardTaskQueue *taskQueue;

+ (Class)_subclassForScreenTraits:(id)arg1;

- (void)_addTouchToScreenEdgePanRecognizer:(id)arg1;
- (BOOL)_canAddTouchesToScreenGestureRecognizer:(id)arg1;
- (void)_executeDeferredTouchTasks;
- (void)_notifyLayoutOfGesturePosition:(struct CGPoint { float x1; float x2; })arg1 relativeToEdge:(unsigned int)arg2;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)activationIndicatorView;
- (id)activeTouch;
- (void)addWipeRecognizer;
- (void)assertSavedLocation:(struct CGPoint { float x1; float x2; })arg1 onTouch:(id)arg2 inWindow:(id)arg3 resetPrevious:(BOOL)arg4;
- (id)baseKeyForString:(id)arg1;
- (BOOL)canForceTouchCommit:(id)arg1;
- (BOOL)canHandleEvent:(id)arg1;
- (BOOL)canMultitap;
- (BOOL)canProduceString:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)clearShiftIfNecessaryForEndedTouch:(id)arg1;
- (void)clearTransientState;
- (void)clearUnusedObjects:(BOOL)arg1;
- (void)commitTouches:(id)arg1;
- (void)commitTouches:(id)arg1 executionContext:(id)arg2;
- (id)currentKeyplane;
- (int)cursorLocation;
- (void)deactivateActiveKeys;
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2;
- (void)dealloc;
- (id /* block */)deferredTouchDownTask;
- (id /* block */)deferredTouchMovedTask;
- (void)didClearInput;
- (void)didCommitTouch:(id)arg1;
- (void)didFinishScreenGestureRecognition;
- (void)didRecognizeGestureOnEdge:(unsigned int)arg1 withDistance:(float)arg2;
- (BOOL)disableInteraction;
- (struct CGSize { float x1; float x2; })dragGestureSize;
- (void)fadeWithInvocation:(id)arg1;
- (float)flickDistance;
- (void)forceUpdatesForCommittedTouch;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (BOOL)hasAccentKey;
- (BOOL)hasCandidateKeys;
- (BOOL)hideKeysUnderIndicator;
- (float)hitBuffer;
- (int)idiom;
- (BOOL)ignoresShiftState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAlphabeticPlane;
- (BOOL)isExecutingDeferredTouchTasks;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)keyplaneContainsEmojiKey;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (double)lastTouchUpTime;
- (id)layoutTag;
- (void)longPressAction;
- (int)orientation;
- (BOOL)performReturnAction;
- (BOOL)performSpaceAction;
- (void)reloadTargetEdgesForScreenGestureRecognition;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (id)screenEdgePanRecognizer;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveTouch:(id)arg1;
- (void)setAutoshift:(BOOL)arg1;
- (void)setCursorLocation:(int)arg1;
- (void)setDeferredTouchDownTask:(id /* block */)arg1;
- (void)setDeferredTouchMovedTask:(id /* block */)arg1;
- (void)setDisableInteraction:(BOOL)arg1;
- (void)setHideKeysUnderIndicator:(BOOL)arg1;
- (void)setIsExecutingDeferredTouchTasks:(BOOL)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLastTouchUpTime:(double)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setPasscodeOutlineAlpha:(float)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setScreenEdgePanRecognizer:(id)arg1;
- (void)setShift:(BOOL)arg1;
- (void)setShiftKeyTouch:(id)arg1;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setTaskQueue:(id)arg1;
- (void)setTextEditingTraits:(id)arg1;
- (id)shiftKeyTouch;
- (BOOL)shouldFadeFromLayout;
- (BOOL)shouldFadeToLayout;
- (BOOL)shouldShowIndicator;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (id)simulateTouch:(struct CGPoint { float x1; float x2; })arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (unsigned int)targetEdgesForScreenGestureRecognition;
- (id)taskQueue;
- (unsigned int)textEditingKeyMask;
- (void)touchCancelled:(id)arg1;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (void)touchDragged:(id)arg1;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (void)touchUp:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)touchesToCommitBeforeTouch:(id)arg1;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (void)updateBackgroundCorners;
- (void)updateLocalizedKeys:(BOOL)arg1;
- (BOOL)usesAutoShift;
- (void)willMoveToWindow:(id)arg1;
- (void)wipeGestureRecognized:(id)arg1;

@end
