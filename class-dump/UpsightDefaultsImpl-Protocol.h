//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol NSCoding;

@protocol UpsightDefaultsImpl <NSObject>
- (void)removeAllDefaults;
- (void)removeDefaultForKey:(NSString *)arg1;
- (void)setDefault:(id <NSCoding>)arg1 forKey:(NSString *)arg2;
- (id)defaultForKey:(NSString *)arg1;
@end

