//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface GSDK_GTMFadeTruncatingLabel : UILabel
{
    int truncateMode_;
}

+ (id)getLinearGradient:(struct CGRect)arg1 fadeHead:(_Bool)arg2 fadeTail:(_Bool)arg3;
@property(nonatomic) int truncateMode; // @synthesize truncateMode=truncateMode_;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;

@end

