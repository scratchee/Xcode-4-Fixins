//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma once

#pragma mark Blocks

#pragma mark Named Structures

struct _IDEDataMatrixColumnDescriptor {
    char *_field1;
};

struct _IDEDataMatrixDescriptor {
    char *_field1;
    unsigned char _field2;
    unsigned char _field3;
    struct _IDEDataMatrixColumnDescriptor _field4[0];
};

struct _IDEDataMatrixRowOp {
    int _field1;
    struct _NSRange _field2;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id const *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1[3];
} CDStruct_3c4b7cd8;

/*
typedef struct {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
} CDStruct_9b0a347d;

 */

typedef struct {
    int _field1;
    void *_field2[2];
} CDStruct_9b248d9b;

typedef struct {
    int _field1;
    int _field2;
    void *_field3[3];
} CDStruct_a94d320b;

