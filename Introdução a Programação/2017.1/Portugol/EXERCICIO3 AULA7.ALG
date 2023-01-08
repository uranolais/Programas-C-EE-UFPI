Algoritmo "Exercicio 3 Aula 7"
// Autor(a)    : Jardeanne da Silva Ferreira

Var
x, desconto, pago: real

Inicio
escreval("Digite o valor da compra:")
leia(x)

se((200<=x) e (x<=499.99))entao
desconto:=x*0.10
pago:=x*0.90
fimse

se(x>500)entao
desconto:=x*0.15
pago:=x*0.85
fimse

se(x<200)entao
desconto:=x*0.05
pago:=x*0.95
fimse

escreval("O valor total da compra foi de:",x)
escreval("O valor do desconto foi de:",desconto)
escreval("O valor a ser pago após o desconto foi de:",pago)

Fimalgoritmo