Algoritmo "Lista1Exercicio5"
// Autor(a)    : Jardeanne da Silva Ferreira

Var
idade, atual, nasc, x: real


Inicio
Escreval ("Digite sua idade")
Leia (idade)
Escreval ("Digite o ano atual")
Leia (atual)
Escreval ("Voc? ja fez aniversario esse ano?")
Escreval ("Digite 1 para SIM")
Escreval ("Digite 2 para N?O")
leia (x)

Escolha x
Caso 1
nasc:=atual-idade
Escreval("Voc? nasceu em:", nasc)

Caso 2
nasc:=atual-idade-1
Escreval("Voc? nasceu em:", nasc)

Fimescolha
Fimalgoritmo