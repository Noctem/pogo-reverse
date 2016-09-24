//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CRThrottle : NSObject
{
    unsigned long long _maxTokens;
    double _timeWindow;
    double _tokensAccumulated;
    NSDate *_lastEventTime;
}

@property(retain, nonatomic) NSDate *lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(nonatomic) double tokensAccumulated; // @synthesize tokensAccumulated=_tokensAccumulated;
@property(nonatomic) double timeWindow; // @synthesize timeWindow=_timeWindow;
@property(nonatomic) unsigned long long maxTokens; // @synthesize maxTokens=_maxTokens;
- (void).cxx_destruct;
- (_Bool)tryEvent;
- (id)initWithMaxEvents:(unsigned long long)arg1 perUnitTime:(double)arg2;

@end

