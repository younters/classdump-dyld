/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _long {
	unsigned long long __cap_;
	unsigned long long __size_;
	char* __data_;
} long;

typedef struct _short {
	/*function pointer*/void* ;
	unsigned char __size_;
	c) __lx;
	char __data_[23];
} short;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct shared_ptr<ctu::LogServer> {
	LogServer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<ctu::LogServer>;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __first_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct StaticLogger {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > fLogDomain;
	unsigned char fLogLevel;
	unsigned char fParentLevel;
	shared_ptr<ctu::LogServer> fServer;
} StaticLogger;

typedef struct _NSZone* NSZoneRef;

typedef struct __ABAddressBookRef* ABAddressBookRefRef;
