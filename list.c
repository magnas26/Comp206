#include "list.h"
#include <stdlib.h>
//adding an element to a linkedlist
void add (int aNum) {
temp -> aNum = aNum; 
if(head == NULL) {
temp->next = NULL; 
tail = temp; 
head = temp; 
}
else {
tail->next=temp; 
temp->next=NULL;
tail=temp; 

}
}

//print every concent of the linkedlist
void prettyPrint(){
for(temp=head; temp!=NULL; temp=temp->next)
printf("%d\n", temp->aNum); 

}

//search through linkedlist and return pointer that points to the list struct containing the matched number
struct NODE *find (int aNum){
trailPtr = head; 
struct NODE *i = NULL; 
for(temp = head; temp != NULL; temp=temp->next)

{if(temp == head &&  temp->aNum == aNum) {
trailPtr = head;
head = temp->next; 
i=head; 
}
else if (temp->aNum == aNum){
trailPtr->next = temp->next; 
temp->next = NULL; 
i=head;
}
else{ 
trailPtr = temp; 
}}
return i;
}


//call find function, if a node is found return true, else false
BOOLEAN delete (int a){
if(find(a) != NULL) return 1; 
else if (find(a) == temp) return 0;  
}





