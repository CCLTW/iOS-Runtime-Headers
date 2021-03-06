/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
    NSDateFormatter *_dateFormatter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _fencesNeedAdjusted;
    double _lastCheckpoint;
    int _lastDBSequence;
    CLLocationManager *_locationManager;
    BOOL _needsAlarmTablePopulation;
    NSDate *_nextFireDate;
    BOOL _pendingChanges;
    double _populateStart;
    BOOL _populating;
    BOOL _shouldUpdateWithForceForAlarmTable;
    BOOL _shouldUpdateWithForceForFences;
    NSTimer *_syncTimer;
    PCPersistentTimer *_timer;
    NSDate *_tomorrow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_publisherBulletinIDForReminder:(id)arg1;
+ (id)_publisherBulletinIDForTask:(void*)arg1;
+ (id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void)_adjustFences:(id)arg1;
- (void)_calendarNotificationSettingChanged;
- (void)_databaseChanged;
- (id)_dateFormatter;
- (BOOL)_haveAlarmsChanged:(id)arg1;
- (BOOL)_isDataProtected;
- (void)_killSyncTimer;
- (void)_killTimer;
- (void)_locationDaemonDidLaunch;
- (void)_notifyAlarmsFired:(id)arg1;
- (BOOL)_populateAlarmTable:(id)arg1;
- (void)_populateFinished;
- (void)_protectedDataDidBecomeAvailable;
- (void)_proximityAlertTriggered:(id)arg1 entered:(BOOL)arg2;
- (void)_removeAllFences;
- (void)_rescheduleTimer;
- (void)_resetSyncTimer;
- (BOOL)_shouldAdjustFencesWithStatus:(int)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(double)arg2 eventStore:(id)arg3;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timeDidChangeSignificantly;
- (void)_timeZoneChanged:(id)arg1;
- (void)_timerFired:(id)arg1;
- (void)_updateWithForceForAlarmTable:(BOOL)arg1 forFences:(BOOL)arg2;
- (void)dealloc;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)reschedule;
- (void)start;
- (void)stop;

@end
