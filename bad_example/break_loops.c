#include <stdio.h>

int main() {
  int counter = 0;
  while(1) {
  if (counter > 500)
      break;
  printf("%d\n", counter);
  counter++;
  }
  return 0;
}
