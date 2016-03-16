#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  int i, j;
  for (i = 1;;i++) {
    char* m = (char*)malloc(1024 * 1024);
    if (!m) {
      printf("Cannot allocate %dMB!\n", i);
      return 1;
    }
    for (j = 0; j < 1024 * 1024; j++) {
      m[j] = 1;
    }
    printf("%dMB allocated!\n", i);
    usleep(1000 * 50);
  }
}
