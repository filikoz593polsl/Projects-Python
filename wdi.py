
import os
import forfunctions

print("From to: ")
print("1. Celsius degrees for Fahrenheit degrees")
print("2. Fahrenheit degrees for Celsius degrees")
print("3. Cebulions for V-dolars")
print("4. V-dolars for Cebulions")
print("5. Exit")
print("")

action = int(input())
invalidaction = int
if action<0 or action>5 :
    print("invalid choice")
    choice = False

    while choice is False:
        print("Try again, choose from 0 to 5")
        invalidaction = int(input())
        if invalidaction<=5 and invalidaction>0:
            choice = True



if action == 1 or invalidaction == 1:
    print("Please input amount of degrees")
    amount_degrees = float(input())
    forfunctions.celciusForFahrenheits(amount_degrees)

elif action == 2 or invalidaction == 2:
    print("Please input amount of degrees")
    amount_degrees = float(input())
    forfunctions.fahrenheitsForCelcius(amount_degrees)

elif action == 3 or invalidaction == 3:
    print("Please input amount of Cebulions")
    amount_cebulions = float(input())
    forfunctions.cebulionsForVdolars(amount_cebulions)


elif action == 4 or invalidaction == 4 :
    print("Please input amount of dolars")
    amount_dolars = float(input())
    forfunctions.vdolarsForCebulions(amount_dolars)

else :
    exit()












