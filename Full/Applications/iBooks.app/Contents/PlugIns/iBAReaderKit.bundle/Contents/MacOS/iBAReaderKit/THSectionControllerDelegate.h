/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THSectionControllerDelegate <NSObject>
@optional
-(id)additionalVisibleRelativePageIndexesForSectionController:(id)arg1;
-(unsigned long long)sectionControllerNumberOfPagesDisplayed:(id)arg1;

@required
-(void)sectionControllerNeedsLayout:(id)arg1;
-(void)sectionController:(id)arg1 didLoadContentNode:(id)arg2 presentationType:(id)arg3;
-(void)sectionControllerInfosDidChange:(id)arg1;
-(void)showCorruptDocumentAlertForSectionController:(id)arg1;
-(id)documentRootForSectionController:(id)arg1;
-(id)flowLayoutObserverForSectionController:(id)arg1;

@end
