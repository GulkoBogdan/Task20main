#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n;
    int x;
    int count = 0;

    srand(time(0));
    n = rand() % 100 + 1;

    cout
        << "The number is 1-100" << endl
        << "Guess the number for 20 try" << endl;

    do
    {
        cout << "\nInput  number\n\t-> ";
        cin >> x;
        if (x == n) cout << "You god damn right";{
         count++;}
          if ( x>n) {
              cout << "Number is lower";
        }
          if (x < n) {
              cout << "Number is higher";
          }
    } while (x != n && count < 20);


    return 0;
}