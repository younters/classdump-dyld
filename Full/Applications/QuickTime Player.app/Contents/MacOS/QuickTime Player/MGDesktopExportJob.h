/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Player/MGJob.h>

@class MGExportOperation, NSString, NSImage, NSError;

@interface MGDesktopExportJob : MGJob {

	MGExportOperation* _operation;
	NSString* _name;
	NSImage* _icon;
	char _saving;
	float _progress;
	NSString* _runningStatusString;
	NSError* _error;

}

@property (assign,getter=isSaving,nonatomic) char saving;               //@synthesize saving=_saving - In the implementation block
@property (assign,nonatomic) float progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * runningStatusString;              //@synthesize runningStatusString=_runningStatusString - In the implementation block
@property (nonatomic,copy) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)desktopExportJobWithMediaComposition:(id)arg1 exportParameters:(id)arg2 ;
-(char)canReveal;
-(NSString *)runningStatusString;
-(id)initWithMediaComposition:(id)arg1 exportParameters:(id)arg2 ;
-(void)setRunningStatusString:(NSString *)arg1 ;
-(void)setSaving:(char)arg1 ;
-(char)isSaving;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(id)operations;
@end
