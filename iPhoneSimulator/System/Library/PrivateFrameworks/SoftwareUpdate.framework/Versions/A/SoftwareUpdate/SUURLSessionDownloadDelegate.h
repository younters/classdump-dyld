/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUURLSessionDownloadDelegate
@required
-(void)saveCurrentState;
-(void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3;
-(id)packageReferenceForPackageIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPreviousRef:(id)arg3;
-(void)downloadSessionDidFinishForProductKey:(id)arg1;

@end
