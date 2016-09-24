//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotification;

@protocol LifeCycleListener <NSObject>

@optional
- (void)willTerminate:(NSNotification *)arg1;
- (void)willEnterForeground:(NSNotification *)arg1;
- (void)didEnterBackground:(NSNotification *)arg1;
- (void)willResignActive:(NSNotification *)arg1;
- (void)didBecomeActive:(NSNotification *)arg1;
- (void)didFinishLaunching:(NSNotification *)arg1;
@end

