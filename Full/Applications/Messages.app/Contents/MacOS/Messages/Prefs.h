/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface Prefs : NSObject
+(char)useUnifiedBuddyList;
+(char)showMyLoginIdInBuddyList;
+(char)useSingleStatus;
+(void)setUseSingleStatus:(char)arg1 ;
+(void)setShowMyLoginIdInBuddyList:(char)arg1 ;
+(long long)numberOfCustomMessagesToRemember;
+(id)nowPlayingFormatString;
+(void)setNumberOfCustomMessagesToRemember:(long long)arg1 ;
+(id)chatBookmarks;
+(void)removeBookmarkForRoom:(id)arg1 account:(id)arg2 ;
+(void)addBookmarkForRoom:(id)arg1 account:(id)arg2 ;
+(void)clearPreferenceForKey:(id)arg1 ;
+(void)copyPreference:(id)arg1 toKey:(id)arg2 ;
+(void)setUsingABPicture:(char)arg1 ;
+(char)addressMeInGroupchat;
+(long long)integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
+(char)offlineOnQuit;
+(void)setOfflineOnQuit:(char)arg1 ;
+(void)updateSuddenTerminationForOfflineOnQuit;
+(id)chatBookmarksForAccountID:(id)arg1 ;
+(void)removeGoToChatPrefsForRoom:(id)arg1 accountID:(id)arg2 ;
+(void)_setChatBookmarks:(id)arg1 ;
+(char)_hasBookmarkForRoom:(id)arg1 account:(id)arg2 ;
+(char)showRecipientBar;
+(char)showTabBar;
+(id)setDownloadsFolderToDefault;
+(void)setNotifyAboutKnockKnock:(char)arg1 ;
+(char)AXTextEnabled;
+(long long)AXSelectedFont;
+(id)customFont;
+(float)floatForKey:(id)arg1 defaultValue:(double)arg2 ;
+(double)doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
+(id)stringForKey:(id)arg1 defaultValue:(id)arg2 ;
+(void)setUbiquitousObject:(id)arg1 forKey:(id)arg2 ;
+(void)setUbiquitousBool:(char)arg1 forKey:(id)arg2 ;
+(void)setUbiquitousInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)setUbiquitousFloat:(double)arg1 forKey:(id)arg2 ;
+(void)setUbiquitousArray:(id)arg1 forKey:(id)arg2 ;
+(void)setUbiquitoustring:(id)arg1 forKey:(id)arg2 ;
+(id)accountsToLogInAtLaunch;
+(void)setAccountsToLogInAtLaunch:(id)arg1 ;
+(int)fastUserSwitchAction;
+(void)setFastUserSwitchAction:(int)arg1 ;
+(char)usingABPicture;
+(char)knockKnock;
+(void)setKnockKnock:(char)arg1 ;
+(char)fileTransferManagerShouldBeVisible;
+(void)setFileTransferManagerShouldBeVisible:(char)arg1 ;
+(char)animateBuddyIcons;
+(void)setAnimateBuddyIcons:(char)arg1 ;
+(void)_updateLastUsedDateForRoom:(id)arg1 account:(id)arg2 ;
+(void)purgeChatRoomPrefs;
+(void)setAddressMeInGroupchat:(char)arg1 ;
+(void)setShowRecipientBar:(char)arg1 ;
+(void)setShowTabBar:(char)arg1 ;
+(char)useBestRecipient;
+(id)savedChatPath;
+(void)setSavedChatPath:(id)arg1 ;
+(id)existingDownloadPath;
+(void)setUseUnifiedBuddyList:(char)arg1 ;
+(char)menuExtraIsVisible;
+(int)setMenuExtraIsVisible:(char)arg1 ;
+(char)menuExtraCanBeVisible;
+(void)setMenuExtraCanBeVisible:(char)arg1 ;
+(char)notifyAboutKnockKnock;
+(char)showAllBuddyPictures;
+(void)setShowAllBuddyPictures:(char)arg1 ;
+(void)setAXSelectedFont:(long long)arg1 ;
+(id)AXFont;
+(void)setCustomFont:(id)arg1 ;
+(char)saveConversationsOnClose;
+(void)setSaveConversationsOnClose:(char)arg1 ;
+(char)playVideosInline;
+(id)downloadURL;
+(void)setDownloadURL:(id)arg1 ;
+(id)downloadPath;
+(void)setArray:(id)arg1 forKey:(id)arg2 ;
+(void)removeBookmarkAtIndex:(long long)arg1 ;
+(char)boolForKey:(id)arg1 defaultValue:(char)arg2 ;
+(id)defaultFont;
+(void)setString:(id)arg1 forKey:(id)arg2 ;
+(id)objectForKey:(id)arg1 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 ;
+(void)setBool:(char)arg1 forKey:(id)arg2 ;
+(void)setFloat:(double)arg1 forKey:(id)arg2 ;
+(id)sharedInstance;
+(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
+(id)arrayForKey:(id)arg1 ;
-(void)iCloudPrefsUpdated:(id)arg1 ;
-(void)startListeningForICloudChanges;
-(void)stopListeningForICloudChanges;
-(id)init;
-(void)dealloc;
@end

