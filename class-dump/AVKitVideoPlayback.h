//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "VideoPlayerDelegate-Protocol.h"

@class AVPlayerViewController, CancelOnTouchView, NSString, UIColor, VideoPlayer;

@interface AVKitVideoPlayback : NSObject <VideoPlayerDelegate, UIViewControllerTransitioningDelegate>
{
    AVPlayerViewController *videoViewController;
    VideoPlayer *videoPlayer;
    CancelOnTouchView *cancelOnTouchView;
    UIColor *bgColor;
    NSString *videoGravity;
    _Bool showControls;
    _Bool cancelOnTouch;
}

+ (_Bool)IsSupported;
+ (void)InitClass;
- (void).cxx_destruct;
- (void)finish;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)onPlayerDidFinishPlayingVideo;
- (void)onPlayerReady;
- (void)handleTap:(id)arg1;
- (void)actuallyStartTheMovie:(id)arg1;
- (void)dealloc;
- (id)initAndPlay:(id)arg1 bgColor:(id)arg2 showControls:(_Bool)arg3 videoGravity:(id)arg4 cancelOnTouch:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

