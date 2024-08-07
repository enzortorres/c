from time import sleep

string = 'Eu te amo meu amor, você é tudo pra mim! <3'

lst = []
print("TYPE RACER v2 | Made by Mudinho\n")
for letter in string:
    lst.append(letter)
for c in range(len(lst)):
    print(lst[c], end='')
    sleep(0.1)