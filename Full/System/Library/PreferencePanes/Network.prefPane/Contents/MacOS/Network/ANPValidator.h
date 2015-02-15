/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Network.prefPane/Contents/MacOS/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ANPValidator : NSObject
+(id)sharedValidator;
+(id)errorWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(long long)validateIPv4Address:(id)arg1 ;
-(long long)validateIPv6Address:(id)arg1 ;
-(id)autofillValuesForIPAddress:(id)arg1 ;
-(long long)verifyIPv4AddressNotInSpecialList:(id)arg1 isRouter:(char)arg2 ;
-(long long)validateIPv4QuadsForAddress:(id)arg1 andSubnetMask:(id)arg2 ;
-(id)errorDictionaryForError:(long long)arg1 ;
-(id)validatedSubnetMask:(id)arg1 ;
-(id)subnetMaskForBits:(long long)arg1 ;
-(id)routerAddressForIPAddress:(id)arg1 andSubnetMask:(id)arg2 ;
-(long long)validateSubnetMask:(id)arg1 ;
-(long long)p_binaryToIntegerConversion:(long long)arg1 ;
-(char)isValidDNSName:(id)arg1 ;
-(long long)validateIPv4Address:(id)arg1 forRouter:(id)arg2 andMask:(id)arg3 ;
-(char)verifyDifferentRouter:(id)arg1 andIPAddress:(id)arg2 ;
-(id)subnetMaskForRouter:(id)arg1 andIPAddress:(id)arg2 ;
-(void)dealloc;
@end
