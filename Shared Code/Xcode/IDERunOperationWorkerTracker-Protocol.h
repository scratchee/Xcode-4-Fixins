//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//


@class IDERunOperationWorker, NSError;

@protocol IDERunOperationWorkerTracker <NSObject>
- (void)runningDidFinish:(IDERunOperationWorker *)arg1 withError:(NSError *)arg2;

@optional
- (void)executionWantsHold:(BOOL)arg1 withWorker:(IDERunOperationWorker *)arg2 withError:(NSError *)arg3;
@end

