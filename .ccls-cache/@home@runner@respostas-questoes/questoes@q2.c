#include <stdio.h>

int q2() {
  /*Escreva programas que exibam na tela os valores das seguintes fórmulas:
    a) 6 × (2 + 3) ÷ (4 + 5)
    b) 6 × 2 + 3 ÷ 4 + 5
    c) (45 ÷ 7) × 52 + 6 × 3 + 4 */

  printf("6 x (2 + 3) + (4 + 5) = ");
  printf("%d \n\n", 6 * (2+3) + (4 + 5));
  
  printf("6 x 2 + 3 ÷ 4 + 3 = ");
  printf("%d \n\n", 6 * 2 + 3 / 4 + 3);
  
  printf("(45 ÷ 7) × 52 + 6 × 3 + 4 = ");
  printf("%d \n\n", (45/7) * 52 + 6 * 3 + 4);
  return 0;
}