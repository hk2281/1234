// Дано двузначное число. Выведите его первую цифру (число десятков)
#include<iostream>

using namespace std;
int k;
int main (){
    cin >> k;
    if (k>99){
        k/=10;
    }
    else{
        k=k/10;
    }
    
    cout << k ;
    return 0;
}