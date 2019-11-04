/*
 * cwtab5.cpp
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
    for (i=0;i<int(strlen(tekst));i++){
        if(char(tekst[i])<123 &&char(tekst[i])>96){
        cout<<char((tekst[i])-32);
    }
    else if(char(tekst[i])<91 &&char(tekst[i])>64)
    cout<<char((tekst[i])+32);
    else
    cout<<tekst[i];
        }
        cout<<endl;
	return 0;
}

