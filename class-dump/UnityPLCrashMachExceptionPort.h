//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UnityPLCrashMachExceptionPort : NSObject
{
    unsigned int _mask;
    unsigned int _port;
    int _behavior;
    int _flavor;
}

+ (id)exceptionPortsForThread:(unsigned int)arg1 mask:(unsigned int)arg2 error:(id *)arg3;
+ (id)exceptionPortsForTask:(unsigned int)arg1 mask:(unsigned int)arg2 error:(id *)arg3;
@property(readonly, nonatomic) int flavor; // @synthesize flavor=_flavor;
@property(readonly, nonatomic) int behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) unsigned int mask; // @synthesize mask=_mask;
@property(readonly, nonatomic) unsigned int server_port; // @synthesize server_port=_port;
- (_Bool)registerForThread:(unsigned int)arg1 previousPortSet:(id *)arg2 error:(id *)arg3;
- (_Bool)registerForTask:(unsigned int)arg1 previousPortSet:(id *)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithServerPort:(unsigned int)arg1 mask:(unsigned int)arg2 behavior:(int)arg3 flavor:(int)arg4;

@end

