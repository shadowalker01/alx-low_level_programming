#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>

/**
* struct list_s - singly linked list
*   
*
* Description: singly linked list node structure
* for Holberton project
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void print_start(void) __attribute__ ((constructor));
void free_list(list_t *);

#endif
