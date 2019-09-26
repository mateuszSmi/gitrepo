/*
 * petlecw3.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    int n =0;
    int m =0;
    cout<<"podaj liczbe do ktorej sie ma wyswietlac: ";
    cin >> m;
    for(n=0;n<m+1;n++) {
        cout<<pow(n, 2)<<" ";
    }
	return 0;
}

