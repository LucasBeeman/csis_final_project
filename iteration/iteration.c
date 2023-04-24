#include <stdio.h>

int main() {
  int list_of_numbers[10] = {0, 3, 5, 1, 2, 19, 8, 2, 3, -5};
  for (int i = 0; i <= 9; i++) {
    list_of_numbers[i] = list_of_numbers[i] + 1;
    printf("%d, ", list_of_numbers[i]);
  }
  return 0;
}
