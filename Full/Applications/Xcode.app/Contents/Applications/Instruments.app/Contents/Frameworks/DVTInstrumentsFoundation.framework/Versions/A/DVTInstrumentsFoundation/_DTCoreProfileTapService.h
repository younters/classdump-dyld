/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks/DVTInstrumentsFoundation.framework/Versions/A/DVTInstrumentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DTXChannel, DTCoreProfileLocalTap, NSMutableIndexSet;

@interface _DTCoreProfileTapService : NSObject {

	DTXChannel* channel;
	DTCoreProfileLocalTap* tap;
	NSMutableIndexSet* metadataSentIndexSet;
	char sessionMetaDataSent;
	char useExpiredPidCache;

}
-(id)initWithChannel:(id)arg1 ;
@end
