#include <stdio.h>
#include <stdlib.h>
// 6. 숫자 맞추기 게임 
int main(int argc, char *argv[])
{
  int answer = 59;
  int num;
  int trial=0; //변수=0 
  
  do //반복문 (답을 못 맞춘 상황) 
  {
      printf("Guess a number: ");
      scanf("%d", &num);
      
      if(answer < num) //high 일때  
      printf("high!\n");
      else if ( answer > num) //low
      printf("low!\n");
      
      trial++;
      
  }
   while( answer != num); //조건식: 답이 맞지 않다 - 계속 반복되게 됨. 
   printf("Congratulation! trials: %i\n", trial);
      
  system("PAUSE");	
  return 0;
}
