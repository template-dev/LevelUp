#include <stdio.h>
#include <math.h>

void task1() {
  double y = 0;
  double x = 0;

  printf("---[ TASK #1 ]---\n");
  printf("Enter x: ");
  scanf("%lf", &x);

  y = ((2 * cos(x - (M_PI/6)) + sqrt(2)) / ((1 / (2 * log(x))) + (sin(pow(x, 2)) * sin(pow(x, 2)))) * (exp(3 * x)));

  printf("Y: %f\n", y);
}

void task2() {
  double P = 0;
  double radius = 0;

  printf("---[ TASK #2 ]---\n");
  printf("Please, enter the radius of the circle: ");
  scanf("%lf", &P);
  radius = P / (2 * M_PI);

  double sideOfTriangle = 0;
  double areaOfTriangle = 0;

  printf("Please, enter the side of the triangle: ");
  scanf("%lf", &sideOfTriangle);
  areaOfTriangle = (pow(sideOfTriangle, 2) * sqrt(3)) / 4;

  double sideOfSquare = 0;
  double areaOfSquare = 0;

  printf("Please, enter the side of the square: ");
  scanf("%lf", &sideOfSquare);
  areaOfSquare = pow(sideOfSquare, 2);

  ((radius > areaOfTriangle) && (radius > areaOfSquare)) ? (printf("The area of the circle is larger. It's value is %f.\n", radius)) : printf("");
  ((areaOfTriangle > radius) && (areaOfTriangle > areaOfSquare)) ? (printf("The area of the triangle is larger. It's value is %f.\n", areaOfTriangle)) : printf("");
  ((areaOfSquare > radius) && (areaOfSquare > areaOfTriangle)) ? (printf("The area of the square is larger. It's value is %f.\n", areaOfSquare)) : printf("");
}

int main() {
  task1();
  task2();

  return 0;
}
