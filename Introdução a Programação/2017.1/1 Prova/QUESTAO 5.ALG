Algoritmo "QUESTAO 5"
// Descrição   : Aplicação da variavel de controle
// Autor(a)    : Jardeanne da Silva Ferreira
// Data atual  : 11/04/2017
Var
   a, b, I: inteiro


Inicio
   Escreval("Digite 5 valores inteiros:")
   
   Para I:=1 ate 5 faca
      Leia(a)

      se (a>10) entao
         b:=a-5
         Escreval("Resultado:", b)
      senao
         b:=a+2
         Escreval ("Resultado:", b)
      fimse

   fimpara


Fimalgoritmo