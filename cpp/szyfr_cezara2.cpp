/*
 * szyfr_cezara.cpp
 * Copyright 2020  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

void zamien(char tekst[30], int i){
    for (i=0;i<int(strlen(tekst));i++){
    if(char(tekst[i])<91 &&char(tekst[i])>64){
    cout<<char((tekst[i])+32);
    }
    else if(tekst[i]>95 && tekst[i] != '\0'){
    cout<<(char)(tekst[i]);
    }}
    }
    
void szyfruj(char tekst[30], int i, int y){
    for (i=0;i<int(strlen(tekst));i++){
        if(tekst[i]+y>=123){
        cout<<(char)((tekst[i])+y-26);
        }
        else{
            cout<<(char)((tekst[i])+y);}
        }}
void deszyfruj(char tekst1[30], int i, int y){
    for (i=0;i<int(strlen(tekst1));i++){
        if(tekst1[i]-y<=96){
        cout<<(char)((tekst1[i])-y+26);
        }
        else{
            cout<<(char)((tekst1[i])-y);}
        }}
int main(int argc, char **argv)
{
    char tekst[30];
    char tekst1[30];
    int i = 0;
    int x = 0;
    int y = 0;
    cout<<"Podaj szyfr do zakodwoania: "<<endl;
    cin.getline(tekst, 30);
    cout<<"Podaj szyfr do odkodowania: "<<endl;
    cin.getline(tekst1, 30);
    //zamien(tekst,0);
    cout<<endl<<"Podaj przesuniecie: "<<endl;
    cin>>x;
    y = x%26;
   // cout<<y;
    szyfruj(tekst,0,y);
    cout<<endl;
    deszyfruj(tekst1,0,y);
	return 0;
}

