//Write a program to find Sum of n numbers a. Sum of n numbersinput: 5 output: 1+2+3+4+5 is 15
#include<stdio.h>
int input_n(){
  int x;
  scanf("%d",&x);
  return x;
}
int sum_n(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
    sum=sum+i;
  }
  return sum;
}
void output(int n, int sum){
  /*int i=1;
  do{
    printf("%d+",i);
    i++;
  }while(i<n);*/
  int i;
  for(i=1;i<n;i++){
    printf("%d + ",i);
  }
  printf("%d = %d\n",i,sum);
}
int main(void){
  int num, sum;
  printf("Enter a number:\n");
  num=input_n();
  sum=sum_n(num);
  output(num, sum);
  return 0;
}