#include <stdio.h>
#include <stdlib.h>
#define NULL ((void *)0)
typedef struct link {
    int flag;
    int id;
    struct link *next;
  } list;

void print(list* ptr){

while (ptr){
    if (ptr->flag){
    printf("%d ",ptr->id);}
    ptr=ptr->next;
}
printf("\n");
}

void push(list** head){
printf("vvedite element\n");
int element;
scanf("%d",&element);
list* a;
a=malloc(sizeof(list));
a->id=element;
a->flag=1;
if (((*head)->flag)){
a->next=*head;}
else{
    free(*head);
    a->next=NULL;
}
*head=a;
}

void push_before(list** head){
int element_after,element;
printf("vvedite element do kotorogo vstavit\n");
scanf("%d",&element_after);
printf("vvedite element\n");
scanf("%d",&element);
list* a;
a=malloc(sizeof(list));
a->id=element;
a->flag=1;
list* ptr=*head;
if (element_after == (*head)->id){
    a->next=*head;
    *head=a;

}
else{



while (ptr->next->id != element_after){
    ptr=ptr->next;
}
a->next=ptr->next;
ptr->next=a;
}
}

void push_after(list* head){
int element_before,element;
printf("vvedite element posle kotorogo vstavit\n");
scanf("%d",&element_before);
printf("vvedite element\n");
scanf("%d",&element);
list* a;
a=malloc(sizeof(list));
a->id=element;
a->flag=1;
list* ptr=head;
while (ptr->id != element_before){
    ptr=ptr->next;
}
a->next=ptr->next;
ptr->next=a;

}



void append(list* head){
printf("vvedite element\n");
int element;
scanf("%d",&element);
list* ptr=head;
while(ptr->next){
    ptr=ptr->next;
}

list* a;
a=malloc(sizeof(list));
a->id=element;
a->flag=1;
a->next=NULL;
ptr->next=a;
}

int pop_first(list **head){
list* ptr=*head;
int ans=(*head)->id;
if((*head)->next){
*head=(*head)->next;
free(ptr);}
else{
    (*head)->next=NULL;
    (*head)->flag=0;
}

return ans;
}

int pop_last(list **head){
int ans;
list* ptr=*head;
if (!(ptr->next)){
    (*head)->flag=0;
    ans=(*head)->id;
}
else{
while( ptr->next->next){
    ptr=ptr->next;
}
list* temp=ptr->next;
ptr->next=NULL;
ans=temp->id;
free(temp);}
return ans;

}

int pop(list **head){
printf("vvedite element\n");
int element;
scanf("%d",&element);
if ((*head)->id==element){
    if (!(*head)->next){
        (*head)->flag=0;
    }
    else{
    list* tmp=*head;
    *head=tmp->next;
    free(tmp);}
}
else{
    list* ptr=*head;
    while(ptr->next->id != element){
        ptr=ptr->next;
    }
    list* tmp=ptr->next;
    ptr->next=tmp->next;
    free(tmp);
}


return element;
}

void sorts(list* head){
int swaps=1,ind1;
list* ptr1=head->next;
list* ptr2=head;
list *ptr3;
while (swaps){
    swaps=0;
    ptr2=ptr1;
    ptr3=ptr2->next->next;
    while (ptr2 && ptr2->next && ptr3){
        if (ptr3->id < ptr2->id){
            ind1=ptr3->id;
            ptr3->id=ptr2->id;
            ptr2->id=ind1;
            swaps++;
        }
        ptr2=ptr3;
        ptr3=ptr2->next;
        if (ptr3){
            ptr3=ptr3->next;
        }
    }
}
print(head);
 }






