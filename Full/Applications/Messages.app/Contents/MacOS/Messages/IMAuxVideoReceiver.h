/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMAuxVideoReceiver
@required
-(oneway void)provider:(id)arg1 bundleID:(id)arg2 connectWithPixelFormat:(unsigned)arg3 videoStills:(char)arg4 replacement:(char)arg5 audioChannels:(int)arg6 controlsDictionary:(id)arg7;
-(oneway void)provider:(id)arg1 updateControlBarFromDictionaryRepresentation:(id)arg2;
-(oneway void)provider:(id)arg1 sentBuffer:(int)arg2 withAttachments:(id)arg3;

@end
