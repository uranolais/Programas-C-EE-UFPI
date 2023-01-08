Algoritmo "QUESTAO 3"
// Autor(a)    : Jardeanne da Silva Ferreira
// Data atual  : 11/04/2017
Var
idade, x : inteiro


Inicio
Escreval("Digite a idade de um atleta:")
Leia (idade)
Escreval(" ")
Escreval(" FAIXA ETÁRIA            CATEGORIA")
Escreval(" de 5 a 10 anos          INFANTIL")
Escreval(" de 11 a 17 anos         JUVENIL")
Escreval(" de 18 a 30 anos         PROFISSIONAL")
Escreval(" acima de 30 anos        SÊNIOR")

se (idade < 5) entao
x:=1
fimse

se (5<= idade) e (idade <=10) entao
x:=2
fimse

se (11<= idade) e (idade <=17) entao
x:=3
fimse

se (18<= idade) e (idade <=30) entao
x:=4
fimse

se (30 < idade) e (idade <=99) entao
x:=5
fimse

se (idade > 99) entao
x:=6
fimse

Escolha x
Caso 1
Escreval("")
Escreval("O ATLETA NÃO TEM IDADE SUFICIENTE.")


Caso 2
Escreval("")
Escreval("O ATLETA SE ENQUADRA NA CATEGORIA INFANTIL.")


Caso 3
Escreval("")
Escreval("O ATLETA SE ENQUADRA NA CATEGORIA JUVENIL.")


Caso 4
Escreval("")
Escreval("O ATLETA SE ENQUADRA NA CATEGORIA PROFISSIONAL.")


Caso 5
Escreval(" ")
Escreval("O ATLETA SE ENQUADRA NA CATEGORIA SÊNIOR.")

OutroCaso
Escreval(" ")
Escreval("O ATLETA SE ENQUADRA NA CATEGORIA SERA SE TA MORTO ?")

fimescolha

Fimalgoritmo