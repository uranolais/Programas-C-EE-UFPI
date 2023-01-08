Algoritmo "Lista2Exercicio10"
// Autor(a)    : Jardeanne da Silva Ferreira

Var
altura, peso, PesoIdeal, PesoI,x : real


Inicio

Escreval ("Digite sua altura (Ex: 1.64)")
Leia (altura)
Escreval ("Digite seu peso")
Leia (peso)

se (altura<1.20) e (peso<60) entao
Escreval ("Categoria A")
fimse

se (altura>=1.20) e (altura<=1.70) e (peso<60) entao
Escreval ("Categoria B")
fimse

se (altura>1.70) e (peso<60) entao
Escreval ("Categoria C")
fimse

se (altura<1.20) e (peso>=60) e (peso<=90) entao
Escreval ("Categoria D")
fimse

se (altura>=1.20) e (altura<=1.70) e (peso>=60) e (peso<=90) entao
Escreval ("Categoria E")
fimse

se (altura>1.70) e (peso>=60) e (peso<=90) entao
Escreval ("Categoria F")
fimse

se (altura<1.20) e (peso>90) entao
Escreval ("Categoria G")
fimse

se (altura>=1.20) e (altura<=1.70) e (peso>90) entao
Escreval ("Categoria H")
fimse

se (altura>1.70) e (peso>=60) e (peso>90) entao
Escreval ("Categoria F")
fimse

Fimalgoritmo