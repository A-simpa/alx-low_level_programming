#ifndef _MAIN_H
#define _MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int str_len(char *c);
void *_calloc(unsigned int nmemb, unsigned int size);
void simple_print_buffer(char *buffer, unsigned int size);
#endif /* _MAIN_H */
