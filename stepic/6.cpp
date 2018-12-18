// Дано целое трехзначное число. Найдите сумму его цифр
#include<iostream>

using namespace std;
int e,s,d,x;
int main (){
    cin >> d;
    e=d%10;
    s=d/100;
    x=(d/10)%10;
    cout<<s+e+x;
     
    return 0;
}