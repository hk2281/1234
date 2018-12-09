#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   
    setlocale(LC_ALL ,0);
    int unkndownNum, startGap, finishGap, startPoint,startPointOne,y;
    cout << "enter u secret number: " ; 
    cin >> unkndownNum; 
    cout << "enter range\nstart point  of range: " ; 
    cin >> startGap;
    cout << "finish point  of range: " ;
    cin >> finishGap;
    // нахождение точки входа
    startPoint = (finishGap+startGap)/2;
    cout << " start point: "<<startPoint<< endl;
    
    while(unkndownNum < startGap||unkndownNum > finishGap)
    {
        cout<<"u enter uncorect unknodown Number:";
        cin >> unkndownNum;
    }
    do
    {
        
        if(startPoint < unkndownNum) //если меньше sp un
        {
            
        }
        else if (startPoint > unkndownNum) // если больше  
        {
            
        }
    }while(unkndownNum != startPoint);
   


    return 0;
}

