Algoritmo "Lista2Exercicio8"
// Autor(a)    : Jardeanne da Silva Ferreira

Var
altura, PesoIdeal, PesoI,x : real


Inicio

Escreval ("Digite sua altura (Ex: 1.64)")
Leia (altura)
Escreval ("Digite seu sexo")
Escreval ("1 para Feminino")
Escreval ("2 para Masculino")
Leia (x)

Escolha x
caso 1
PesoIdeal:=62.1*altura
PesoI:=PesoIdeal - 44.7
Escreval ("Seu peso ideal é:", PesoI)

caso 2
PesoIdeal:=72.7*altura
PesoI:=PesoIdeal – 58
Escreval ("Seu peso ideal é:", PesoI)

fimescolha

Fimalgoritmo