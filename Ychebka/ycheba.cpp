#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
const int N = 10;
int main() {
    setlocale(LC_ALL, "Russian");
    int A[N];
    int* ptr = A; // ��������� �� ������ ������� �������

    srand(time(0));
    for (int i = 0; i < N; i++) {
        *ptr = rand() % 100; // ������������� ���������
        ptr++; // ����������� ��������� � ���������� ��������
    }
    std::cout << "��������������� ������: ";
    for (int* ptr = A; ptr < A + N; ++ptr) {
        std::cout << *ptr << " ";
    }
    int* maxPtr = A; //��������� �� 1� �������
    for (int ptr = 1; ptr < N; ++ptr) {
        if (*(A + ptr) > *maxPtr) {
            maxPtr = A + ptr; //���������� ��������� �� ������������ �������
        }
    }
    if (maxPtr != A) {
        int temp = *maxPtr;
        *maxPtr = *A;
        *A = temp;
    }
    std::cout << "��������������� ������: ";
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
    double* ptr = arr;   //��������� �� 1� ������� �������
    double sum_negative = 0; 
    srand(time(0));
    for (double* p = ptr; p < ptr + size; ++p) {
        *p = static_cast<double>(rand()) / RAND_MAX * 200 - 100; // �������� [-100, 100]
    }
    std::cout << "��������������� ������: ";
    for (double* p = ptr; p < ptr + size; ++p) {
        std::cout << *p << " ";
    }
    std::cout << std::endl;
    // ����� ������������� ���������
    for (double* p = ptr; p < ptr + size; ++p) {
        if (*p < 0) {
            sum_negative += *p;
        }
    }
    std::cout << "����� ������������� ���������: " << sum_negative << std::endl;
    return 0;
}*/