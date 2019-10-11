/*
 * staz1.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>


using namespace std;
    float staz = 1;
    float zarobek = 1000;
    int lata = 0;

void awans (float &staz, float &zarobek, int &lata)
{
    for(lata; staz < lata; staz ++)
        {
            cout<<"Pracujesz "<<staz<<" lat  i zarabiasz "<<zarobek<<endl;
            zarobek += 0.1 * zarobek;

        }

}

void drukuj(int staz, float zarobek)
{
    cout<<"Pracujesz "<<staz<<" lat  i zarabiasz "<<zarobek;
    
}

int main(int argc, char **argv)
{
    cout << "Ile lat planujesz pracować?"<<endl;
    cin >> lata;
    awans(staz, zarobek, lata);
    drukuj(lata,zarobek);
    return 0;
}

