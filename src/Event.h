#pragma once
#ifndef EVENT_H_
#define EVENT_H_

#include "Date.h"
#include "DayTime.h"

typedef struct {
	Date date;
	enum DayTime slot;
} Event;

Event *event_create(Date *date, enum DayTime slot);
void event_remove(Event *event);
void event_added(Event *event);

#endif
