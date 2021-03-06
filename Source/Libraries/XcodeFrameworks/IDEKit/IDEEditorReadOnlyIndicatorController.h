/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTGradientImageButton, IDEEditorContext;

@interface IDEEditorReadOnlyIndicatorController : NSObject
{
    IDEEditorContext *_editorContext;
    DVTGradientImageButton *_indicatorView;
    BOOL _showReadOnlyIndicator;
    id <DVTObservingToken> _documentStatusObserver;
    int _indicatorStatus;
}

- (void)_updateReadOnlyIndicator;
- (id)init;
- (id)initWithEditorContext:(id)arg1;
- (id)readOnlyIndicatorView;
@property BOOL showReadOnlyIndicator; // @synthesize showReadOnlyIndicator=_showReadOnlyIndicator;

@end

