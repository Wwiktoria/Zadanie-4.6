#include <stdio.h>
#include<math.h>

int main(void) {
  float d;
  float licz=0;
  float i=1;
  float pi;

  printf("Podaj dokładność: ");
  scanf("%f",&d);

  do{
    licz+=1/i-1/(i+2);
    i+=4;
  }while((1/i - 1/(i+2))>=d);

  pi=licz*4;

    printf("PI wynosi: %f",pi);
  
  return 0;
}