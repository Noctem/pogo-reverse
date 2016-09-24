//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface USEventFactory : NSObject
{
}

+ (id)attributionEventForCampaign:(id)arg1 creative:(id)arg2 source:(id)arg3 pubData:(id)arg4;
+ (id)UXMEnumerateEventWithUXMSchema:(id)arg1 pubData:(id)arg2;
+ (id)pushUnregistrationEventWithPubData:(id)arg1;
+ (id)pushRegistrationEventWithToken:(id)arg1 pubData:(id)arg2;
+ (id)pushReceivedEventWithMessageID:(id)arg1 campaignID:(id)arg2 pubData:(id)arg3;
+ (id)sessionResumeEventWithPubData:(id)arg1;
+ (id)sessionPauseEventWithPubData:(id)arg1;
+ (id)sessionStartEventWithPubData:(id)arg1;
+ (id)configurationRequestWithPubData:(id)arg1;
+ (id)monetizationEventWithInfo:(id)arg1 pubData:(id)arg2;
+ (id)dynamicEventWithEventDictionary:(id)arg1;
+ (id)inAppPurchaseEventWithIAPInfo:(id)arg1 pubData:(id)arg2;
+ (id)installEventWithPubData:(id)arg1;
+ (id)milestoneEventForScope:(id)arg1 pubData:(id)arg2;
+ (id)unrenderedContentEventWithContentID:(id)arg1 campaignID:(id)arg2 scope:(id)arg3 pubData:(id)arg4;
+ (id)dataCollectionEventWitDataBundle:(id)arg1 streamID:(id)arg2 pubData:(id)arg3;
+ (id)analyticsEventWithName:(id)arg1 pubData:(id)arg2;
+ (id)sharedFactory;
- (void)extendEventWithAssociatedData:(id)arg1;
- (id)buildEventWithInitializer:(CDUnknownBlockType)arg1 attributeSetName:(id)arg2 pubData:(id)arg3;
- (id)eventParametersWithAttributeSetName:(id)arg1 pubData:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

