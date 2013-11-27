/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@protocol UICollisionBehaviorDelegate;
@class PKExtendedPhysicsBody, NSMutableDictionary, , NSArray;

@interface UICollisionBehavior : UIDynamicBehavior {

	BOOL _usesImplicitBounds;
	UIEdgeInsets _implicitBoundsInsets;
	PKExtendedPhysicsBody* _implicitBoundsBody;
	NSMutableDictionary* _boundaryBodies;
	NSMutableDictionary* _boundaryPaths;
	unsigned _collisionMode;
	<UICollisionBehaviorDelegate>* _collisionDelegate;
	unsigned _groupVID;
	unsigned _groupBID;
	struct {
		unsigned delegateBeganWithItem : 1;
		unsigned delegateEndedWithItem : 1;
		unsigned delegateBeganWithBoundary : 1;
		unsigned delegateEndedWithBoundary : 1;
	}  _collisionBehaviorFlags;

}

@property (nonatomic,readonly) NSArray * items; 
@property (assign,nonatomic) unsigned collisionMode; 
@property (assign,nonatomic) BOOL translatesReferenceBoundsIntoBoundary; 
@property (nonatomic,readonly) NSArray * boundaryIdentifiers; 
@property (assign,nonatomic) <UICollisionBehaviorDelegate> * collisionDelegate; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)_reevaluate:(unsigned)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(id)collisionDelegate;
-(void)_didBeginContact:(id)arg1 ;
-(void)_didEndContact:(id)arg1 ;
-(void)_addItem:(id)arg1 ;
-(void)_setCollisions:(BOOL)arg1 forBody:(id)arg2 isEdge:(BOOL)arg3 ;
-(unsigned)collisionMode;
-(void)_setupImplicitBoundaries;
-(void)_applySettings;
-(void)_setupExplicitBoundaries;
-(void)_removeImplicitBoundaries;
-(void)_removeExplicitBoundaries;
-(void)_setTranslatesReferenceItemBounds:(BOOL)arg1 intoBoundaryWithInsets:(UIEdgeInsets)arg2 ;
-(BOOL)translatesReferenceBoundsIntoBoundary;
-(void)setCollisionMode:(unsigned)arg1 ;
-(void)setCollisionDelegate:(id)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundary:(BOOL)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(UIEdgeInsets)arg1 ;
-(void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2 ;
-(void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(id)boundaryWithIdentifier:(id)arg1 ;
-(void)removeBoundaryWithIdentifier:(id)arg1 ;
-(id)boundaryIdentifiers;
-(void)removeAllBoundaries;
@end
