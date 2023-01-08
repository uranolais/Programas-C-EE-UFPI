Algoritmo "Lista1Exercicio5"
// Autor(a)    : Jardeanne da Silva Ferreira

Var
idade, atual, nasc, x: real


Inicio
Escreval ("Digite sua idade")
Leia (idade)
Escreval ("Digite o ano atual")
Leia (atual)
Escreval ("Você ja fez aniversario esse ano?")
Escreval ("Digite 1 para SIM")
Escreval ("Digite 2 para NÃO")
leia (x)

Escolha x
Caso 1
nasc:=atual-idade
Escreval("Você nasceu em:", nasc)

Caso 2
nasc:=atual-idade-1
Escreval("Você nasceu em:", nasc)

Fimescolha
Fimalgoritmo