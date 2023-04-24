#include <stdio.h>

void run_counter(int counter);

int main() {
  run_counter(0);
  printf("\n\n");
  run_counter(-5);
}

void run_counter(int counter) {
  do {
    printf("%d\n", counter);
    counter++;
  } while (counter <= 10 && counter >= 0); 
}
