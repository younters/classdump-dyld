/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SearchCompletionsTableViewControllerDelegate <NSObject>
@optional
-(void)searchCompletionsTableViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)searchCompletionsTableViewController:(id)arg1 receivedNoCompletionsForQuery:(id)arg2;
-(void)searchCompletionsTableViewController:(id)arg1 hasCompletionsForQuery:(id)arg2;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectRefinementResult:(id)arg2 forQuery:(id)arg3;

@required
-(void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3;
@end
