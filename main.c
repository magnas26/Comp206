#include "list.h" 
#include <stdio.h>
#include <stdlib.h>

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
//initialize linkedlist pointer 
int i=1; 
int aNum; 
head=NULL; 
tail = NULL;  
while (1){
fscanf(ptr, "%d", &aNum);   
if(feof (ptr)) 
break;
i++; 

temp = (struct NODE *) malloc (sizeof(struct NODE));
//call add(int) to put each number at the end of list 
add(aNum);
}
fclose(ptr);
//print content of list by traversing it. 
prettyPrint(); 
//ask user for an integer

while (1){
printf("Insert a number you wish to delete\n"); 
scanf("%d", &aNum); 
if(delete(aNum)){ printf("Number was deleted\n"); }
else printf ("Number was not found\n"); 
prettyPrint();
if(ask()== 0)
break;
 }

//ask user if they want to delete another number repeadtly untiil other than yesy combinaison are inputed. 
}
int ask(){
char *s [4];

printf("do you wish to delete  another number? "); 
scanf("%s", s); 
if ( strcmp(s, "YES") != 0 && strcmp(s, "yes") != 0 && strcmp(s, "Yes") != 0 && strcmp (s, "y") != 0 && strcmp(s, "Y") != 0) return 0;
else return 1; 
}
