//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CRAppInfo : NSObject
{
    _Bool _hasAlternateVersion;
    NSNumber *_isPirated;
    NSString *_bundleVersion;
    NSString *_marketingVersion;
    NSString *_bundleIdentifier;
    NSString *_alternateVersion;
}

+ (id)appInfo;
@property(retain) NSString *alternateVersion; // @synthesize alternateVersion=_alternateVersion;
@property(readonly) _Bool hasAlternateVersion; // @synthesize hasAlternateVersion=_hasAlternateVersion;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(readonly) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly) NSNumber *isPirated; // @synthesize isPirated=_isPirated;
- (void).cxx_destruct;
- (id)appVersion;
- (id)init;

@end

