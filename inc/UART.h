#ifndef BAUD                          /* if not defined in Makefile... */
#define BAUD  9600                     /* set a safe default baud rate */
#endif
#define   USART_HAS_DATA   (UCSR0A & RXC0)
#define   USART_READY      (UCSR0A & UDRE0)
#include <util/setbaud.h>
void initUSART(void);

