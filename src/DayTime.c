#include "DayTime.h"

const char* DayTime_to_string(enum DayTime dt) {
	switch (dt) {
	case Time8AM:
		return "08:00";
	case Time9AM:
		return "09:00";
	case Time10AM:
		return "10:00";
	case Time11AM:
		return "11:00";
	case Time12PM:
		return "12:00";
	case Time1PM:
		return "13:00";
	case Time2PM:
		return "14:00";
	case Time3PM:
		return "15:00";
	case Time4PM:
		return "16:00";
	case Time5PM:
		return "17:00";
	case Time6PM:
		return "18:00";
	case Time7PM:
		return "9:00";
	case Time8PM:
		return "20:00";
	default:
		return "<BAD SLOT>";
	}
}

