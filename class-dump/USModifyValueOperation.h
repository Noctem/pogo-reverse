//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface USModifyValueOperation : NSObject
{
    NSString *_propertyName;
    id _propertyValue;
}

+ (id)operatorName;
@property(readonly, nonatomic) id propertyValue; // @synthesize propertyValue=_propertyValue;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (id)valueByPerformingOperationWithObject:(id)arg1 error:(id *)arg2;
- (id)initWithPropertyName:(id)arg1 propertyValue:(id)arg2;
- (id)init;

@end

