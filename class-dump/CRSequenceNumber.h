//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CRSequenceNumber : NSObject
{
    int _value;
    NSString *_path;
}

@property(nonatomic) int value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (int)incrementValue;
- (void)save;
- (id)initWithDirectoryTree:(id)arg1 andRelativePath:(id)arg2;

@end

