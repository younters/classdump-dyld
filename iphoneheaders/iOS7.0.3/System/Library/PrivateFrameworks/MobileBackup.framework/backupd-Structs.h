/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct _mkbbackupref* mkbbackuprefRef;

typedef struct _lockdown_connection* lockdown_connectionRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct {
	unsigned loggingEnabled : 1;
} SCD_Struct_MB4;

typedef struct {
	unsigned keysLastModified : 1;
	unsigned quotaUsed : 1;
} SCD_Struct_MB5;

typedef struct {
	unsigned added : 1;
	unsigned size : 1;
	unsigned committed : 1;
} SCD_Struct_MB6;

typedef struct {
	unsigned birth : 1;
	unsigned decryptedSize : 1;
	unsigned inodeNumber : 1;
	unsigned lastModified : 1;
	unsigned lastStatusChange : 1;
	unsigned encryptionKeyVersion : 1;
	unsigned groupID : 1;
	unsigned keybagID : 1;
	unsigned mode : 1;
	unsigned protectionClass : 1;
	unsigned userID : 1;
} SCD_Struct_MB7;

typedef struct {
	unsigned committed : 1;
	unsigned lastModified : 1;
	unsigned quotaReserved : 1;
	unsigned snapshotID : 1;
} SCD_Struct_MB8;

typedef struct sqlite3* sqlite3Ref;

typedef struct __MMCSEngine* MMCSEngineRef;

typedef struct MMCSItemReader* MMCSItemReaderRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct _mkbfileref* mkbfilerefRef;

typedef struct __MKBKeyBagHandle* MKBKeyBagHandleRef;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;
