#include<stdio.h>

int input(char s[]){
  int a;
  printf("Enter %s: ", s);
  scanf("%d",&a);
  return a;
}
int compute(int a,int b){
  int c=a+b;
  return c;
}
void output(int a,int b,int c){
  printf("%d+%d=%d\n",a,b,c);
}
int main(){
  int num1, num2, sum;
  
  num1=input("1st number");
  num2=input("2nd number");
  sum=compute(num1,num2);
  output(num1, num2, sum);
  return 0;
}