#ifndef EX21_H
#define EX21_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void(*message(int* arr, int size))(int* arr, int size);
void print(int*, int size);
int sumArr(int*, int size);
void invert(int*, int size);
void nonDecreasing(int*, int size);
void nonGrowth(int*, int size);
#endif
