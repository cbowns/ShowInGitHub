/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEKeyBinding, NSArray, NSMutableArray, NSString;

@interface IDEKeyBindingItem : NSObject
{
    NSString *_title;
    IDEKeyBinding *_keyBinding;
    NSMutableArray *_childItems;
}

- (id)_childItems;
@property(readonly) NSArray *childItems; // @synthesize childItems=_childItems;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 keyBinding:(id)arg2 childItems:(id)arg3;
- (void)insertObject:(id)arg1 inChildItemsAtIndex:(unsigned long long)arg2;
@property(readonly) BOOL isAlternate;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isGroupedAlternate;
@property(readonly) IDEKeyBinding *keyBinding; // @synthesize keyBinding=_keyBinding;
@property(readonly) NSMutableArray *mutableChildItems;
- (void)removeObjectFromChildItemsAtIndex:(unsigned long long)arg1;
- (void)setChildItems:(id)arg1;
@property(copy) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *toolTip;

@end
