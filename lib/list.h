#include <stdio.h>
#include <stdlib.h>

#ifndef TRUE
#define TRUE 0
#endif //TRUE
#ifndef FALSE
#define FALSE 1
#endif //TRUE

#ifndef LIST_H
#define LIST_H

typedef struct list {
	void *data;
	struct list *next;
} List;

List *new_list(void *);
int list_append(List *, void *);
void *list_pop(List *, void *);
int list_length(List *);
int free_list(List *);

#endif // LIST_H
