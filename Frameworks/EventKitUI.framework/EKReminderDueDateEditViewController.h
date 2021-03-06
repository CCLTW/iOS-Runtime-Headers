/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderDueDateEditViewController : EKEditItemViewController <EKPickerTableViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    EKPickerTableView *_container;
    NSDate *_dueDate;
    BOOL _hasDueDate;
    BOOL _isAllDay;
    BOOL _shouldShowAllDay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_datePickerChanged:(id)arg1;
- (void)_hasDueDateChanged:(id)arg1;
- (void)_isAllDayChanged:(id)arg1;
- (void)_localeChanged;
- (void)_setDueDate:(id)arg1 updateDatePicker:(BOOL)arg2;
- (void)_setHasDueDate:(BOOL)arg1 updateSwitch:(BOOL)arg2 updateTableAnimated:(BOOL)arg3;
- (void)_setIsAllDay:(BOOL)arg1 updateSwitch:(BOOL)arg2;
- (void)_updateDatePickerDate;
- (void)_updateDatePickerMode;
- (void)_updateDatePickerPresenceAnimated:(BOOL)arg1;
- (void)_updateDueDateString;
- (void)_updateDueDateStringForCell:(id)arg1;
- (void)_updateEnabledState;
- (void)dealloc;
- (id)dueDate;
- (BOOL)hasDueDate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (BOOL)isAllDay;
- (void)loadView;
- (void)pickerTableViewDidChangeDatePickerInterval:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setHasDueDate:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setShouldShowAllDay:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
