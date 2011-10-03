#include "Event.h"

#include <Stdlib.h>

Event *event_create(Date *date, enum DayTime slot) {
	Event *e = malloc(sizeof(Event));
	e->date = *date;
	e->slot = slot;
	return e;
}

void event_remove(Event *event) {
	free(event);
}

void event_added(Event *event) {
	printf("Event at: %d added", event->date);
}
