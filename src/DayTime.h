#pragma once

#ifndef DAYTIME_H_
#define DAYTIME_H_

#ifdef __cplusplus
extern "C" {
#endif

enum DayTime {
	  Time8AM = 0,
	  Time9AM,
	  Time10AM,
	  Time11AM,
	  Time12PM,
	  Time1PM,
	  Time2PM,
	  Time3PM,
	  Time4PM,
	  Time5PM,
	  Time6PM,
	  Time7PM,
	  Time8PM,
};

const char* DayTime_to_string(enum DayTime);

#ifdef __cplusplus
}
#endif

#endif
