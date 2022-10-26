//To reverse a string using stack
/*

ALGORITHM 
Global declaration 
DEFINE MAX = 100 
DECLARE char name[MAX] and char reversed[MAX] 
INITIALIZE top = -1 and topD = -1 
void push (char val) 
Step 1:START 
Step 2: If top = MAX - 1, then: 
 WRITE “Stack Overflow” 
 Else: 
 Increment top by 1 
 ASSIGN name[top] = val 
 [End of if else statement] 
Step 3: STOP 
[End of Function] 
void pushR (int letter) 
Step 1:START 
Step 2: If topD = MAX - 1, then: 
 WRITE “Stack Overflow” 
 Else: 
 Increment topD by 1 
 ASSIGN reversed[topD] = letter 
 [End of if else statement] 
Step 3: STOP 
[End of Function] 
char pop() 
Step 1:START 
Step 2: If top = -1, then: 
 WRITE “Stack Underflow” 
 Else: 
 ASSIGN char l = name[top] 
 Decrement top by 1 
return l 
 [End of if else statement] 
Step 3: STOP 
[End of Function] 
int main() 
Step 1: READ name 
Step 2: Repeat for loop for i=0 to strlen(name) 
 CALL push(name[i]) 
 Increment i by 1 
 [End of for loop] 
Step 3: Repeat for loop for i=0 to strlen(name) 
 ASSIGN char letter = pop() [CALLING POP] 
CALL pushR(letter) 
 Increment i by 1 
 [End of for loop] 
Step 4: WRITE reversed 
Step 5: STOP 
[End of Function] 
*/
//Code
#include <stdio.h> 
#include <string.h> 
#define MAX 100 
char name[MAX]; 
char reversed[MAX]; 
int top = -1, topD = -1; 
void push(char val) 
{ 
 if (top == MAX - 1) 
 { 
 printf("\nStack Overflow"); 
 } 
 else 
 { 
 top++; 
 name[top] = val; 
 } 
} 
void pushR(char letter) 
{ 
 if (topD == MAX - 1) 
 { 
 printf("\nStack Overflow"); 
 } 
 else 
 { 
 topD = topD + 1; 
 reversed[topD] = letter; 
 } 
} 
char pop() 
{ 
 if (top == -1) 
 { 
 printf("\nStack Underflow"); 
 } 
 else 
 { 
 char l = name[top]; 
 top = top - 1; 
 return l; 
 } 
} 
int main() 
{ 
 int i; 
 printf("Enter the string: "); 
 gets(name); 
 
 for (i = 0; i < strlen(name); i++) 
 { 
 push(name[i]); 
 } 
 
 for (i = 0; i < strlen(name); i++) 
 { 
 char letter = pop(); 
 pushR(letter); 
 } 
 printf("Reversed string: "); 
 puts(reversed); 
 return 0; 
} 
