#include <stdio.h>
#include <stdlib.h>
// 5. ������� (switch�� �� ��) 
int main(int argc, char *argv[])
{
  int a, b; //3�������� ���� �� scanf ���� �� ���ֱ� 
  char op;  //������ 
  int result;  
   
  printf("enter the calculation: ");
  scanf("%i %c %i", &a, &op, &b); //�޴°�  

  switch(op)
  {
            case '+':
                 result = a+b;
                 break;
            case '-':
                  result = a-b;
                  break;
   }      

  printf(" = %i\n", result);
      
  system("PAUSE");	
  return 0;
}
