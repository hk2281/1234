// Дано целое неотрицательное число N, определите число десятков в нем 
// (предпоследнюю цифру числа). Если предпоследней цифры нет, то можно 
// считать, что число десятков равно нулю.
#include<iostream>

using namespace std;
int k;
int main (){
    cin >> k;
    k/= 10;
    k%= 10;
    cout << k << endl;

    return 0;
}