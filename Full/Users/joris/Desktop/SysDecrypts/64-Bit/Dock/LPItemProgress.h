/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LPItemProgress <NSObject>
@property (assign,nonatomic) float progress; 
@property (nonatomic,readonly) int progressState; 
@property (nonatomic,readonly) double progressTotalBytes; 
@property (nonatomic,readonly) double progressDownloadedBytes; 
@required
-(double)progressTotalBytes;
-(double)progressDownloadedBytes;
-(int)progressState;
-(float)progress;
-(void)setProgress:(float)arg1;

@end
