//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

#include "Shared.h"

#import "DVTTextAnnotation.h"

@class DVTObservingToken, IDEBreakpointIcon, IDEWorkspaceDocument;

@interface DBGBreakpointAnnotation : DVTTextAnnotation
{
    IDEWorkspaceDocument *_workspaceDocument;
    IDEBreakpointIcon *_icon;
    DVTObservingToken *_workspaceDocumentObserver;
    DVTObservingToken *_breakpointShouldBeEnabledObserver;
    DVTObservingToken *_breakpointLocationOrAddressObserver;
}

// - (void).cxx_destruct;
- (void)_updateLandmarkItemIfAppropriate;
- (void)adjustParagraphIndexBy:(long long)arg1 lengthBy:(long long)arg2;
- (void)resolveLocationIfNeededForLayoutManager:(id)arg1;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (void)_redisplay;
- (id)_iconForRect:(struct CGRect)arg1;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (void)setLocation:(id)arg1;
- (void)annotationWillUninstall;
- (id)_initWithWorkspaceDocument:(id)arg1 breakpoint:(id)arg2;
- (id)initWithWorkspaceDocument:(id)arg1 addressBreakpoint:(id)arg2 inMemoryDocumentURL:(id)arg3;
- (id)initWithWorkspaceDocument:(id)arg1 fileBreakpoint:(id)arg2;

@end

