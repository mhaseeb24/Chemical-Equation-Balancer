#include"Equation.h"
#include<bits/stdc++.h>
using namespace std;

void Equation :: no_of_reactants()
    {
        cin>>r;
    }
void Equation :: no_of_products()
    {
        cin>>p;
    }

void Equation :: get_reactants()
    {
        for(int i = 1; i <= r; i++)
        {
            string temp;
            cout<<"Enter reactant no. "<<i<<":  ";
            cin>>temp;
            reactants.push_back(temp);
        }
    }

void Equation :: get_products()
    {
        for(int i = 1; i <= p; i++)
        {
            string temp;
            cout<<"Enter product no. "<<i<<":  ";
            cin>>temp;
            products.push_back(temp);
        }
    }

void Equation :: unbalanced()
    {
        int m1=0,n1=0;
        for(const auto &e:reactants)
        {
            cout<<e;
            if(m1<reactants.size()-1)
            {
                cout<<" + ";
                m1++;
            }
        }
        cout<<" ---> ";
        for(const auto &e:products)
        {
            cout<<e;
            if(n1<products.size()-1)
            {
                cout<<" + ";
                n1++;
            }
        }
    }


