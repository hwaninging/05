#include <stdio.h>
#include <stdlib.h>
// 6. ���� ���߱� ���� 
int main(int argc, char *argv[])
{
  int answer = 59;
  int num;
  int trial=0; //����=0 
  
  do //�ݺ��� (���� �� ���� ��Ȳ) 
  {
      printf("Guess a number: ");
      scanf("%d", &num);
      
      if(answer < num) //high �϶�  
      printf("high!\n");
      else if ( answer > num) //low
      printf("low!\n");
      
      trial++;
      
  }
   while( answer != num); //���ǽ�: ���� ���� �ʴ� - ��� �ݺ��ǰ� ��. 
   printf("Congratulation! trials: %i\n", trial);
      
  system("PAUSE");	
  return 0;
}
