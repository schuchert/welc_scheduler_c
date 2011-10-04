#include "Event.h"

#include <stdlib.h>
#include <stdio.h>

Event *event_create(Date *date, enum DayTime slot) {
	Event *e = malloc(sizeof(Event));
	e->date = *date;
	e->slot = slot;
	return e;
}

void event_remove(Event *event) {
	if(event != NULL)
		free(event);
}

void event_added(Event *event) {
	printf("Event at: %ld added", event->date.date_time);
}
