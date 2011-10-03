#pragma once
#ifndef DATE_H_
#define DATE_H_

#include <time.h>
typedef struct {
	clock_t date_time;
} Date;

Date *date_create();
int date_compare(Date *lhs, Date *rhs);
void date_release(Date *);

#endif
