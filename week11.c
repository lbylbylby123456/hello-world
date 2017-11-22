#include <stdio.h>
// #include <stdlib.h>

int hexToDecimal(char* hex) {
  int a = 0;
  for (int i = 5, base = 1; i > 1; i--) {
    int n = hex[i] < 'a' ? hex[i] - 48 : hex[i] - 87;
    a += (n * base);
    base *= 16;
  }
  return a;
}

int main(void) {
  char a[7];
  scanf("%s", a);
  printf("%d\n", hexToDecimal(a));
  // system("pause");
  return 0;
}
