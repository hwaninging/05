#include <stdio.h>
#include <stdlib.h>
// 5. 산술계산기 (switch로 한 것) 
int main(int argc, char *argv[])
{
  int a, b; //3가지변수 선언 및 scanf 선언 잘 해주기 
  char op;  //연산자 
  int result;  
   
  printf("enter the calculation: ");
  scanf("%i %c %i", &a, &op, &b); //받는거  

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
