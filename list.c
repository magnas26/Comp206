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
struct NODE *find(int aNum){
struct NODE *ptr; 
struct NODE a; 
ptr=&a;   
return ptr;  

}


//call find function, if a node is found return true, else false
BOOLEAN delete (int a){

return 0; 
}



