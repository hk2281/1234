#include <iostream>

using namespace std ;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;
    cout<< "\twelcome to Guess my number\n\n";

    do 
    {
        cout<< "Enter a guess: ";
        cin >> guess;
        ++tries;
        if(guess > secretNumber)
        {
            cout<< "Too high\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low\n\n";
        }   
        else 
        {
            cout << "\nThat's is you number" << tries << "exelent\n";
        }
    }while (guess != secretNumber);

    return 0;
}