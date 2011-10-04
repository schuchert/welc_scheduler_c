#pragma once
#ifndef Date_H_
#define Date_H_


#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>
typedef struct {
	clock_t date_time;
} Date;

Date *Date_create();
int Date_compare(Date *lhs, Date *rhs);
void Date_release(Date *);
void Date_to_now(Date *date);

#ifdef __cplusplus
}
#endif

#endif


