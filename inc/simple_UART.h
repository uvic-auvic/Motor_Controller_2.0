/*
 * simple_UART.h
 *
 *  Created on: Aug 19, 2017
 *      Author: abates
 */

#ifndef SIMPLE_UART_H_
#define SIMPLE_UART_H_

extern void UART_init();
extern int UART_push_out(char* mesg);
extern int UART_push_out_len(char* mesg, int len);

#endif /* SIMPLE_UART_H_ */
