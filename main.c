#include <stdio.h>
#include <stdlib.h>
// 1. ���/����/0���� �Ǵ�. 
int main(int argc, char *argv[])
{
  int x;
   
  printf("���� �ϳ��� �Է��Ͻÿ� : ");
  scanf("%d", &x);
  
   if (x>0) //x�� ������ ���ǽ� 
      printf("���밪�� %i �Դϴ�.\n", x); //���� �ִ� %i 
   else
      printf("���밪�� %i �Դϴ�.\n", -x); 
      
  system("PAUSE");	
  return 0;
}
