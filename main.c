#include <stdio.h>
#include <stdlib.h>

#include "list.h"



int main(){
list* head;
head=malloc(sizeof(list));
head->flag=0;
head->next=NULL;
int request=1;
while(request){
printf("vvedite komandu:\n");
printf("1-vstavka v nachalo\n");
printf("2-vstavka do elemeta\n");
printf("3-vstavka posle elementa\n");
printf("4-vstavka v konec\n");
printf("5-udalit perviy element\n");
printf("6-udalit posledniy element\n");
printf("7-udalit vibraniy element\n");
printf("8-vivod na pechaat spiska\n");
printf("9-individualnoe zadanie\n");
printf("0-zavershenie programi\n");
printf("DOVABLENIE V PUSTOI SPISOK PROIZVODITSA DOBAVLENIEM V NACHALO(1)\n");
printf("IZNACHALNO SPISOK PUSTOI\n");
scanf("%d",&request);
if (request==1){
    push(&head);
}
else if (request==2){
    push_before(&head);
}
else if(request==3){
    push_after(head);
}
else if(request==4){
    append(head);
}
else if(request==5){
    pop_first(&head);
}
else if(request==6){
    pop_last(&head);
}
else if(request==7){
    pop(&head);
}
else if(request==8){
    print(head);
}
else if (request==9){
    sorts(head);
}
else if (request==0){
    break;
}
}
}
