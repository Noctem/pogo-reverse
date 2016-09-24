//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CRNetStatDispatch : NSObject
{
    struct dispatch_queue_s *_queue;
    NSString *_ignoreEndpoint;
    NSMutableArray *_blacklistFilters;
    NSMutableArray *_otherFilters;
    NSMutableArray *_observers;
}

@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain) NSMutableArray *otherFilters; // @synthesize otherFilters=_otherFilters;
@property(retain) NSMutableArray *blacklistFilters; // @synthesize blacklistFilters=_blacklistFilters;
@property(retain) NSString *ignoreEndpoint; // @synthesize ignoreEndpoint=_ignoreEndpoint;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)registerObserver:(id)arg1;
- (void)synchronousLogNetworkRequest:(id)arg1;
- (void)logNetworkRequest:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)dealloc;
- (id)initWithFilters:(id)arg1 andBaseURL:(id)arg2 andEndpoint:(id)arg3;

@end

