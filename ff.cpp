#include <iostream>
#include <string>

using namespace std;
int a,b,c;
int main()
{
    cin >> a;
    cin >> b;
    cin >> c;
    
    do
    {
        cout << "hi"<< endl;
        if (a<b)
        {
            cout <<"a; ";
            cin>>a;
        }
        
    }while(a>b && b >c);

    if(a >b )
    {
        cout<< "2"<< endl;    
    }   
    return 0;
}
