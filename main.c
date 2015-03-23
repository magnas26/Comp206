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
//initialize linkedlist pointer 
int i=1; 
int aNum; 
head=NULL; 
tail = NULL;  
while (!feof(ptr)){
fscanf(ptr, "%d", &aNum);   
i++; 
temp = (struct NODE *) malloc (sizeof(struct NODE));
//call add(int) to put each number at the end of list 
add(aNum);
}
fclose(ptr);
//print content of list by traversing it. 
prettyPrint(); 
//ask user for an integer
printf("Insert a number you wish to delete"); 
scanf("%d", &aNum); 
if(BOOLEAN delete(aNum)) printf("Number was deleted"); 
else printf ("Number was not found"); 
prettyPrint(); 

//ask user if they want to delete another number repeadtly untiil other than yesy combinaison are inputed. 
}

