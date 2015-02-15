/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EWSEffectiveRightsType : NSObject {

	char _CreateAssociated;
	char _CreateContents;
	char _CreateHierarchy;
	char _Delete;
	char _Modify;
	char _Read;

}

@property (assign,nonatomic) char CreateAssociated;              //@synthesize CreateAssociated=_CreateAssociated - In the implementation block
@property (assign,nonatomic) char CreateContents;                //@synthesize CreateContents=_CreateContents - In the implementation block
@property (assign,nonatomic) char CreateHierarchy;               //@synthesize CreateHierarchy=_CreateHierarchy - In the implementation block
@property (assign,nonatomic) char Delete;                        //@synthesize Delete=_Delete - In the implementation block
@property (assign,nonatomic) char Modify;                        //@synthesize Modify=_Modify - In the implementation block
@property (assign,nonatomic) char Read;                          //@synthesize Read=_Read - In the implementation block
+(id)definition;
-(char)CreateAssociated;
-(void)setCreateAssociated:(char)arg1 ;
-(char)CreateContents;
-(void)setCreateContents:(char)arg1 ;
-(char)CreateHierarchy;
-(void)setCreateHierarchy:(char)arg1 ;
-(char)Delete;
-(void)setDelete:(char)arg1 ;
-(void)setModify:(char)arg1 ;
-(void)setRead:(char)arg1 ;
-(id)description;
-(char)Read;
-(char)Modify;
@end
