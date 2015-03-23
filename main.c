#include "list.h" 
#include <stdio.h>
int main(){
//ask user to repeatedly input file name or path until valid 
char fileName [100]; 
printf("Pleaser enter a file name: \n"); 
scanf("%s", fileName);
FILE *ptr; 
ptr = fopen(fileName, "r");
while(ptr == NULL ) {
printf("File not found...please enter again:  \n");
scanf("%s", fileName); 
ptr = fopen(fileName, "r");
}
//read abd add element to linkedlist. 
//first count the number of integers and create approprite size of nodes struct
 
int i=1; 
printf("number of i %d", i);
int aNum; 
struct NODE *head = NULL, *temp; 
struct NODE *tail = NULL; 
while (!feof(ptr)){
fscanf(ptr, "%d", &aNum);   
i++; 
temp = (struct NODE *) malloc (sizeof(struct NODE)); 
temp -> aNum = aNum; 
if(head == NULL) {
temp->next = NULL; 
tail = temp;
head = temp;  
} 
else {
tail -> next = temp; 
temp -> next = NULL; 
tail = temp;
}
}
int j=0;
for(temp=head; temp!=NULL; temp=temp->next)
printf("data: %d\n", temp->aNum); 
printf("print loop %d", j);
fclose(ptr); 
}

