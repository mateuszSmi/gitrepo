/*
 * palindrom.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

bool czy_palindrom(char tab[]){
    int rozmiar = strlen(tab)-1;
    for(int i = 0;i<rozmiar/2;i++){
        if(tab[i]==tab[rozmiar-i-1])
            ;
            else
            return false;
        
        }
    return true;
    }

void removeSpaces(char tab1[],char tab2[]){
    int rozmiar = strlen(tab1);
    for(int i = 0;i<rozmiar;i++){
        if(tab1[i] !=' '){
        tab2[i]=tab1[i];
            }
        }
    
    }
bool czy_palindrom2(char tab[]){
    int rozmiar = strlen(tab);
    for(int i = 0;i<rozmiar/2;i++){
        if(tab[i]==tab[rozmiar-i-1])
            ;
            else
            return false;
        
        }
    return true;
    }

int main(int argc, char **argv)
{
	
    int r = 20;
    char napis1[r];
    char napis2[r];
    cin.getline(napis1, r);
    removeSpaces(napis1,napis2);
    cout<<napis2<<endl;
    cout<<strlen(napis2)<<endl;
    if (czy_palindrom(napis2)){
        cout<< "To palindrom!"<<endl;
        }
        else{
        cout<<"To nie jest palindrom!";}
	return 0;
}

