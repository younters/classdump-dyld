/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Library/LaunchServices/fbahelperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FBAConstants : NSObject
+(id)currentLegalDoc;
+(id)publicUnenrollURL;
+(id)generalUnenrollURL;
+(id)publicFAQURL;
+(id)generalFAQURL;
+(char)suppressPrivacyNotice;
+(void)setSuppressPrivacyNotice:(char)arg1 ;
+(id)swVers;
+(id)attributeDescriptorsPath;
+(id)applicationVersionsPath;
+(id)heartbeatPath;
+(id)attributeSubmitPath;
+(id)getTokenURLForFeedback:(id)arg1 ;
+(id)filerURL;
+(id)feedbackAttachmentPathForFeedback:(id)arg1 ;
+(id)feedbackAttachmentPathForFeedback:(id)arg1 followupID:(id)arg2 ;
+(id)deleteFeedbackAttachmentPathForFeedback:(id)arg1 ;
+(id)bugFormsPath;
+(id)bugFormPathForID:(id)arg1 ;
+(id)startResponseJSONPathForBugFormID:(id)arg1 ;
+(id)formResponsePathForID:(id)arg1 ;
+(id)formResponseDraftPathForID:(id)arg1 ;
+(id)updateAnswerPathForQuestionID:(id)arg1 answerID:(id)arg2 ;
+(id)updateAnswersPathForFormResponse:(id)arg1 ;
+(id)requiredFileInfoPathForFormResponseID:(id)arg1 ;
+(id)pathForProjectDetailWithID:(id)arg1 ;
+(id)updatePathForBugFormID:(id)arg1 formResponseID:(id)arg2 ;
+(id)summaryPathForFormResponseID:(id)arg1 ;
+(id)submitUnsolicitedFollowupResponsePathForFormResponseID:(id)arg1 ;
+(id)submitFollowupResponsePathForFormResponseID:(id)arg1 followupID:(id)arg2 ;
+(id)projectsPathIncludingClosed:(char)arg1 includingPublic:(char)arg2 ;
+(id)acknowledgeAnnouncementsPath;
+(id)DSAuthRequestRealm;
+(id)DSAuthAppID;
+(id)DSAuthAppKey;
+(id)DSCookieName;
+(id)fbaUpgradeURL;
+(void)_deriveSystemVersion;
+(id)seedPortalURL;
+(id)feedbackSummaryURL;
+(id)swTrain;
+(id)iforgotURL;
+(id)feedbackAssistantHelpURL;
+(id)feedbackSummaryURLForProjectID:(id)arg1 ;
+(id)feedbackCreateURL;
+(id)URLForProjectThumbnailNamed:(id)arg1 ;
+(long long)currentLegalVersion;
+(id)productVersion;
+(id)environment;
+(id)feedbackURL;
+(void)initialize;
@end
