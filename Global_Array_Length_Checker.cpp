#include <iostream>
using namespace std;

// intialize global array
char array[100];
int array_Index = 0;

// functions prototype
int get_Global_Array_Length();
bool is_Odd_Check(int integer);

int main(){

    string input;
    cout << "Enter the string to check its length :  ";
    cin.getline(array, 99);

    int length = get_Global_Array_Length();
    cout << "The length of the string is : " << length 
        << endl;
    if (is_Odd_Check(length))
    {
        cout << "The string's length is odd."
            << endl;
    }else
    {
        cout << "The string's length is even."
            << endl;
    }

    return 0;
}

int get_Global_Array_Length(){

    array_Index = 0;
    while (array[array_Index] != '\0')
    {
        array_Index ++;
    }

    return array_Index;
}

bool is_Odd_Check(int integer){

    if (integer % 2 == 0)
    {
        return false;
    }

    return true;
}