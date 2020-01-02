/*
 * znaki.cpp
 * 
 * Copyright 2019  <>
 * znakiem kończącym tablice znakową jest \0
 */


#include <iostream>

using namespace std;

void ascii(){
    int i =0;
    for(i=65;i<91;i++){
        cout<<i<<"-"<<char(i)<<endl;
        }
    }
void koduj(char tabzn[],int rozmiar){
    cout<<"Podaj napis: ";
    cin>>tabzn;
    for(int i=0;i<rozmiar;i++){
        cout<<(int)tabzn[i]<<",";
    }}
    
void dekoduj(int liczby[],int rozmiar){
    cout<<"Podawaj po kolei znaki: "<<endl;
    for(int i=0;i<rozmiar;i++){
        cin>>liczby[i];
    }
    for(int i=0;i<rozmiar;i++){
        cout<<(char)liczby[i];
    }
    }



//void litery2liczby(char tabzn[],int rozmiar){
   // for(int i=0;i<rozmiar;i++){
   //     cout<<tabzn[i]<<"-"<<(int)tabzn[i]<<endl;
   // }}
int main(int argc, char **argv)
{
    int rozmiar; 
    cout<<"Podaj rozmiar: "<<endl;
    cin>>rozmiar;
    char napis[rozmiar];
    int liczby[rozmiar];


  //  ascii();
 //   litery2liczby(napis,rozmiar);
 koduj(napis,rozmiar);
 cout<<endl<<endl;
 dekoduj(liczby,rozmiar);

	return 0;
}

