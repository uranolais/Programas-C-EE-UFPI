Algoritmo "Questao 1"

// Autor(a)    : Jardeanne da Silva Ferreira
// Data atual  : 26/09/2017
Var
   pri, seg, terc: real

Inicio
   Escreval("A Import?ncia de R$ 780.000,00 sera dividida entre tr?s ganhadores de um concurso, sendo que:")
   Escreval("O Primeiro ganhador receber? 46% do total.")
   Escreval("O Segundo ganhador receber? 32% do total.")
   Escreval("O Terceiro receber? o restante.")
   Escreval(" ")

   pri:=(780.000*46/100)
   seg:=(780.000*32/100)
   terc:=780.000-pri-seg

   Escreval("O primeiro ganhador ir? receber:", pri, " mil.")
   Escreval(" ")
   Escreval("O segundo ganhador ir? receber:", seg, " mil.")
   Escreval(" ")
   Escreval("O terceiro ganhador ir? receber:", terc, " mil.")


Fimalgoritmo