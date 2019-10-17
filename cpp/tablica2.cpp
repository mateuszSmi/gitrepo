/*
 * tablica.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void pobierzOceny(int t[],int r){
    cout << "Podaj swoje oceny: "<<endl;
    int i;
        for(i=0;i<r;i++){
        cin>>t[i];
        }
    }
void srednia(int t[],int r){
    int i;
    int s;
    for(i=0;i<r;i++){
        s=+t[i];
        cout<<s;
    }
    }

int main(int argc, char **argv)
{
    cout <<"Ile podasz ocen? ";
    int rozmiar;
    cin>>rozmiar;
	int tablica[rozmiar];

    pobierzOceny(tablica,rozmiar);
    srednia(tablica,rozmiar);
        
	return 0;
}

