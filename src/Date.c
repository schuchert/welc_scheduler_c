#include "Date.h"

#include <stdlib.h>

Date *Date_create() {
	Date *d = malloc(sizeof(Date));
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
		free(d);
}

