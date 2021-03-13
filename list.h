#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED



#endif // LIST_H_INCLUDED



#define NULL ((void *)0)

typedef struct link {
    int flag;
    int id;
    struct link *next;
  } list;
void push(list** head);
void push_before(list** head);
void push_after(list* head);
void append(list* head);
int pop_first(list **head);
int pop_last(list **head);
int pop(list **head);
void sorts(list* head);
void print(list* ptr);
