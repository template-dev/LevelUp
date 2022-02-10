#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  printf("Enter a = ");
  scanf("%d", &a);
  printf("Enter b = ");
  scanf("%d", &b);
  printf("Enter c = ");
  scanf("%d", &c);
  printf("Enter d = ");
  scanf("%d", &d);

  // task #1 a=a+b-2
  a += (b - 2);
  printf("---[TASK #1]---\n");
  printf("a = %d\n", a);

  // task #2 c=c+1, d=c-a+d
  c++;
  d = c - a + d;
  printf("---[TASK #2]---\n");
  printf("c = %d | d = %d\n", c, d);

  // task #3 a=a*c, c=c-1
  a *= c;
  c--;
  printf("---[TASK #3]---\n");
  printf("a = %d | c = %d\n", a, c);

  // task #4 a=a/10, c=c/2, b=b-1, d=d*(c+b+a)
  a /= 10;
  c /= 2;
  b--;
  d *= (c + b + a);
  printf("---[TASK #4]---\n");
  printf("a = %d | c = %d | b = %d | d = %d\n", a, c, b, d);

  getchar();
  return 0;
}
