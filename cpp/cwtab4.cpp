/*
 * cwtab4.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#include <cstring>
using namespace std;
#define rozmiar 15
int main(int argc, char **argv)
{
	char tekst[rozmiar];
    int i = 0;
    cout<<"Podaj zdanie: "<<endl;
    cin.getline(tekst, rozmiar);
    for (i=strlen(tekst);i>0;i--){
        cout<<tekst[i-1];
        }
            cout<<endl;

	return 0;
}

