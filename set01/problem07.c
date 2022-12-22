//Write a program to find Sum of n different number entered by the user
#include<stdio.h>

int input_array_size(){
  int x;
  printf("Enter array size:\n");
  scanf("%d",&x);
  printf("We have an array of size %d.\n",x+1);
  return x;
}
void  input_array(int n, int a[n]){
  for(int i=0;i<=n;i++){
    printf("Enter element %d of the array: ",i+1);
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n]){
  int sum=0;
  for(int i=0;i<=n;i++){
    sum+=a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum){
  int i;
  for(i=0;i<n;i++){
    printf("%d + ",a[i]);
  }
  printf("%d = %d\n",a[i],sum);
}
int main(void){
  int size, sum;//Don't declare array here itself. 
  size=input_array_size();
  int a[size];//Declare after obtaining it's size.
  input_array(size,a);
  sum=sum_n_arrays(size,a);
  out_put(size,a,sum);
  return 0;
}