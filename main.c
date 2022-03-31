#include <stdio.h>


int main(void) {
  int licznik = 0;
  float d;
  float b = 1;
  float b1 = 1;
  float a;
  float c=0;
  float g;
  printf("Wprowadź dokładność: ");
  scanf("%f", &d);
  do {
    b1 = b;
    licznik += 1;
    if ((licznik - 1) % 2 == 0) {
      b = 1 / (2 * licznik - 1);
      a = (2 * licznik - 1);
      printf(" 1/%.0f ", a);
    } else {
      a = (2 * licznik - 1);
      printf("a:%.0f",a);
      b = -1/a;
      printf(" -1/%.0f ", a);
    }
  printf("%.1f %.1f\n",b1,b);
    c+=b;
    g=b1-b;
    printf("%f\n",g);
    
    } while (b1 - b >= d);
  printf("%.1f",c);
  return 0;
}