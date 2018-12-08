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
    
    while(unkndownNum < startGap||unkndownNum > finishGap)
    {
        cout<<"u enter uncorect unknodown Number:";
        cin >> unkndownNum;
    }

    cout <<"a"<< endl;

    // if(unkndownNum  startGap)
    // {
    //     int a = ((startPoint-startGap)/2) + startPoint;
    //     cout << "startPoint: "<< a << endl;
    // } 

    int a,b,c;
    cout << "a: "<< endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a<b)
    {
        cout <<"a: ";
        cin>>a;
    }
    
    return 0;
}

