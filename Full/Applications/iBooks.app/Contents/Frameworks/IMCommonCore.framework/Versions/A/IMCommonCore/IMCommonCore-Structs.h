/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	long long expectedNumberOfInsertions;
	double loadFactor;
	long long numberOfHashFunctions;
} SCD_Struct_IM0;

typedef struct {
	SCD_Struct_IM0 bloomFilterSpecification;
	long long windowWidth;
} SCD_Struct_IM1;

typedef struct {
	SCD_Struct_IM0 field1;
	long long field2;
} SCD_Struct_IM2;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct CGImage* CGImageRef;

typedef struct BKSeriesFolderLayoutInfo {
	double baseWidth;
	double baseHeight;
	double coverImageOffset;
	double coverImageGap;
} BKSeriesFolderLayoutInfo;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	double loadFactor;
	long long numberOfHashFunctions;
	long long windowWidth;
} SCD_Struct_IM12;

typedef struct _xmlTextReader* xmlTextReaderRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct objc_method* objc_methodRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	char* bytes;
	unsigned long long byteCount;
} SCD_Struct_IM19;
