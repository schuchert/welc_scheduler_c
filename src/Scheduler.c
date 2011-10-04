#include "scheduler.h"
#include <stdio.h>
#include "Mail.h"
#include "DayTime.h"
#include "SchedulerMemory.h"

Scheduler *Scheduler_create(void) {
	Scheduler *s = acquire(sizeof(Scheduler));
	s->event_list = linked_list_create();
	return s;
}

void Scheduler_delete(Scheduler *scheduler) {
	if (scheduler != NULL) {
		linked_list_release_destroy(scheduler->event_list, (RELEASE_F) event_remove);
		release(scheduler);
	}
}

void Scheduler_add_event(Scheduler *scheduler, Event *event) {
	event_added(event);
	linked_list_add(scheduler->event_list, event);
	char buffer[128];
	sprintf(
			buffer,
			"...Event Notification: %ld - %s...", event->date.date_time, DayTime_to_string(event->slot));
	send_mail("jacques@work.com", buffer);
}

void Scheduler_all_events_on(Scheduler *scheduler, Date date,
		linked_list *found_events) {
	list_iterator *iter = linked_list_begin(scheduler->event_list);
	while (linked_list_has_next(iter)) {
		Event *current = (Event*) linked_list_next(iter);
		if (current->date.date_time == date.date_time)
			linked_list_add(found_events, current);
	}
	linked_list_end(iter);
}

