#include "Mail.h"

#include <stdio.h>

void send_mail(const char *address, const char* message) {
	printf("\n...Sending Mail To: %s---Body: \t'%s'...", address, message);
	fflush(stdout);
}
