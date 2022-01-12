#include <stdio.h>
char q[100];
int n=0;
char a;
char output[100];
void Enqueue(char value){
if (n == 100) 
printf("Queue Overflow \n"); 
else{
q[n] = value;
n++; }}
 
void Dequeue(){
    char a=q[0];
if (n == 0 ){ 
printf("Queue Underflow \n"); 
return ; } 
else{ 
int i=0;
for(i=0;i<n;i++){
    q[i]=q[i+1];}
 n--;
 i=0;
 while(output[i]!=NULL){
    i++;
 }
 output[i]=a;
 }}
 
 void DequeueandEnqueue(){
    char a=q[0];
    if (n == 0 ){ 
printf("Queue Underflow \n"); 
return ; } 
else{ 
int i=0;
for(i=0;i<n;i++){
    q[i]=q[i+1];}
 n--;
 i=0;
 while(output[i]!=NULL){
    i++;
 }
 output[i]=a;
 Enqueue(a);
 }} 
int main(){
    printf("\t\t---PROGRAM---\n\n");
    printf("\n-Enter any Character(not an Operand) to Enqueue.\n-Operand *: Dequeue.\n-Operand $: Dequeue and Enqueue.\n-Press Spacebar and Enter (not together) to get desired Output and Queue after you stop entering Characters or Operands.\n\n");
    printf("Enter elements:\n");
char value;
do{ 
scanf("%c",&value);
if(value!='*' && value!='$' && value!='@'){
    Enqueue(value);
}
else{
if(value=='*'){
    Dequeue();
}
else if(value=='$'){
    DequeueandEnqueue();
}   
}
}while(value!=' ');
int i=0;
printf("\nQueue: %s",q);
printf("\nOutput: %s",output);  
 
    
return 0;   
}   
