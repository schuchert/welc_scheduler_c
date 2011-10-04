#pragma once

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "linked_list.h"
#include "Event.h"

typedef struct Scheduler {
	linked_list *event_list;
} Scheduler;

Scheduler *Scheduler_create(void);
void Scheduler_delete(Scheduler *scheduler);
void Scheduler_add_event(Scheduler *scheduler, Event *event);
void Scheduler_all_events_on(Scheduler *scheduler, Date date, linked_list *found_events);

#ifdef __cplusplus
}
#endif

#endif
