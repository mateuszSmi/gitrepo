#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py



import os 

def czy_palidrom(tekst):
    ile = len(tekst)
    for i in range(ile // 2):
        if tekst[i] != tekst[-i-1]:
            return False

    return True
    
def czytaj_dane(plik):
    if not os.path.exists(plik):
        print('Plik niedostępny')
        return False
    teksty = []
    with open(plik, "r") as f:
        for linia in f:
            teksty.append(linia.strip())
        return teksty

def main(args):
    # tekst = input("podaj tekst ")
    teksty = czytaj_dane('dane01.txt')
    ile = 0
    for i in range (len(teksty)):
        if czy_palidrom(teksty[i]):
            ile += 1

        else:
            continue
    # ~if czy_palidrom(tekst):
        # ~print('to palindrom')
    # ~else:
        # ~print(' to nie jest palindrom')
    print (ile)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
