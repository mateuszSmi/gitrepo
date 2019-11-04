/*
 * cwtab7.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
	cout<<"Kalkulator"<<endl;
    cout<<"Podaj znak działania: ";
    char i;
    float k=0;
    float l=0;
    cin>>i;
    cout<<"Podaj pierwszą liczbę: ";
    cin>>k;
    cout<<"Podaj drugą liczbę: ";
    cin>>l;
    if(i == '+'){
        cout<<"Wynik: "<<k+l;
        }
    else if(i == '-'){
        cout<<"Wynik: "<<k-l;
        }
    else if(i == '/'){
        cout<<"Wynik: "<<k/l;
        }
    else if(i == '*'){
        cout<<"Wynik: "<<k*l;
        }
	return 0;
}

