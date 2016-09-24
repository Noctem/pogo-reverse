//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "USEventRouterDelegate-Protocol.h"

@class NSMutableSet, NSOperationQueue, NSString, USDataSender, USDispatcherConfiguration, USEventRouter;
@protocol UpsightDataStoreInterface;

@interface USDispatcher : NSObject <USEventRouterDelegate>
{
    _Bool _accumulatingEvents;
    USDispatcherConfiguration *_currentConfiguration;
    id <UpsightDataStoreInterface> _dataStore;
    USDataSender *_dataSender;
    USEventRouter *_eventRouter;
    NSMutableSet *_disposedRouters;
    NSOperationQueue *_operationQueue;
    NSMutableSet *_enqueuedItems;
    unsigned long long _taskIdentifier;
}

@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(retain, nonatomic) NSMutableSet *enqueuedItems; // @synthesize enqueuedItems=_enqueuedItems;
@property(nonatomic, getter=isAccumulatingEvents) _Bool accumulatingEvents; // @synthesize accumulatingEvents=_accumulatingEvents;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableSet *disposedRouters; // @synthesize disposedRouters=_disposedRouters;
@property(retain, nonatomic) USEventRouter *eventRouter; // @synthesize eventRouter=_eventRouter;
@property(retain, nonatomic) USDataSender *dataSender; // @synthesize dataSender=_dataSender;
@property(readonly, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (void)eventRouterDidDrain:(id)arg1;
- (void)eventRouter:(id)arg1 didFailWithError:(id)arg2 items:(id)arg3;
- (void)eventRouter:(id)arg1 didDeliverItems:(id)arg2 response:(id)arg3;
- (void)onDidUpdateConfiguration:(id)arg1 action:(unsigned long long)arg2;
- (void)onDidUpdateEvent:(id)arg1 action:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long minSessionNumberWithNonExpiredConfiguration;
- (void)storeResponsesForItems:(id)arg1 error:(id)arg2;
- (id)processResponse:(id)arg1;
- (void)processResponseSections:(id)arg1;
- (void)cleanupBatchItems:(id)arg1;
- (void)unregisterBatchItems:(id)arg1;
- (void)restoreBatches;
@property(retain, nonatomic) USDispatcherConfiguration *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
- (void)setupEventRouter;
- (void)endBackgroundTask;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (_Bool)enqueueItem:(id)arg1;
- (id)initWithDataStore:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

