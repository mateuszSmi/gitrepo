#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides.py

def nwdv1(a, b):
    """wersja klasyczna"""
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    #print(a)
    return a
def nwdv2(a, b):
    """wesja optymalna"""
    while a > 0:
        a = a % b
        b = b - a

    return b

def testuj():
    assert(nwdv1(20, 4) == 4)
    assert(nwdv2(20, 4) == 4)
    assert(nwdv2(11, 4) == 1)

def main(args):
    a = int(input('Podaj bok a:'))
    b = int(input('Podaj bok b:'))
    #print(nwdv(a, b))
    testuj()
    #print(nwdv2(a, b))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
