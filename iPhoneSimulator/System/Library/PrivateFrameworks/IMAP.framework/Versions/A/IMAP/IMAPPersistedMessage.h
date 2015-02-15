/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMAPPersistedMessage <MCChanging>
@property (nonatomic,readonly) char persistentIDType; 
@optional
-(long long)libraryID;
-(id)managedObjectID;

@required
-(id)remoteID;
-(void)setRemoteID:(id)arg1;
-(void)setData:(id)arg1 isPartial:(char)arg2;
-(void)appendData:(id)arg1 part:(id)arg2;
-(char)persistentIDType;

@end
