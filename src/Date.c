#include "Date.h"

#include <stdlib.h>

Date *date_create() {
	Date *d = malloc(sizeof(Date));
	d->date_time = clock();
	return d;
}

int date_compare(Date *lhs, Date *rhs) {
	return lhs->date_time - rhs->date_time;
}

void date_release(Date *d) {
	free(d);
}

