#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}

/*
#include<stdio.h>

void input(float *a, float *b){
  printf("Enter height and base:\n");
  scanf("%f%f",a,b);
}
void add(float a, float b, float *area){
  *area=a*b*0.5;
}
void output(float a, float b, float area){
  printf("The area a triangle with length %.2f cm and breadth %.2f cm is %.2f sq.cm.\n",a,b,area);
}
int main(){
  float b,h,area;
  input(&b,&h);
  add(b,h,&area);
  output(b,h,area);
  return 0;
}

*/