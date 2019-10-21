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
void koduj(char tabzn[],int rozmiar=11){
    cout<<"Podaj napis: ";
    cin>>tabzn;
    for(int i=0;i<rozmiar;i++){
        cout<<","<<(int)tabzn[i];
    }}
void dekoduj(int tabzn[],int rozmiar=11){
    for(int i=0;i<rozmiar;i++){
        cout<<tabzn[i]<<"-"<<(char)tabzn[i]<<endl;
    }}


//void litery2liczby(char tabzn[],int rozmiar){
   // for(int i=0;i<rozmiar;i++){
   //     cout<<tabzn[i]<<"-"<<(int)tabzn[i]<<endl;
   // }}
int main(int argc, char **argv)
{
    int rozmiar=11;
    char napis[11];

  //  ascii();
 //   litery2liczby(napis,rozmiar);
 koduj(napis,rozmiar);
 cout<<endl<<endl;
 int liczby[11]={87,105,116,97,109,32,99,105,101};
 dekoduj(liczby,rozmiar);
	return 0;
}

