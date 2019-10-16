import os
import math

def celciusForFahrenheits(degrees):

    Fahrenheit = (degrees* 1.8) + 32
    print(Fahrenheit, "°F")

def fahrenheitsForCelcius(degrees):

    Celcius = (degrees - 32)/ 1.8
    print(Celcius, "°C")

def cebulionsForVdolars(money):
    dolarvalue = 0.258444
    dolars = money * dolarvalue
    print(dolars, "$")

def vdolarsForCebulions(money):
    dolarvalue = 0.258444
    pLN = money / dolarvalue
    print(pLN, "zł")