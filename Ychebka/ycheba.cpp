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
        *(A + ptr) = std::rand() % 101; //�� 0 �� 100
    }
    std::cout << "��������������� ������: ";
    for (int* ptr = A; ptr < A + SIZE; ++ptr) {
        std::cout << *ptr << " ";
    }
    //����� ����������� ��������
    int* maxPtr = A; //��������� �� 1� �������
    for (int ptr = 1; ptr < SIZE; ++ptr) {
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
    double* ptr = arr;   //��������� 
    double sum_negative = 0; // �������� ����� ���.�����
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        *(ptr + i) = 200.0 * rand() / RAND_MAX - 100.0; //�������� [-100, 100]
    }
    std::cout << "��������������� ������: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    //��� ������������� ���������
    for (int i = 0; i < size; ++i) {
        if (*(ptr + i) < 0) {
            sum_negative += *(ptr + i);
        }
    }
    std::cout << "����� ������������� ���������: " << sum_negative << std::endl;
    return 0;
}