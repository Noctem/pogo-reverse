//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GTMLogFilter-Protocol.h"

@class NSIndexSet, NSString;

@interface GSDK_GTMLogAllowedLevelFilter : NSObject <GTMLogFilter>
{
    NSIndexSet *allowedLevels_;
}

- (_Bool)filterAllowsMessage:(id)arg1 level:(int)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAllowedLevels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

