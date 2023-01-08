Algoritmo "Exercicio 2 Aula 7"
// Autor(a)    : Jardeanne da Silva Ferreira

Var
x,y,z, menor, medio, maior,conta: inteiro


Inicio
escreval("Digite 3 valores inteiros distintos:")
leia(x,y,z)

se ((x<y) e (x<z) e (y<z)) entao
menor:=x
medio:=y
maior:=z
conta:=(menor*maior)+medio
escreval("o valor da conta eh:", conta)
fimse

se ((x<y) e (x<z) e (y>z)) entao
menor:=x
medio:=z
maior:=y
conta:=(menor*maior)+medio
escreval("o valor da conta eh:", conta)
fimse

se ((x>y) e (x>z) e (y<z)) entao
menor:=y
medio:=z
maior:=x
conta:=(menor*maior)+medio
escreval("o valor da conta eh:", conta)
fimse

se ((x>y) e (x>z) e (y>z)) entao
menor:=z
medio:=y
maior:=x
conta:=(menor*maior)+medio
escreval("o valor da conta eh:", conta)
fimse

se ((y>x) e (y>z) e (x>z)) entao
menor:=z
medio:=x
maior:=y
conta:=(menor*maior)+medio
escreval("o valor da conta eh:", conta)
fimse

se ((z>y) e (z>x) e (x>y)) entao
menor:=y
medio:=x
maior:=z
conta:=(menor*maior)+medio
escreval("o valor da conta eh:", conta)
fimse


Fimalgoritmo
