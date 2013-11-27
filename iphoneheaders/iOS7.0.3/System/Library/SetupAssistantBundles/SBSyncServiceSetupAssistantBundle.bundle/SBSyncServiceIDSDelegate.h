/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SetupAssistantBundles/SBSyncServiceSetupAssistantBundle.bundle/SBSyncServiceSetupAssistantBundle
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CommunicationsSetupUI/AASetupAssistantDelegateService.h>

@class NSMutableArray;

@interface SBSyncServiceIDSDelegate : NSObject <AASetupAssistantDelegateService> {

	NSMutableArray* _accountControllers;
	BOOL _setupOperationCancelled;

}
-(void)dealloc;
-(id)init;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)setupOperationFailed;
@end
