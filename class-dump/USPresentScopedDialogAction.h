//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USBaseAction.h"

@class NSArray;
@protocol USViewController;

@interface USPresentScopedDialogAction : USBaseAction
{
    id <USViewController> _alert;
    NSArray *_scopeList;
}

+ (id)type;
@property(retain, nonatomic) NSArray *scopeList; // @synthesize scopeList=_scopeList;
@property(retain, nonatomic) id <USViewController> alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

