#include <stdio.h>
#include <stdlib.h>
// 4. ���� ���α׷� 
int main(int argc, char *argv[])
{
  int x; 
  int i; //for�� �޾��ֱ� ���� �� 
  int sum=0; //���� ���ϱ⸦ �����ϴ� ����� 
   
  printf("input a number: ");
  scanf("%d", &x);
  
  //3���� �־�� �ϴϱ� �� �ݺ��������� �ϱ�
  for(i=0;i<=x;i++) //i ���Ҷ����� i �ϳ��� ���� 
  sum = sum + i;
  
  printf("the result is %i\n", sum);
      
  system("PAUSE");	
  return 0;
}
