//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PurchasableItemDetails : NSObject
{
    NSString *_itemId;
    NSString *_title;
    NSString *_itemDescription;
    NSString *_price;
}

@property(readonly) NSString *price; // @synthesize price=_price;
@property(readonly) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)init:(id)arg1 title:(id)arg2 description:(id)arg3 price:(id)arg4;

@end

