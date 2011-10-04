#include "Event.h"

#include "SchedulerMemory.h"
#include <stdio.h>

Event *event_create(Date *date, enum DayTime slot) {
	Event *e = acquire(sizeof(Event));
	e->date = *date;
	e->slot = slot;
	return e;
}

void event_remove(Event *event) {
	if(event != NULL)
		release(event);
}

void event_added(Event *event) {
	printf("\n...Event at: %ld added...", event->date.date_time);
}
