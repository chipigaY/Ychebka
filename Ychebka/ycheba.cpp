#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
const int N = 10;
int main() {
    setlocale(LC_ALL, "Russian");
    int A[N];
    int* ptr = A; // указатель на первый элемент массива

    srand(time(0));
    for (int i = 0; i < N; i++) {
        *ptr = rand() % 100; // использование указателя
        ptr++; // перемещение указателя к следующему элементу
    }
    std::cout << "сгенерированный массив: ";
    for (int* ptr = A; ptr < A + N; ++ptr) {
        std::cout << *ptr << " ";
    }
    int* maxPtr = A; //указатель на 1й элемент
    for (int ptr = 1; ptr < N; ++ptr) {
        if (*(A + ptr) > *maxPtr) {
            maxPtr = A + ptr; //обновление указателя на максимальный элемент
        }
    }
    if (maxPtr != A) {
        int temp = *maxPtr;
        *maxPtr = *A;
        *A = temp;
    }
    std::cout << "преобразованный массив: ";
    for (int ptr = 0; ptr < N; ++ptr) {
        std::cout << *(A + ptr) << " ";
    }
    std::cout << std::endl;
    return 0;
}
/*//#2
#include <iostream>
#include <cstdlib>
#include <ctime>   
int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 10; 
    double arr[size];    
    double* ptr = arr;   //указатель на 1й элемент массива
    double sum_negative = 0; 
    srand(time(0));
    for (double* p = ptr; p < ptr + size; ++p) {
        *p = static_cast<double>(rand()) / RAND_MAX * 200 - 100; // диапазон [-100, 100]
    }
    std::cout << "Сгенерированный массив: ";
    for (double* p = ptr; p < ptr + size; ++p) {
        std::cout << *p << " ";
    }
    std::cout << std::endl;
    // сумма отрицательных элементов
    for (double* p = ptr; p < ptr + size; ++p) {
        if (*p < 0) {
            sum_negative += *p;
        }
    }
    std::cout << "Сумма отрицательных элементов: " << sum_negative << std::endl;
    return 0;
}*/