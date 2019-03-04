#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py

import os

def czy_palindrom(tekst):
    ile = len(napis)
    for i in range(ile // 2):
        if tekst[i] != tekst[-i-1]:
            return False
    return True


def czytaj_dane(plik):
    if not os.path_exists(plik):
        print('plik niedostepny')
        return False
        
    teksty = []
    with open(plik, "r") as f:
        for linia in f:
            teksty.append(linia.strip())
    return teksty
    
    


def main(args):
    #tekst = input("Podaj tekst:")
    teksty = czytaj_dane('dane01.txt')
    ile = 0
    # ~if czy_palindrom(tekst):
        # ~print('To palindrom!')
    # ~else:
        # ~print('To nie palindrom!')
    print(teksty)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
