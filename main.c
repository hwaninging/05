#include <stdio.h>
#include <stdlib.h>
// 1. ���/����/0���� �Ǵ�. 
int main(int argc, char *argv[])
{
  int x;
   
  printf("���� �ϳ��� �Է��Ͻÿ� : ");
  scanf("%d", &x);
  
   if (x>0) //x�� ������ ���ǽ� 
      printf("����Դϴ�.\n");
   else if (x<0)
      printf("�����Դϴ�.\n"); 
   else if (x==0)
      printf("0�Դϴ�.\n"); 
  
  system("PAUSE");	
  return 0;
}
