#include <stdio.h>
#include <stdlib.h>
// 4. 덧셈 프로그램 
int main(int argc, char *argv[])
{
  int x; 
  int i; //for문 받아주기 위한 것 
  int sum=0; //누적 더하기를 저장하는 저장소 
   
  printf("input a number: ");
  scanf("%d", &x);
  
  //3가지 넣어야 하니까 뭘 반복할지부터 하기
  for(i=0;i<=x;i++) //i 더할때마다 i 하나씩 증가 
  sum = sum + i;
  
  printf("the result is %i\n", sum);
      
  system("PAUSE");	
  return 0;
}
