//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString, USUpsightDataFilter;

@interface USEventDataAssociation : NSObject <NSCoding>
{
    NSString *_eventType;
    USUpsightDataFilter *_upsightDataFilter;
    NSDictionary *_upsightData;
}

+ (id)associationWithEventType:(id)arg1 upsightDataFilter:(id)arg2 upsightData:(id)arg3;
@property(readonly, nonatomic) NSDictionary *upsightData; // @synthesize upsightData=_upsightData;
@property(readonly, nonatomic) USUpsightDataFilter *upsightDataFilter; // @synthesize upsightDataFilter=_upsightDataFilter;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAssociation:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1 upsightDataFilter:(id)arg2 upsightData:(id)arg3;

@end

