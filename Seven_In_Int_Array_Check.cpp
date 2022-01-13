#include <iostream>
using namespace std;

//global variables
int array[100];
int array_Index = 0;

// functions prtotype
string sevenBoom();

int main(){

    cout << "Enter the numbers in the array. (limit 100 numbers and enter -1 to stop)" 
    << endl;
    int input = 0;
    while (input != -1 && array_Index < 100)
    {
        cin >> input;
        array[array_Index] = input;
        array_Index ++;
    }

    cout <<endl
        << sevenBoom()
        << endl;

    return 0;
}

string sevenBoom(){

    array_Index = 0;
    while (array[array_Index] != -1 && array_Index < 100)
    {
        if (array[array_Index] == 7)
        {
            return "Boom!";
        }
        array_Index ++;
    }

    return "There is no 7 in the array.";
}