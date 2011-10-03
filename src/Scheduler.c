#include "scheduler.h"
#include <stdio.h>
#include <stdlib.h>
#include "Mail.h"
#include "DayTime.h"

Scheduler *Scheduler_create(void) {
	Scheduler *s = malloc(sizeof(Scheduler));
	s->event_list = linked_list_create();
	return s;
}

void Scheduler_delete(Scheduler *scheduler) {
	linked_list_release_destroy(scheduler->event_list, event_remove);
	free(scheduler);
}

void scheduler_add_event(Scheduler *scheduler, Event *event) {
	event_added(event);
	linked_list_add(scheduler->event_list, event);
	char buffer[128];
	sprintf(buffer, "Event Notification: %ld - %s", event->date.date_time, DayTime_to_string(event->slot));
	send_mail("jacques@work.com", buffer);
}



