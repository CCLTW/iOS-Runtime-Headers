/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKDisplayLink : NSObject {
    BOOL _asynchronous;
    float _averageFrameTime;
    id /* block */ _block;
    CADisplayLink *_caDisplayLink;
    int _frameCount;
    double _frameCountBeginTime;
    int _frameInterval;
    unsigned int _maxQueuedFrameCount;
    unsigned int _mode;
    BOOL _paused;
    double _previousFrameTime;
    NSObject<OS_dispatch_queue> *_queue;
    int _queuedFrameCount;
    NSTimer *_timer;
}

@property (nonatomic) BOOL asynchronous;
@property (nonatomic) int frameInterval;
@property unsigned int maxQueuedFrameCount;
@property (nonatomic) unsigned int mode;
@property (getter=isPaused, nonatomic) BOOL paused;

+ (id)displayLinkWithBlock:(id /* block */)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)_caDisplayLinkCallback;
- (void)_callbackForNextFrame:(double)arg1;
- (void)_nsTimerCallback;
- (void)_restart;
- (void)_setup;
- (void)_start;
- (void)_teardown;
- (BOOL)asynchronous;
- (void)dealloc;
- (int)frameInterval;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1 queue:(id)arg2;
- (BOOL)isPaused;
- (unsigned int)maxQueuedFrameCount;
- (unsigned int)mode;
- (void)setAsynchronous:(BOOL)arg1;
- (void)setFrameInterval:(int)arg1;
- (void)setMaxQueuedFrameCount:(unsigned int)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setPaused:(BOOL)arg1;

@end
