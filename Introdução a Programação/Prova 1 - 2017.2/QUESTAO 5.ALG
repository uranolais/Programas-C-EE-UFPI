Algoritmo "QUESTAO 5"
// Autor(a)    : Jardeanne da Silva Ferreira

var
saq, trans, dep, opcao, saldo: real

inicio

saldo:=1000

enquanto (opcao <> 5) faca
Escreval ("ESCOLHA UMA DAS OPÇÕES:")
Escreval (" ")
Escreval ("1 - Saldo")
Escreval ("2 - Saque")
Escreval ("3 - Depósito")
Escreval ("4 - Transferência")
Escreval ("5 - Sair")
Escreval (" ")
Leia (opcao)

Escolha opcao
Caso 1
Escreval ("Seu Saldo é:", saldo)
Escreval(" ")

Caso 2
Escreval ("Digite o valor da quantia a ser sacada:")
Leia (saq)
saldo := saldo - saq
Escreval(" ")
Escreval ("Seu novo saldo é:", saldo)
Escreval(" ")

Caso 3
Escreval ("Digite o valor a ser depositado:")
Leia (dep)
saldo := saldo + dep
Escreval(" ")
Escreval ("Seu novo saldo é", saldo)
Escreval(" ")

Caso 4
Escreval ("Digite o valor a ser transferido:")
Leia (trans)
saldo := saldo - trans
Escreval(" ")
Escreval ("Seu novo saldo é", saldo)
Escreval(" ")

Caso 5
Escreval(" ")
Escreval ("SESSÃO FINALIZADA.")
Escreval(" ")

Outrocaso
Escreval(" ")
Escreval ("Opção Inválida.")
Escreval(" ")

fimescolha
fimenquanto
fimalgoritmo