/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/systemstats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSUUID, NSDate, NSArray;

@interface Options : NSObject {

	BOOL _listfileswithnull;
	BOOL _show_all;
	BOOL _exclude_post_install;
	BOOL _includingSubjobs;
	BOOL _no_coalition_dashboard;
	BOOL _include_unsummarized_records;
	int _domain_ymd_year;
	int _domain_ymd_month;
	int _domain_ymd_day;
	int _mode;
	int _domain_type;
	NSString* _from_path;
	unsigned long long _domain_start;
	unsigned long long _domain_end;
	NSString* _only_system_version;
	NSUUID* _only_boot_uuid;
	NSDate* _load_periodic_files_newer_than;
	NSArray* _domain_mask_states;
	NSArray* _summarizer_names;

}

@property (nonatomic,retain) NSString * from_path;                                 //@synthesize from_path=_from_path - In the implementation block
@property (assign,nonatomic) unsigned long long domain_start;                      //@synthesize domain_start=_domain_start - In the implementation block
@property (assign,nonatomic) unsigned long long domain_end;                        //@synthesize domain_end=_domain_end - In the implementation block
@property (assign,nonatomic) int domain_ymd_year;                                  //@synthesize domain_ymd_year=_domain_ymd_year - In the implementation block
@property (assign,nonatomic) int domain_ymd_month;                                 //@synthesize domain_ymd_month=_domain_ymd_month - In the implementation block
@property (assign,nonatomic) int domain_ymd_day;                                   //@synthesize domain_ymd_day=_domain_ymd_day - In the implementation block
@property (assign,nonatomic) int mode;                                             //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int domain_type;                                      //@synthesize domain_type=_domain_type - In the implementation block
@property (assign,nonatomic) BOOL listfileswithnull;                               //@synthesize listfileswithnull=_listfileswithnull - In the implementation block
@property (assign,nonatomic) BOOL show_all;                                        //@synthesize show_all=_show_all - In the implementation block
@property (assign,nonatomic) BOOL exclude_post_install;                            //@synthesize exclude_post_install=_exclude_post_install - In the implementation block
@property (assign,nonatomic) BOOL includingSubjobs;                                //@synthesize includingSubjobs=_includingSubjobs - In the implementation block
@property (nonatomic,retain) NSString * only_system_version;                       //@synthesize only_system_version=_only_system_version - In the implementation block
@property (nonatomic,retain) NSUUID * only_boot_uuid;                              //@synthesize only_boot_uuid=_only_boot_uuid - In the implementation block
@property (nonatomic,retain) NSDate * load_periodic_files_newer_than;              //@synthesize load_periodic_files_newer_than=_load_periodic_files_newer_than - In the implementation block
@property (nonatomic,retain) NSArray * domain_mask_states;                         //@synthesize domain_mask_states=_domain_mask_states - In the implementation block
@property (assign,nonatomic) BOOL no_coalition_dashboard;                          //@synthesize no_coalition_dashboard=_no_coalition_dashboard - In the implementation block
@property (assign,nonatomic) BOOL include_unsummarized_records;                    //@synthesize include_unsummarized_records=_include_unsummarized_records - In the implementation block
@property (nonatomic,retain) NSArray * summarizer_names;                           //@synthesize summarizer_names=_summarizer_names - In the implementation block
-(NSString *)from_path;
-(void)setFrom_path:(NSString *)arg1 ;
-(unsigned long long)domain_start;
-(void)setDomain_start:(unsigned long long)arg1 ;
-(unsigned long long)domain_end;
-(void)setDomain_end:(unsigned long long)arg1 ;
-(int)domain_ymd_year;
-(void)setDomain_ymd_year:(int)arg1 ;
-(int)domain_ymd_month;
-(void)setDomain_ymd_month:(int)arg1 ;
-(int)domain_ymd_day;
-(void)setDomain_ymd_day:(int)arg1 ;
-(int)domain_type;
-(void)setDomain_type:(int)arg1 ;
-(BOOL)listfileswithnull;
-(void)setListfileswithnull:(BOOL)arg1 ;
-(BOOL)show_all;
-(void)setShow_all:(BOOL)arg1 ;
-(BOOL)exclude_post_install;
-(void)setExclude_post_install:(BOOL)arg1 ;
-(BOOL)includingSubjobs;
-(void)setIncludingSubjobs:(BOOL)arg1 ;
-(NSString *)only_system_version;
-(void)setOnly_system_version:(NSString *)arg1 ;
-(NSUUID *)only_boot_uuid;
-(void)setOnly_boot_uuid:(NSUUID *)arg1 ;
-(NSDate *)load_periodic_files_newer_than;
-(void)setLoad_periodic_files_newer_than:(NSDate *)arg1 ;
-(NSArray *)domain_mask_states;
-(void)setDomain_mask_states:(NSArray *)arg1 ;
-(BOOL)no_coalition_dashboard;
-(void)setNo_coalition_dashboard:(BOOL)arg1 ;
-(BOOL)include_unsummarized_records;
-(void)setInclude_unsummarized_records:(BOOL)arg1 ;
-(NSArray *)summarizer_names;
-(void)setSummarizer_names:(NSArray *)arg1 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
@end
