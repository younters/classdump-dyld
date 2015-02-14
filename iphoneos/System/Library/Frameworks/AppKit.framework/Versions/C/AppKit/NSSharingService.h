/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString, NSImage, NSArray, NSURL;

@interface NSSharingService : NSObject {

	id _reserved;

}

@property (assign) id<NSSharingServiceDelegate> delegate; 
@property (copy,readonly) NSString * title; 
@property (readonly) NSImage * image; 
@property (readonly) NSImage * alternateImage; 
@property (copy) NSString * menuItemTitle; 
@property (copy) NSArray * recipients; 
@property (copy) NSString * subject; 
@property (copy,readonly) NSString * messageBody; 
@property (copy,readonly) NSURL * permanentLink; 
@property (copy,readonly) NSString * accountName; 
@property (copy,readonly) NSArray * attachmentFileURLs; 
+(id)sharingServiceNamed:(id)arg1 ;
+(void)_loadShareKit;
+(Class)_SHKSharingServiceClass;
+(id)sharingServicesForItems:(id)arg1 mask:(unsigned long long)arg2 ;
+(Class)_SHKSharingServicePickerClass;
+(char)_usesItemProvider;
+(id)sharingServicesForItems:(id)arg1 ;
+(id)sharingServicesForAttributedString:(id)arg1 range:(NSRange)arg2 mask:(unsigned long long)arg3 ;
+(void)_addRecentEmailServiceToDefaultsWithSubject:(id)arg1 recipients:(id)arg2 ;
-(id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(CGSize)arg3 contentRect:(CGRect*)arg4 ;
-(id)sharingService:(id)arg1 sharedItemsFromProposedItems:(id)arg2 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 transitionImage:(id*)arg3 ;
-(id)sharingServiceSourceWindow:(id)arg1 contentRect:(CGRect*)arg2 ;
-(char)sharingService:(id)arg1 prepareAlternateItemsWithIdentifier:(id)arg2 forItems:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)sharingService:(id)arg1 willShareItems:(id)arg2 ;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3 ;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 ;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(id)sharingService:(id)arg1 optionsForItems:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<NSSharingServiceDelegate>)arg1 ;
-(void)dealloc;
-(id)name;
-(NSImage *)image;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSString *)title;
-(id<NSSharingServiceDelegate>)delegate;
-(long long)type;
-(NSImage *)alternateImage;
-(char)canPerformWithItems:(id)arg1 ;
-(id)shkSharingService;
-(NSString *)menuItemTitle;
-(void)setShkSharingService:(id)arg1 ;
-(void)performWithItems:(id)arg1 ;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(void)setParameterValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 alternateImage:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)subtitle;
-(void)setSubtitle:(id)arg1 ;
-(void)setMenuItemTitle:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)messageBody;
-(NSURL *)permanentLink;
-(NSString *)accountName;
-(NSArray *)attachmentFileURLs;
-(id)_preProcessingJavaScriptURL;
@end
