Algoritmo "Questao 2"
// Descrição   : Tranformar segundos em minutos
// Autor(a)    : Jardeanne da Silva Ferreira
// Data atual  : 11/04/2017

// EDIT 1: CAROS CALOUROS, HA UM MODO MAIS SIMPLES DE RESOLUÇÃO, UTILIZANDO RESTO.

//EDIT 2: isso aqui ta fumado, pq eu sou fumada, vlw flw

Var
hora, min, segu, segus: real
seg, horas, mins: inteiro


Inicio
Escreval("Digite um valor temporal em segundos")
Leia(seg)

se (seg>3600) entao
hora:= seg/3600
horas:= seg div 3600
min:= (seg - horas*3600)/60
mins:= (seg - horas*3600) div 60
segus:= seg - horas*3600 - mins*60
escreva("São:",horas)
escreva (":",mins)
escreva(":", segus)
fimse

se(seg<3600) e (seg>60) entao
min:= seg/60
mins:= seg div 60
segus:= seg - mins*60
escreva("São 0:",mins)
escreva(":", segus)
 fimse

se(seg<61) entao
escreva ("São 00: 00:",seg)
fimse

Fimalgoritmo

