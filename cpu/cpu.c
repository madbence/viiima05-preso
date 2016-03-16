#include <stdio.h>

int main() {
  int i = 0;
  for (;;) {
    i++;
    if (i % 1000000 == 0) printf("%d\n", i / 1000000);
  }
}
