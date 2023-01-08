Algoritmo "QUESTAO 4"
// Autor(a)    : Jardeanne da Silva Ferreira
// Data atual  : 26/09/2017
Var
   bru, liq: real

Inicio
   Escreval("DIGITE O VALOR DO SALARIO BRUTO E INTEIRO:")
   Leia (bru)

   se (bru < 1500) entao
   liq:=(bru*92/100)
   senao
   liq:=(bru*84/100)
   fimse


   Escreval(" ")
   Escreval("O seu salário liquido é de:", liq, " reais.")
   Escreval(" ")



Fimalgoritmo