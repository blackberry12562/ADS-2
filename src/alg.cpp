// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  } 
  else {
    return value * pown (value, n - 1);
  }
}

uint64_t fact(uint16_t n) {

}

double calcItem(double x, uint16_t n) {

}

double expn(double x, uint16_t count) {

}

double sinn(double x, uint16_t count) {

}

double cosn(double x, uint16_t count) {

}
