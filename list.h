#ifndef list h
#define list h
#define BOOLEAN int
void add (int); 
void prettyPrint(); 
BOOLEAN delete (int);
 
struct NODE {
int aNum; 
struct NODE *next; }; 
struct NODE *head, *temp, *tail, *trailPtr; 
#endif 
