#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;
int main()
<<<<<<< HEAD
{   
    srand (time(0));
=======
{
    srand(static_cast<unsigned int>(time(0)));
>>>>>>> 05ab454b581e3aa4622ee327943c153de78e74b3
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
