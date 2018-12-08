#include <iostream>
#include <cstdlib>
//#include "check.cpp"
using namespace std;

int  main()
{   
    int unkndownNum, startGap, finishGap, startPoint;
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
        if(unkndownNum < startGap || unkndownNum > finishGap)
        {
            cout << "u number out of renge: ";
            cin >> unkndownNum;
        }break;
    
    }while(true);

    if(unkndownNum < startGap)
    {
        startPoint += ((startPoint-startGap)/2);
        cout << "sartPoint: "<< startPoint << endl;
    } 
    
    return 0;
}

