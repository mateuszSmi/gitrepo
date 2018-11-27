#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  lotek.py
import random


def main(args):
    ileliczb = 3
    liczby = []
    #for i in range(3):
    while ileliczb:
        liczba = random.randint(0,10)
        if not liczby.count(liczba):
            liczby.append(liczba)
            ileliczb -= 1 #dekrementacja 0 1
            
    #print(liczby)
    
    ileliczb = len(liczby)
    typy = set()
    while ileliczb:
        typ = int(input('Podaj typy: '))
        if typ not in typy:
            typy.add(typ)
            ileliczb -= 1 #dekrementacja 0 1
            
    print(typy)
            
    trafione = set(liczba) & typy
    
    if trafione:
        print('Trafione', trafione)
    else:
        print('spróbuj jeszcze raz!')
        
        
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
