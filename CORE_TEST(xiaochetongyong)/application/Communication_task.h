#ifndef __COMMUNICATION_TASK_H
#define __COMMUNICATION_TASK_H

#include "bsp.h"

void Communication_init(uint32_t baud);

/* 非阻塞 UART 发送（ISR 安全） */
void Communication_send_string(char* str);
void Communication_send_data(const uint8_t *data, uint16_t len);

#endif
