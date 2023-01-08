Algoritmo "Lista2Exercicio4"
// Autor(a)    : Jardeanne da Silva Ferreira

Var
a: inteiro


Inicio

Escreval ("Digite um numero inteiro")
Leia (a)

se (a%3=0) e (a%5<>0) entao
Escreval("O numero digitado é divisivel por 3")
fimse

se (a%5=0) e (a%3<>0) entao
Escreval("O numero digitado é divisivel por 5")
fimse

se (a%3<>0) e (a%5<>0) entao
Escreval("O numero digitado não é divisivel por 3 e nem por 5")
fimse

se (a%3=0) e (a%5=0) entao
Escreval("O numero digitado é divisivel por 3 e por 5")
fimse

Fimalgoritmo