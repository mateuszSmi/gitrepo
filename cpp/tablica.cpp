/*
 * tablica.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int rozmiar=5;
	int tablica[rozmiar];
    int i = 0;
    cout<<"Podaj 20 liczb: "<<endl;
    for(i=0;i<rozmiar;i++){
        cin>>tablica[i];
        }
    for(i=0;i<rozmiar;i++){
        cout<<tablica[i]<<" ";
        }
        cout<<endl;
    for(i=1;i<=rozmiar;i++){
        cout<<tablica[rozmiar - (i)]<<" ";
        }
	return 0;
}

