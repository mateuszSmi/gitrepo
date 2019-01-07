#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczba_pierwsza.py
#
#1 pobierz liczbe n od uzytkownika
#2 zmiennej i przypis 2
#3 jezeli i * i<= n przejdz do nastepnego punktu
#4 jezeli i dzielone modulo przez i rowna sie 0 przejdz do nast punktu
#5 wydrukuj komunikat "złozona" i zakoncz program
#6 zwieksz i o 1 wroc do punktu 3 
#7 wydrukuj komunikat "liczba pierwsza"

#exit(0)
#return 0

def Liczba_Pierwsza():
    i = 2
    n = int(input("Podaj liczbę: "))
    if i * i <= n:
        while n % i == 0:
            print("Liczba złożona")
            i += 1
    else:
        print("Liczba pierwsza")
    return 0
        


def main(args):
    Liczba_Pierwsza()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
