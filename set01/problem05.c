//Write a program to find largest of 3 numbers using 4 functions using pass by reference void input(int *a, int *b, int *c) int cmp(int a, int b, int c, int *largest) void output(int a, int b, int c, int largest)
#include<stdio.h>

void input(int *a, int *b, int *c){
  printf("Enter a, b and c:\n");
  scanf("%d%d%d",a,b,c);
}
void compute(int a, int b, int c, int *largest){
  if(a>=b && a>=c){*largest=a;}
  else if(b>=c){*largest=b;}
  else{*largest=c;}
}
void output(int a,int b,int c, int largest){
  printf("The largest number of %d, %d and %d is %d.\n",a,b,c, largest);
}
int main(){
  int a,b,c,largest;
  input(&a,&b,&c);
  compute(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}

/*
#include<stdio.h>

void input(int *a, int *b, int *c){
  printf("Enter a, b and c:\n");
  scanf("%d%d%d",a,b,c);
}
void compute(int a, int b, int c, int *largest){
  if(a>=b){
    if(a>=c){*largest=a;}
    else{*largest=c;}
  }
  else{
    if(b>=c){*largest=b;}
    else{*largest=c;}
    }
}
void output(int a,int b,int c, int largest){
  printf("The largest number of %d, %d and %d is %d.\n",a,b,c, largest);
}
int main(){
  int a,b,c,largest;
  input(&a,&b,&c);
  compute(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}


#include<stdio.h>
void input(int *a, int *b, int *c){
  printf("Enter a, b and c:\n");
  scanf("%d%d%d",a,b,c);
}
void compute(int a, int b, int c, int *largest){
*largest=(a>=b)?((a>=c)?a:c):((b>=c)?b:c);
}
void output(int a,int b,int c, int largest){
  printf("The largest number of %d, %d and %d is %d.\n",a,b,c, largest);
}
int main(){
  int a,b,c,largest;
  input(&a,&b,&c);
  compute(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}


#include<stdio.h>

void input(int *a, int *b, int *c){
  printf("Enter a, b and c:\n");
  scanf("%d%d%d",a,b,c);
}
void compute(int a, int b, int c, int *largest){
  *largest=a;
  if(b>=*largest){*largest=b;}
  if(c>=*largest){*largest=c;}
}
void output(int a,int b,int c, int largest){
  printf("The largest number of %d, %d and %d is %d.\n",a,b,c, largest);
}
int main(){
  int a,b,c,largest;
  input(&a,&b,&c);
  compute(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}

*/