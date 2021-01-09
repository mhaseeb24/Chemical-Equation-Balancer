#include<bits/stdc++.h>
#ifndef EQUATION_H
#define EQUATION_H
using namespace std;




class Equation
{
private:
    vector <string> reactants;
    vector <string> products;
    int r,p;
public:
    void no_of_reactants();
    void no_of_products();

    void get_reactants();
    void get_products();
    void unbalanced();
};

#endif // EQUATION_H
