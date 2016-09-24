//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface GIDSignInInternalOptions : NSObject
{
    _Bool _interactive;
    _Bool _allowsWebView;
    _Bool _allowsBrowser;
    _Bool _allowsExtension;
    _Bool _allowsSafariViewController;
    NSDictionary *_extraParams;
    CDUnknownBlockType _fallbackHandler;
}

+ (id)firstPartyOptionsWithFallbackHandler:(CDUnknownBlockType)arg1;
+ (id)optionsWithExtraParams:(id)arg1 fallbackHandler:(CDUnknownBlockType)arg2;
+ (id)optionsWithExtraParams:(id)arg1;
+ (id)silentOptions;
+ (id)defaultOptions;
@property(readonly, nonatomic) CDUnknownBlockType fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(readonly, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(readonly, nonatomic) _Bool allowsSafariViewController; // @synthesize allowsSafariViewController=_allowsSafariViewController;
@property(readonly, nonatomic) _Bool allowsExtension; // @synthesize allowsExtension=_allowsExtension;
@property(readonly, nonatomic) _Bool allowsBrowser; // @synthesize allowsBrowser=_allowsBrowser;
@property(readonly, nonatomic) _Bool allowsWebView; // @synthesize allowsWebView=_allowsWebView;
@property(readonly, nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
- (void).cxx_destruct;

@end

