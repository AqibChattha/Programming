#include<iostream>
using namespace std;

int main(){

    int Variable1, Variable2, Variable3, Variable4;
    int Variable1_order = 4,
        Variable2_order = 4,
        Variable3_order = 4,
        Variable4_order = 4;

    cout << "Enter the 1st number : ";
    cin >> Variable1;
    cout << "Enter the 2nd number : ";
    cin >> Variable2;
    cout << "Enter the 3rd number : ";
    cin >> Variable3;
    cout << "Enter the 4th number : ";
    cin >> Variable4;
    
    if (Variable1 >= Variable2)
    {
        Variable2_order--;
    }else
    {
        Variable1_order--;
    }
    
    if (Variable1 >= Variable3)
    {
        Variable3_order--;
    }else
    {
        Variable1_order--;
    }
    
    if (Variable2 >= Variable3)
    {
        Variable3_order--;
    }else
    {
        Variable2_order--;
    }
    
    if (Variable1 >= Variable4)
    {
        Variable4_order--;
    }else
    {
        Variable1_order--;
    }

    if (Variable4 >= Variable3)
    {
        Variable3_order--;
    }else
    {
        Variable4_order--;
    }

    if (Variable4 >= Variable2)
    {
        Variable2_order--;
    }else
    {
        Variable4_order--;
    }
    
    cout << endl
        << "The order of numbers increasing from smallest to largest is:" << endl
        << "1st number is in " << Variable1_order << " place" << endl
        << "2nd number is in " << Variable2_order << " place" << endl
        << "3rd number is in " << Variable3_order << " place" << endl
        << "4th number is in " << Variable4_order << " place" << endl;

    return 0;
}