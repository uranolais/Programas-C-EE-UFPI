Algoritmo "QUESTAO 3"
// Descrição   : Notas de um aluno
// Autor(a)    : Jardeanne da Silva Ferreira
// Data atual  : 11/04/2017
Var
   a,b,c, mediap, codigo: real
   resultado: caracter

Inicio
   Escreval("Digite o codigo do aluno:")
   Leia(codigo)
   Escreval("Digite três notas do aluno:") //notas distintas
   Leia(a,b,c)

   se (a>b) e (a>c) entao
      mediap:=(a*4 + b*3 + c*3)/10
   fimse

   se (b>a) e (b>c) entao
      mediap:=(a*3 + b*4 + c*3)/10
   fimse

   se (c>a) e (c>b) entao
      mediap:=(a*3 + b*3 + c*4)/10
   fimse
   
   se(a=c) e (a>b) entao
    mediap:=(a*4 + b*3 + c*4)/11
   fimse
   
   se(a=b) e (a>c) entao
   mediap:=(a*4 + b*4 + c*4)/11
   fimse
   
   se(b=c) e (b>a) entao
   mediap:=(a*3 + b*4 + c*4)/11
   fimse
   
   se(b=c) e (b<a) entao
   mediap:=(a*4 + b*3 + c*3)/10
   fimse
   
   se(a=c) e (a<b) entao
   mediap:=(a*3 + b*4 + c*3)/10
   fimse
   
   se(b=a) e (c>a) entao
   mediap:=(a*3 + b*3 + c*4)/10
   fimse
   
   Escreval("Aluno:",codigo)
   Escreval("Primeira nota:", a)
   Escreval("Segunda nota:", b)
   Escreval("Terceira nota:", c)
   Escreval("Media:", mediap)

   se (mediap>=5) entao
      Escreval("O aluno foi APROVADO")
   senao
      Escreval("O aluno foi REPROVADO")
   fimse


Fimalgoritmo