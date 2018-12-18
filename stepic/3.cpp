// Дано натуральное число, выведите его последнюю цифру.
#include<iostream>

using namespace std;
int a,b;
int main (){
    cin >> a;
    cin >> b;
    a=a%10;
    cout << a ;
    return 0;
}