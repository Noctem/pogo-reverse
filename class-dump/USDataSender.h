//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "USDataSenderInterface-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;

@interface USDataSender : NSObject <NSURLSessionDelegate, USDataSenderInterface>
{
    NSOperationQueue *_sendQueue;
    unsigned long long _taskIdentifier;
    NSMutableDictionary *_dataTaskToInfoMap;
    NSURLSession *_URLSession;
}

@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSMutableDictionary *dataTaskToInfoMap; // @synthesize dataTaskToInfoMap=_dataTaskToInfoMap;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, nonatomic) NSOperationQueue *sendQueue; // @synthesize sendQueue=_sendQueue;
- (void).cxx_destruct;
- (void)completeTask:(id)arg1;
- (_Bool)verifySignatureWithInfo:(id)arg1;
- (void)endBackgroundTask;
- (void)endBackgroundTaskIfIdle;
- (_Bool)hasIncompleteDataTasks;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)startBackgroundTask;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)installObservers;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendData:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)dealloc;
- (id)initWithSendQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

