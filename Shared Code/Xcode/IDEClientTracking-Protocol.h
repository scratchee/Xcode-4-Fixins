//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

@class NSArray, NSString;
@protocol IDEClientTrackingToken;

@protocol IDEClientTracking <NSObject>
- (void)cancelTrackedClients;
- (NSArray *)clientsNotSupportingCancellation;
- (NSArray *)clientsRequiringCancellationPrompt;
- (id <IDEClientTrackingToken>)registerUncancellableClientWithName:(NSString *)arg1;
- (id <IDEClientTrackingToken>)registerClientWithName:(NSString *)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(void (^)(void))arg3;
@end

