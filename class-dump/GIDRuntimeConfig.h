//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GIDAppSwitchConfig, NSString;

@interface GIDRuntimeConfig : NSObject
{
    GIDAppSwitchConfig *_appSwitch;
    NSString *_developerMessage;
    NSString *_redirectURLString;
}

+ (id)defaultConfig;
@property(readonly, nonatomic) NSString *redirectURLString; // @synthesize redirectURLString=_redirectURLString;
@property(readonly, nonatomic) NSString *developerMessage; // @synthesize developerMessage=_developerMessage;
@property(readonly, nonatomic) GIDAppSwitchConfig *appSwitch; // @synthesize appSwitch=_appSwitch;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

