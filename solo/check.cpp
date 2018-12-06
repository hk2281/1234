#include<iostream>

using namespace std;

int check_condition()
{
    extern int unkndownNum, startGap, finishGap, startPoint;
    if(unkndownNum<startGap)
    {
        startPoint += ((startPoint-startGap)/2);
        cout << "sartPoint: "<< startPoint << endl;

        return startPoint;
    }
}