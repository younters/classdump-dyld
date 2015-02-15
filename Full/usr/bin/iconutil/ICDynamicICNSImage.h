/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/iconutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iconutil/iconutil-Structs.h>
#import <iconutil/ICICNSImage.h>

@class ICBaseIconRule, ICDynamicIconRule;

@interface ICDynamicICNSImage : ICICNSImage {

	ICBaseIconRule* baseRule;
	ICDynamicIconRule* rule;

}
-(id)initWithBaseIconRule:(id)arg1 rule:(id)arg2 ;
-(CGImageRef)imageForSize:(long long)arg1 scale:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
@end
