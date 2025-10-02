#include <stdio.h>
#include <stdlib.h>
// 1. 양수/음수/0인지 판단. 
int main(int argc, char *argv[])
{
  int x;
   
  printf("정수 하나를 입력하시오 : ");
  scanf("%d", &x);
  
   if (x>0) //x가 양수라는 조건식 
      printf("양수입니다.\n");
   else if (x<0)
      printf("음수입니다.\n"); 
   else if (x==0)
      printf("0입니다.\n"); 
  
  system("PAUSE");	
  return 0;
}
