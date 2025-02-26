/*//#1
#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 10;
    int A[SIZE];
    srand(time(0));
    for (int ptr = 0; ptr < SIZE; ++ptr) {
        *(A + ptr) = std::rand() % 101; //от 0 до 100
    }
    std::cout << "сгенерированный массив: ";
    for (int* ptr = A; ptr < A + SIZE; ++ptr) {
        std::cout << *ptr << " ";
    }
    //поиск наибольшего элемента
    int* maxPtr = A; //указатель на 1й элемент
    for (int ptr = 1; ptr < SIZE; ++ptr) {
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
    for (int ptr = 0; ptr < SIZE; ++ptr) {
        std::cout << *(A + ptr) << " ";
    }
    std::cout << std::endl;
    return 0;
}*/
//#2
#include <iostream>
#include <cstdlib> 
#include <ctime>   
int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 10; 
    double arr[size];    
    double* ptr = arr;   //указатель 
    double sum_negative = 0; // хранение суммы отр.чисел
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        *(ptr + i) = 200.0 * rand() / RAND_MAX - 100.0; //диапазон [-100, 100]
    }
    std::cout << "сгенерированный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    //сум отрицательных элементов
    for (int i = 0; i < size; ++i) {
        if (*(ptr + i) < 0) {
            sum_negative += *(ptr + i);
        }
    }
    std::cout << "сумма отрицательных элементов: " << sum_negative << std::endl;
    return 0;
}