//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UnityPLCrashHostInfo : NSObject
{
    struct PLCrashHostInfoVersion _darwinVersion;
}

+ (id)currentHostInfo;
@property(readonly, nonatomic) struct PLCrashHostInfoVersion darwinVersion; // @synthesize darwinVersion=_darwinVersion;
- (id)init;

@end

