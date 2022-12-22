// Write a program to find largest of 3 numbers using 4 functions using Pass by value int input() int cmp(int a, int b, int c) void output(int a, int b, int c, int largest)

#include<stdio.h>

int input(char s[]){
  int a;
  printf("Enter %s: ", s);
  scanf("%d",&a);
  return a;
}
int compute(int a,int b, int c){
  int largest;
  if(a>=b && a>=c){largest=a;}
  else if(b>=c){largest=b;}
  else{largest=c;}
  return largest;
}
void output(int a,int b,int c, int largest){
  printf("The largest number of %d, %d and %d is %d.\n",a,b,c, largest);
}
int main(){
  int num1, num2, num3, largest;
  
  num1=input("1st number");
  num2=input("2nd number");
  num3=input("3rd number");
  largest=compute(num1,num2,num3);
  output(num1, num2, num3, largest);
  return 0;
}