//Write a program to find the square root of a number. 
#include<stdio.h>

float input(char s[]){
  float x;
  printf("%s",s);
  scanf("%f",&x);
  return x;
}
float my_sqrt(float xi, float n){
  float x0,x1;
  //sq_n=sqrt(n); -lm in shell
  x0=xi;
  do{
    x1=(((n/x0)+x0)/2);
    x0=x1;
    printf("%f,%f\n",x0,x1);
  }while(x0!=x1);
  return x0;
}
void output(float n, float sqrt_result){
  printf("The square root of %.2f is %.2f.\n",n,sqrt_result);
}
int main(void){
  float num, sqnum;
  num=input("Enter a number to get its sq root: ");
  float x0=input("Enter initial guess: ");
  sqnum=my_sqrt(x0,num);
  output(num, sqnum);
  return 0;
}//not accurate