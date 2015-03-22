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
//read each number and put it in the LinkedList 



}

