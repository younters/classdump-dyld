/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKAccessibilityExtras.h>

@class NSSet, NSString;

@interface BKAccessibility : NSObject <BKAccessibilityExtras> {

	char _shouldLoadBookshelfSupport;
	char _shouldLoadBookstoreSupport;
	char _shouldLoadBookreaderEpubSupport;
	NSSet* _alreadyLoadedSafeCategories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char shouldLoadBookshelfSupport;                   //@synthesize shouldLoadBookshelfSupport=_shouldLoadBookshelfSupport - In the implementation block
@property (assign,nonatomic) char shouldLoadBookstoreSupport;                   //@synthesize shouldLoadBookstoreSupport=_shouldLoadBookstoreSupport - In the implementation block
@property (assign,nonatomic) char shouldLoadBookreaderEpubSupport;              //@synthesize shouldLoadBookreaderEpubSupport=_shouldLoadBookreaderEpubSupport - In the implementation block
@property (nonatomic,copy) NSSet * alreadyLoadedSafeCategories;                 //@synthesize alreadyLoadedSafeCategories=_alreadyLoadedSafeCategories - In the implementation block
+(void)configureButtonAccessibility:(id)arg1 subrole:(id)arg2 description:(id)arg3 title:(id)arg4 help:(id)arg5 ;
+(void)postLayoutChangedNotificationForElement:(id)arg1 updatedElements:(id)arg2 elementForFocus:(id)arg3 ;
+(void)configureButtonAccessibility:(id)arg1 role:(id)arg2 subrole:(id)arg3 description:(id)arg4 title:(id)arg5 help:(id)arg6 ;
+(id)sharedInstance;
-(char)needsAccessibilityElements;
-(id)preferencesDomain;
-(void)performExtraValidation;
-(void)addExtraSafeCategoryNamesToCollection:(id)arg1 ;
-(void)performValidation;
-(void)addSafeCategoryNamesToCollection:(id)arg1 ;
-(char)needsAccessibilityAnnouncements;
-(void)loadExtraAccessibilitySupport;
-(void)unloadExtraAccessibilitySupport;
-(void)handlePostingAnnouncement:(id)arg1 sender:(id)arg2 priority:(int)arg3 ;
-(NSSet *)alreadyLoadedSafeCategories;
-(void)setAlreadyLoadedSafeCategories:(NSSet *)arg1 ;
-(void)reloadAccessibilitySupport;
-(char)shouldLoadBookshelfSupport;
-(void)setShouldLoadBookshelfSupport:(char)arg1 ;
-(char)shouldLoadBookstoreSupport;
-(void)setShouldLoadBookstoreSupport:(char)arg1 ;
-(char)shouldLoadBookreaderEpubSupport;
-(void)setShouldLoadBookreaderEpubSupport:(char)arg1 ;
-(void)registerAccessibilityNotification;
@end
