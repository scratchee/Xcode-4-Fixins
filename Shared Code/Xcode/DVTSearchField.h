//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//
#import "Shared.h"

@class DVTSearchFieldCell, NSButtonCell, NSNumber, NSProgressIndicator;

@interface DVTSearchField : NSSearchField
{
    NSNumber *_trackingTag;
    long long _progress;
    BOOL _showsMatchingBrace;
    BOOL _hidesProgress;
    CDUnknownBlockType _searchMenuBlock;
    NSProgressIndicator *_progressIndicator;
}

+ (double)heightForBarHeight:(double)arg1;
+ (void)initialize;
+ (Class)cellClass;
@property(nonatomic) BOOL hidesProgress; // @synthesize hidesProgress=_hidesProgress;
@property(readonly) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(copy, nonatomic) CDUnknownBlockType searchMenuBlock; // @synthesize searchMenuBlock=_searchMenuBlock;
- (void)mouseDown:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)_mouseDownEventIsInSearchButton:(id)arg1;
@property BOOL showsMatchingBrace;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(nonatomic) long long numberOfMatches;
@property(nonatomic) int visualStyle;
@property long long progress;
- (void)_updateStateForProgress:(long long)arg1;
- (void)updateBoundProgress;
- (void)updateHeightBasedOnSuperviewHeight;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_resetTracking;
- (void)_clearTrackingIfNeeded;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
@property(readonly) DVTSearchFieldCell *cell;
@property(readonly) NSButtonCell *cancelButtonCell;
@property(readonly) NSButtonCell *searchButtonCell;
- (void)dvt_searchField_setup;
@property(getter=isFilterField) BOOL filterField;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dvtExtraBindings;

@end

