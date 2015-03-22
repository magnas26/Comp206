#include <stdio.h> 
#include <string.h> 

int mystrcmp (char *s1, char *s2){
for (; *s1='\0' && *s2!='\0' && *s1==*s2; s1++, s2++); 
return *s1-*s2; 

}


int main (void) {

char source [34] = "this is the source"; 
char destination [45] = "this is the destination"; 

printf ("destination is initially : %s \n)", destination); 

strcpy (destination, source); 
printf ("after strncpy, dest becomes %s : \n", destination); 
int result; 
result = mystrcmp (source, destination) ; 
printf ("%d", result); 
 
}
