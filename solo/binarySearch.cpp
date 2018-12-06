#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{   
    int unkndownNum, startGap, finishGap, startPoint;
    cout << "enter range\nstart point  of range: " ; 
    cin >> startGap;
    cout << "finish point  of range: " ;
    cin >> finishGap;
    startPoint = ((finishGap-startGap)/2)+startGap;
    cout << " start point: "<<startPoint<< endl;
    
    
    if(unkndownNum<startGap)
    {
        startPoint += ((startPoint-startGap)/2);
        cout << "sartPoint: "<< startPoint << endl;
    }


    return 0;
}