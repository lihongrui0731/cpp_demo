#include "iostream"

int Sum(int a, int b) {
    return a + b;
}
void SumAndPrint(int a, int b) {
    int result = Sum(a, b);
    std::cout << result << std::endl;
}

int Multiple(int a, int b) {
    return a*b;
}
void MultipleAndPrint(int a, int b) {
    int result = Multiple(a, b);
    std::cout << result << std::endl;
}