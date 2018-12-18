// N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.
#include<iostream>

using namespace std;
int n,k;
int main (){
    cin >> n;
    cin >> k;
    k=k/n;
    cout << k ;
    return 0;
}