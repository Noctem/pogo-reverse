//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol USViewControllerCacheDelegate;

@interface USViewControllerCache : NSObject
{
    NSMutableDictionary *_actionMapIDToControllerMap;
    id <USViewControllerCacheDelegate> _delegate;
}

@property(nonatomic) __weak id <USViewControllerCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *actionMapIDToControllerMap; // @synthesize actionMapIDToControllerMap=_actionMapIDToControllerMap;
- (id)anyControllerForScope:(id)arg1;
- (id)topControllerForActionMapID:(id)arg1;
- (void)removeController:(id)arg1;
- (void)addController:(id)arg1;

@end

