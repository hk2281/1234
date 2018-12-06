#include <iostream>
#include <cstdlib>
#include "check.cpp"
using namespace std;

int unkndownNum, startGap, finishGap, startPoint;
int  main()
{   
    
    cout << "enter u secret number: " ; 
    cin >> unkndownNum; 
    cout << "enter range\nstart point  of range: " ; 
    cin >> startGap;
    cout << "finish point  of range: " ;
    cin >> finishGap;
    // нахождение точки входа
    startPoint = ((finishGap-startGap)/2)+startGap;
    cout << " start point: "<<startPoint<< endl;

    do
    {
        cout << "u number out of renge: ";
        cin >> unkndownNum;
        return unkndownNum;
    }while(true);

    cout << "dd";

    check_condition(); 
    
    return 0;
}

