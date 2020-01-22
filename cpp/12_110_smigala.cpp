/*
 * bez nazgfgfgfwy.cpp
 * 
 * Copyright 2020  <>
 */
void zamien(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void boubble_sort(int tab[], int n){
    int ile = 0;
    for (int i=n-1; i>0; i--){
        for (int j = 0; j<i; j++){
            //cout<<"Indeks j = "<<j<<" ";
            if (tab[j] < tab[j + 1]){
                zamien(tab[j], tab[j+1]);
                ile++;
            }
        }
        //cout<<endl;
    }
}

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{   
    int tab[4];
    int p = 0;
    int i = 0;
    cout<<"Podaj liczbe p: ";
    cin>>p;
    for(i=1;i<=p;i++){
        if(p%i==0){
            tab[j]=i;
            j++;
            //cout<<i<<", ";
            }
        }
    boubble_sort(tab,p);
   // cout<<tab[j-1];
   // cout<<tab[j-2];
   // cout<<tab[j-3];
   // cout<<tab[j-4];
	return 0;
}

