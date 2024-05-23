num1 = int(input("\nDigite um numero: "))
num2 = int(input("Digite outro numero: "))
maior = 0
menor = 0
if num1 > num2:
    maior = num1
    menor = num2
elif num1 == num2:
    print("Ambos sao iguais")
    maior = num1 = num2
    menor = num1 = num2
else:
    maior = num2
    menor = num1
print(f"Maior: {maior}\nMenor: {menor}")
