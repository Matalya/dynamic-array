#include "maybe.h"
#include "array.h"


int main() {
    Array numbers = createArray();
    for (int i = 0; i < 5; i++) {
        addElement(&numbers, 1235);
    }
    shoveElement(&numbers, 2, 69);
    printArray(numbers);
}