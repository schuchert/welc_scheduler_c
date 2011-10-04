#pragma once

#ifndef MAIL_H_
#define MAIL_H_

#ifdef __cplusplus
extern "C" {
#endif

void send_mail(const char *address, const char* message);

#ifdef __cplusplus
}
#endif

#endif
