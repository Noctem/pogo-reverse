//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRDirectoryTree : NSObject
{
    NSString *_rootDirectory;
    NSString *_beginDirectory;
    NSString *_normalDirectory;
    NSString *_sendDirectory;
    NSString *_sentDirectory;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *sentDirectory; // @synthesize sentDirectory=_sentDirectory;
@property(readonly, nonatomic) NSString *sendDirectory; // @synthesize sendDirectory=_sendDirectory;
@property(readonly, nonatomic) NSString *normalDirectory; // @synthesize normalDirectory=_normalDirectory;
@property(readonly, nonatomic) NSString *beginDirectory; // @synthesize beginDirectory=_beginDirectory;
@property(readonly, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (void).cxx_destruct;
- (void)moveItemsFrom:(id)arg1 toDirectory:(id)arg2;
- (_Bool)removeItemAtPath:(id)arg1;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2;
- (id)createDirectory:(id)arg1;
- (id)absolutePath:(id)arg1;
- (id)createRootDirectory;
- (void)reset;
- (void)resetDirectory:(id)arg1;
- (void)initFileSystem;
- (id)init;

@end

