//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

#import "IDEContainerDelegate-Protocol.h"

@class IDEFileReference, IDEWorkspace;

@protocol IDEWorkspaceDelegate <IDEContainerDelegate>
- (void)_workspace:(IDEWorkspace *)arg1 failedToResolveContainerForProjectFile:(IDEFileReference *)arg2;

@optional
- (void)_workspace:(IDEWorkspace *)arg1 didChangeSimpleFilesFocusedTo:(BOOL)arg2;
- (void)_workspace:(IDEWorkspace *)arg1 didChangeFinishedLoadingTo:(BOOL)arg2;
@end

