/*
 * tablica2w.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

#define N   10
#define M   10
int main(int argc, char **argv)
{
	int tab2W[N][M];
    int i,j;
    
    srand(time(NULL));//inicjacja generatora liczb pseudolosowych
    for(i=0;i<N;i++){
        cout<<"====="<<"Tablica "<<i<<"====="<<endl;
        for(j=0;j<M;j++){
            cout<<i<<"-"<<j<<endl;
        tab2W[i][j]=rand() % 100;
        cout<< tab2W[i][j]<<endl;
        
        }}
	return 0;
}

