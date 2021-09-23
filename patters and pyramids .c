#include <stdio.h>
int main() {
   int h, p, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (h = 1; h <= rows; ++h) {
      for (p = 1; p <= h; ++p) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
