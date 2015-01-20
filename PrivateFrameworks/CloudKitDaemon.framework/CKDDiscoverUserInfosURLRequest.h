/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserInfosURLRequest : CKDURLRequest {
    NSMutableDictionary *_emailAliasToEmailAddress;
    NSArray *_emailsToDiscover;
    NSMutableDictionary *_hashedEmailByRequestID;
    id _progressBlock;
    NSArray *_userRecordIDsToDiscover;
}

@property(retain) NSMutableDictionary * emailAliasToEmailAddress;
@property(retain) NSArray * emailsToDiscover;
@property(retain) NSMutableDictionary * hashedEmailByRequestID;
@property(copy) id progressBlock;
@property(retain) NSArray * userRecordIDsToDiscover;

- (void).cxx_destruct;
- (id)emailAliasToEmailAddress;
- (id)emailsToDiscover;
- (id)hashedEmailByRequestID;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (int)operationType;
- (id)progressBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setEmailAliasToEmailAddress:(id)arg1;
- (void)setEmailsToDiscover:(id)arg1;
- (void)setHashedEmailByRequestID:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setUserRecordIDsToDiscover:(id)arg1;
- (id)userRecordIDsToDiscover;

@end