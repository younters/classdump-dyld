/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/PrintAndScan.prefPane/Contents/MacOS/PrintAndScan
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PFScannerSharingMgr : NSObject
+(id)sharedMgr;
-(char)hasScanButton:(id)arg1 ;
-(id)scanButtonApp:(id)arg1 ;
-(id)scanApplicationList:(id)arg1 ;
-(void)setScanButtonApp:(id)arg1 forScanner:(id)arg2 ;
-(id)scannerProxyPath:(id)arg1 createIfMissing:(char)arg2 ;
-(id)buttonMappingPrefsForScanner:(id)arg1 ;
-(id)scanPrefsForScanner:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
@end
