/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	double top;
	double left;
	double bottom;
	double right;
} SCD_Struct_CU0;

typedef struct rgbcolor {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} rgbcolor;

typedef struct {
	unsigned effectType;
	unsigned effectParameter;
	/*function pointer*/void* effectValue;
	double floatValue;
	unsigned long long intValue;
	const gbcolor colorValue;
	short angleValue;
	I) enumValue;
} SCD_Struct_CU2;

typedef struct {
	unsigned field1;
	unsigned( field2;
	/*function pointer*/void* field3;
	= field4;
	double field5;
	unsigned long long field6;
	_ field7;
	const gbcolor field8;
	short field9;
	unsigned) field10;
} SCD_Struct_CU3;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	SCD_Struct_CU3 field5[35];
} SCD_Struct_CU4;

typedef struct CGImage* CGImageRef;

typedef struct {
	unsigned blendMode;
	float fillRed;
	float fillGreen;
	float fillBlue;
	float fillOpacity;
} SCD_Struct_CU6;

typedef struct {
	float beginRed;
	float beginGreen;
	float beginBlue;
	float endRed;
	float endGreen;
	float endBlue;
	float gradientOpacity;
} SCD_Struct_CU7;

typedef struct {
	unsigned blendMode;
	float glowRed;
	float glowGreen;
	float glowBlue;
	float glowOpacity;
	float glowSize;
} SCD_Struct_CU8;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	unsigned blendMode;
	float shadowRed;
	float shadowGreen;
	float shadowBlue;
	float shadowBlurSize;
	float shadowOpacity;
	float shadowOffsetAmount;
	float shadowOffsetAngle;
	CGPoint shadowOffset;
} SCD_Struct_CU10;

typedef struct {
	float glowRed;
	float glowGreen;
	float glowBlue;
	float glowOpacity;
	float glowSize;
	float glowSpread;
} SCD_Struct_CU11;

typedef struct {
	float engraveRed;
	float engraveGreen;
	float engraveBlue;
	float engraveOpacity;
	float engraveBlurSize;
	float engraveSpread;
	float engraveOffsetAmount;
	float engraveOffsetAngle;
	CGPoint engraveOffset;
} SCD_Struct_CU12;

typedef struct {
	float embossSize;
	float embossSoften;
	float embossAngle;
	float embossAltitude;
	float highlightRed;
	float highlightGreen;
	float highlightBlue;
	float highlightOpacity;
	float shadowRed;
	float shadowGreen;
	float shadowBlue;
	float shadowOpacity;
} SCD_Struct_CU13;

typedef struct CGColor* CGColorRef;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct __CTFont* CTFontRef;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	CGPoint field9;
} SCD_Struct_CU18;

typedef struct CGPattern* CGPatternRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
} SCD_Struct_CS21;

typedef struct _NSZone* NSZoneRef;

typedef struct psdGradientColor {
	double red;
	double green;
	double blue;
	double alpha;
} psdGradientColor;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct renditionkeytoken {
	unsigned short identifier;
	unsigned short value;
} renditionkeytoken;

typedef struct CGFunction* CGFunctionRef;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_CU27;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct slice {
	unsigned x;
	unsigned y;
	unsigned width;
	unsigned height;
} slice;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct __CFData* CFDataRef;

typedef struct {
	long long field1;
	char* field2;
	char* field3;
} SCD_Struct_CU32;

typedef struct {
	char* field1;
	char* field2;
	long long field3;
	unsigned long long field4;
} SCD_Struct_CU33;

typedef struct {
	char* field1;
	char* field2;
	SCD_Struct_CU3 field3[5_];
	long long field4;
	long long field5;
	renditionkeytoken3 field6[12];
} SCD_Struct_CU34;

typedef struct {
	char* field1;
	char* field2;
	char field3;
	long long field4;
	SCD_Struct_CU34 field5[7];
} SCD_Struct_CU35;

typedef struct __CFString* CFStringRef;
