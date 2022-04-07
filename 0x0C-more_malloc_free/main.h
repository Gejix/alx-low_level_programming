#ifdef _MAIN_H_
#define _MAIN_H_

void *malloc_checked(unsinged int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, insigned int size);
int *array_range(int min, intt max);
void *realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
