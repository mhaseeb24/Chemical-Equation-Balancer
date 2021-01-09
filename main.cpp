#include <bits/stdc++.h>
#include "Equation.h"

using namespace std;

int main()
{
    Equation E;
    cout<<"Enter the number of reactants : ";
    E.no_of_reactants();
    cout<<"Enter the number of products : ";
    E.no_of_products();
    E.get_reactants();
    E.get_products();
    cout<<"\nUnbalanced Reaction is : \n";
    E.unbalanced();
    return 0;
}
