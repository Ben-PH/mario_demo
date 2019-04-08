#include <stdio.h>

int main() {
  int height = 10;
  for (int row = 0; row < height; row++) {
    printf("Line: %d\n", row+1);
  }

  int col = 0;
  do {
    printf("%d ", col);
    col++;
  } while (col < 8);


  height = 4;
  for (int row = 0; row < height; row++) {
    for (col = 0; col < row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }
}
