#include "Date.h"

#include "SchedulerMemory.h"

Date *Date_create() {
	Date *d = acquire(sizeof(Date));
	Date_to_now(d);
	return d;
}

void Date_to_now(Date *date) {
	date->date_time = clock();
}

int Date_compare(Date *lhs, Date *rhs) {
	return lhs->date_time - rhs->date_time;
}

void Date_release(Date *d) {
	if(d != NULL)
		release(d);
}

