/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    NSMutableArray *_problemIds;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
}

@property (nonatomic, readonly) BOOL hasStatusNotificationId;
@property (nonatomic, readonly) BOOL hasUserCredentials;
@property (nonatomic, retain) NSMutableArray *problemIds;
@property (nonatomic, retain) NSString *statusNotificationId;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;

- (void)addProblemId:(id)arg1;
- (void)clearProblemIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusNotificationId;
- (BOOL)hasUserCredentials;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemIdAtIndex:(unsigned int)arg1;
- (id)problemIds;
- (unsigned int)problemIdsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setProblemIds:(id)arg1;
- (void)setStatusNotificationId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (id)statusNotificationId;
- (id)userCredentials;
- (void)writeTo:(id)arg1;

@end
