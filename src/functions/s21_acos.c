#include "s21_math.h"

long double s21_acos(double x) {
  long double result = 0.0;
  if (x == 1.0) {
    result = 0.0;
  } else if (x == -1.0) {
    result = S21_PI;
  } else if (x == 0) {
    result = S21_PI_2;
  } else if (0.0 <= x && x < 1.0) {
    result = s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (-1.0 < x && x < 0.0) {
    result = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  } else {
    result = S21_NAN;
  }

  return result;
}