/*
 * euklides.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int a, b, i;
    a = b = i = 0;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
    cin>>b;
    while(a!=b){
        i++;
        if(a>b){
            a=a-b;
            }
        else{
        b=b-a;
        }
    }
    cout<<"Największy wspólny dzielnnik to: "<<a<<endl;
    cout<<"Liczba powtorzeń:"<<i;
	return 0;
}

