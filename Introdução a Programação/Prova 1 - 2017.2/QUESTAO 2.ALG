Algoritmo "Questao 2"

// Autor(a)    : Jardeanne da Silva Ferreira
// Data atual  : 26/09/2017
Var
   qtd, max, min, media: real

Inicio
   Escreval("Digite a quantidade atual em estoque:")
   Leia(qtd)
   Escreval (" ")
   Escreval("Digite a quantidade m?xima em estoque:")
   Leia(max)
   Escreval (" ")
   Escreval("Digite a quantidade minima em estoque:")
   Leia(min)
   Escreval (" ")
   
   media:=(qtd+max+min)/3

   se (qtd>max) entao
   Escreval ("QUANTIDADE ATUAL EXCEDE O M?XIMO.")
   fimse
   
   se(qtd>=media) entao
   Escreval ("N?O EFETUAR COMPRA!")

   senao
      Escreval("EFETUAR COMPRA!")
   fimse


Fimalgoritmo