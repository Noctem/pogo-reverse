//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (GTMZLibAdditions)
+ (id)gtm_dataByRawInflatingData:(id)arg1;
+ (id)gtm_dataByRawInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByRawDeflatingData:(id)arg1 compressionLevel:(int)arg2;
+ (id)gtm_dataByRawDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3;
+ (id)gtm_dataByRawDeflatingData:(id)arg1;
+ (id)gtm_dataByRawDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByInflatingData:(id)arg1;
+ (id)gtm_dataByInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByDeflatingData:(id)arg1 compressionLevel:(int)arg2;
+ (id)gtm_dataByDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3;
+ (id)gtm_dataByDeflatingData:(id)arg1;
+ (id)gtm_dataByDeflatingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)gtm_dataByGzippingData:(id)arg1 compressionLevel:(int)arg2;
+ (id)gtm_dataByGzippingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3;
+ (id)gtm_dataByGzippingData:(id)arg1;
+ (id)gtm_dataByGzippingBytes:(const void *)arg1 length:(unsigned long long)arg2;
@end

