#include <stdio.h>

void mask_a(int x) {
  printf("%x\n", (x & 0xff));
}

void mask_b(int x) {
  printf("%x\n", (x ^ (~0)) ^ 0xff);
}

void mask_c(int x) {
  printf("%x\n", (x | 0xff));
}

int main()
{
  int val = 0x87654321;
  mask_a(val);
  mask_b(val);
  mask_c(val);
}
