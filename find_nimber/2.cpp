#include <iostream>

using namespace std;

int main()
{   
    int userSecretNumber;
    setlocale(LC_ALL, "Russian");
    cout << "Enter number in renge 0 to 100: "<< endl;
    cin >> userSecretNumber;
    int startPoint = 50, x,ourNumber;
    do
    {   
        cout << "you number is: "<< startPoint ;
        if(startPoint<userSecretNumber)
        {
            x=(100-50)/2;
            x+startPoint;
        }
        else if(startPoint>userSecretNumber)
        {

        }
    }while(ourNumber != userSecretNumber);
    

    
}