//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, NSString;

@interface HoloBluetoothUtil : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *_centralManager;
    long long _currentState;
}

+ (id)instance;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
