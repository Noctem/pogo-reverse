//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSDK_GTMKeyValueObservingHelper : NSObject
{
    id observer_;
    SEL selector_;
    id userInfo_;
    id target_;
    NSString *keyPath_;
}

- (void)deregister;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)description;
- (id)initWithObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 options:(unsigned long long)arg6;

@end

