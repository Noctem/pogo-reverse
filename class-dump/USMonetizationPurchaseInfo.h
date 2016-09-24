//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USPurchaseInfo.h"

@class NSString;

@interface USMonetizationPurchaseInfo : USPurchaseInfo
{
}

+ (id)infoWithResolution:(unsigned long long)arg1 currency:(id)arg2 quantity:(unsigned long long)arg3 product:(id)arg4 price:(float)arg5;
+ (id)infoWithResolution:(unsigned long long)arg1 totalPrice:(float)arg2 currency:(id)arg3 product:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithResolution:(unsigned long long)arg1 totalPrice:(float)arg2 currency:(id)arg3 quantity:(unsigned long long)arg4 product:(id)arg5 price:(float)arg6;

// Remaining properties
@property(retain, nonatomic) NSString *currency; // @dynamic currency;
@property(retain, nonatomic) NSString *product; // @dynamic product;
@property(nonatomic) float totalPrice; // @dynamic totalPrice;

@end

