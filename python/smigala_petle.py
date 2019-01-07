#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle.py

def cw1():
    suma = 0
    liczba = int(input('Podaj liczbę: '))
    while suma < 75: 
        suma += liczba
        print(suma)
        liczba = int(input('Podaj liczbę: '))
    print()
    print('suma liczb : ', suma)
    
    pass
    


def main(args):
    cw1()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
