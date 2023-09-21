#pragma once
#include <stddef.h>
#include "maybe.h"
#define NO_FUCK_YOU NULL

typedef struct {
    size_t size;
    int* address;
} Array;

Array createArray();
int index_overflows(Array array, size_t index);
MaybeInt tryGetElement(Array array, size_t index);
int getElement(Array array, size_t index);
int setElement(Array array, size_t index, int value);
void resizeArray(Array* array, size_t size);
int addElement(Array* array, int element);
int shoveElement(Array* array, size_t index, int element);
int popElement(Array array, size_t amount);
int removeElement(Array array, size_t index);
MaybeSize_t tryFindElement(Array array, int value);
size_t findElement(Array array, int value);
Array cloneArray(Array array);
void resetArray(Array array);
void printArray(Array array);