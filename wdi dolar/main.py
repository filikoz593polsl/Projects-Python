from bsoupdata import get_dolar
dolar = get_dolar()
print("1. Zamień złotówki na Dolary $")
print("2. Zamień Dolary $ na Złotówki")
print("===============================\n")
print("Wybierz: ")
choice = int(input())

if(choice == 1):
    print("Podaj ilość zł: ")
    zl = float(input())
    score = zl/dolar
    print(score, "$")
else:
    print("Podaj ilość $: ")
    dolarek = float(input())
    score = dolarek * dolar
    print(score, "zł")
