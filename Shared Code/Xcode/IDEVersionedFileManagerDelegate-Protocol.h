//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode-beta.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

@class DVTFilePath, NSArray;

@protocol IDEVersionedFileManagerDelegate
- (void)moveItemAtFilePathToTrash:(DVTFilePath *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (BOOL)canMoveItemsAtFilePaths:(NSArray *)arg1 toFilePaths:(NSArray *)arg2 completionBlockDispatchQueue:(id *)arg3 completionBlock:(CDUnknownBlockType *)arg4;
- (void)willRemoveItemsAtFilePaths:(NSArray *)arg1 completionBlock:(void (^)(BOOL))arg2;
- (BOOL)canRemoveItemsAtFilePaths:(NSArray *)arg1 completionBlockDispatchQueue:(id *)arg2 completionBlock:(CDUnknownBlockType *)arg3;
@end

