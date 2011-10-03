#pragma once

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include "linked_list.h"
#include "Event.h"

typedef struct Scheduler {
	linked_list *event_list;
} Scheduler;

Scheduler *Scheduler_create(void);
void Scheduler_delete(Scheduler *scheduler);
void scheduler_add_event(Scheduler *scheduler, Event *event);

#endif
