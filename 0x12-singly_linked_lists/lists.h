#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_s - singly linked 1ists
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif /*list.h*/

