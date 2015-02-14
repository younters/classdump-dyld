/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTHUDMediaTimelineRangeMarker : NSObject {

	id _representedObject;
	SCD_Struct_QT16 _mediaTimeRange;

}

@property (nonatomic,readonly) id representedObject;                        //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) SCD_Struct_QT16 mediaTimeRange;              //@synthesize mediaTimeRange=_mediaTimeRange - In the implementation block
+(id)rangeMarkerWithRepresentedObject:(id)arg1 mediaTimeRange:(SCD_Struct_QT16)arg2 ;
-(id)initWithRepresentedObject:(id)arg1 mediaTimeRange:(SCD_Struct_QT16)arg2 ;
-(SCD_Struct_QT16)mediaTimeRange;
-(id)init;
-(void)dealloc;
-(id)representedObject;
@end
