//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface GSDK_GTMRegexStringSegment : NSObject
{
    NSData *utf8StrBuf_;
    CDStruct_912cb5d2 *regMatches_;
    unsigned long long numRegMatches_;
    _Bool isMatch_;
}

- (id)description;
- (id)subPatternString:(unsigned long long)arg1;
- (id)string;
- (_Bool)isMatch;
- (void)dealloc;
- (id)init;

@end

