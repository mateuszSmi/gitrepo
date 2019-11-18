/*
 * euklides2.cpp
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
	while(a>0){
        i++;
        a=a%b;
        b=b-a;
    }
        cout<<"NWD: "<<b<<endl;
        cout<<"Liczba powtorzen: "<<i;
	return 0;
}

