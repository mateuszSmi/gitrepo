/*
 * cwiczenie2.cpp
 * 
 * Copyright 2020  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    cout<<"Podaj n: ";
    cin>>n;
    int silnia = 1;
    int i = 1;
    while(i<=n){
    silnia=silnia*i;
    i++;}
    cout<<silnia;
	return 0;
}

