#define ex3
#include <stdio.h>



#ifdef ex1

///1)	Mostre todos os números ímpares de 1 até 100.Utilize o laço while.


main(){

int N=0,cont=0;

while(cont<100){
N=N+1;
if(N%2!=0)
printf("%d \n",N);
cont++;
}

}
#endif

#ifdef ex2
///2)	Mostre todos os números ímpares de 50 até 300.Utilize o laço do while.

main(){

int N=50;

do{
N=N+1;
if(N%2!=0)
printf("%d \n",N);
}while(N<300);

}

#endif // ex2


#ifdef ex3
///3)	Receba um número inteiro e mostre os números pares de 2 até esse inteiro. Utilize o laço do while.


main(){
int K=0,N=0,cont=0;
do{
printf("Digite um numero inteiro \n ");
scanf("%d",&K);
if(K<0)
printf("Digite um numero maior que 0 \n");
}while(K<0);

do{
N=N+2;
cont++;
printf("%d \n",N);
}while(N<K);
}

#endif // ex3


#ifdef ex4
///4)	Pergunte ao usuário quantos alunos tem na sala dele. Em seguida, através de um laço do while, peça ao usuário para que entre com as notas de todos
///os alunos da sala, um por vez.
///Exiba a média da turma e quantas notas foram digitadas maiores ou iguais a 6.


main(){
int K=0,N=0,cont=0,N2=0;
float SOMA=0,MEDIA=0;
do{
printf("Digite a quantidade de alunos da sua sala: \n");
scanf("%d",&K);
if(K<0)
printf("digite um numero maior que 0 \n");
}while(K<0);


do{
do{
printf("\n Digite a nota do %d aluno : \n",cont+1);
scanf("%d",&N);
if(N<0 || N>10)
printf("\n Digite um numero maior que o e menor que 10 ");
}while(N<0 || N>10);
cont++;
SOMA=SOMA+N;
MEDIA=SOMA/K;
if(N>=6)
N2=N2+1;

}while(cont<K);

printf("A SOMA E %f \n ",SOMA);
printf("A media e %f \n",MEDIA);
printf("%d notas foram iguais ou maiores que 6 \n",N2);


}

#endif // ex4


#ifdef ex5

///5)	Solicite ao usuário números quaisquer até que a soma desses números digitados seja inferior a 20.
/// Utilize o laço while.

main(){
int N=0, SOMA=0;

while(SOMA<20) {
printf("Digite um numero qualquer: \n");
scanf("%d",&N);
SOMA=SOMA+N;
}


printf("A soma passou de 20 e eh %d ",SOMA);

}
#endif // ex5


#ifdef ex6

///6)	Calcule e mostre a média dos K primeiros pares e múltiplos de cinco.
///OBS: K representa a quantidade de números pares solicitados via teclado pelo   usuário. Os números pares deverão ser gerados pelo programador. Utilize o laço while para a entrada da quantidade K e um laço for para o cálculo da média.
		2, 4, 6, 8, 10,...

main(){
int K=0,NUM=0,MEDIA=0,SOMA=0,cont,i=0;

while(K<=0)
{printf("Digite uma quantidade K de numeros pares \n");
scanf("%d",&K);
if(K<=0)
{printf("DIGITE UM NUMERO MAIOR QUE 0 \n");}
}


for(cont=0;cont<K;cont++){

NUM=NUM+2;
printf("%d \n",NUM);
if(NUM%2==0 && NUM%5==0){
i=i+1;
SOMA=SOMA+NUM;
MEDIA=SOMA/i;}

}

printf("A soma dos numeros pares e multiplos de cinco  e %d ",SOMA);
printf("A media dos numeros e multiplos de cinco  %d \n",MEDIA);

}

#endif // ex6

#ifdef ex7
///7)	Leia um número inteiro representado pela variável N até que N seja igual a zero. Exiba uma mensagem informando se o número é par ou ímpar.


main(){
int N;
do{
printf("Digite um numero \n");
scanf("%d",&N);
if(N%2==0)
printf("O numero e par \n ");
else
printf("O numero e impar \n");
}while(N!=0);

}


#endif // ex7

#ifdef ex8
///8)	Receba K números inteiros quaisquer, K representa a quantidade de termos solicitada pelo usuário e cada termo pode ser representado pela variável N. Exiba a quantidade de números positivos recebidos e a média dos números ímpares. .
///Utilize o laço do while para a entrada da quantidade K e um laço while para efetuar os cálculos solicitados.


main(){
int K=0, NUM=0,cont=0,POSITIVO=0,soma=0,i=0,media=0,soma2=0;

do{
printf("Digite um numero K maior que 0: \n ");
scanf("%d",&K);
if(K<=0)
printf("Erro, tente novamente \n");
}while(K<=0);

while(cont<K){
NUM=NUM+1;
printf("Digite o %d numero \n ",cont+1);
scanf("%d",&NUM);
cont++;
if(NUM%2!=0){
i++;
soma=soma+NUM;
media=soma/i;
printf("a soma e %d \n",soma);}
else{
POSITIVO++;
soma2=soma2+POSITIVO;}
}

printf("A quantidade de numeros positivos recebida e: %d \n",POSITIVO);
printf("A media dos numeros impares e: %d",media);

}




#endif // ex8

#ifdef ex9
///9)	Receba K números quaisquer, K representa a quantidade de termos solicitada pelo usuário e cada termo pode ser representado pela variável N. Exiba o maior número digitado.
///Utilize o laço do while para a entrada da quantidade K e um laço for para exibir o maior número.


main(){

int K=0,NUM,cont,MAIOR;

do{
printf("Digite um numero K qualquer ");
scanf("%d",&K);
if(K<=0)
printf("Digite um numero maior que 0");
}while(K<=0);

for(cont=0;cont<K;cont++){
printf("Digite o %d termo \n",cont+1);
scanf("%d",&NUM);
if(cont==0)
MAIOR=NUM;
else
if(NUM>MAIOR)
MAIOR=NUM;
}
printf("\n O maior numero e %d ",MAIOR);








#endif // ex9


#ifdef ex10
///10)	Receba dois números. Calcule e mostre:
///a)	A soma dos números pares desse intervalo, incluindo os números digitados;
///b)	A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados.


main(){
   int cont,valor1,valor2,soma=0,M=0;

   printf("Digite um valor: ");
   scanf("%d",&valor1);
   printf("Digite outro valor: ");
   scanf("%d",&valor2);
   if(valor2<valor1){
     cont=valor1;
     valor1=valor2;
     valor2=cont;
   }
   for(cont=valor1;cont<=valor2;cont++){
     printf("\n %d ",cont);
     if(cont%2==0){
        soma=soma+cont;}
     else{
      M=M*cont;
      printf("\n A multiplicacao dos numeros impares do intervalo incluindo os numeros digitados e %d",M);
     }
        }


printf("\n A soma dos numeros pares eh\n %d",soma);

getch();
 }


#endif // ex10


#ifdef ex11
/*11)Receba a quantidade de salários de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Salário armazena cada uma dos K salários digitados. Calcule e mostre a somatória dos salários superiores a 3 salários mínimos e
inferior ou igual a 7 salários mínimos.
Exiba também o maior e o menor salário encontrado.
Utilize o laço while para a entrada da quantidade K e um laço while para efetuar os cálculos e as comparações solicitadas*/


main(){
int K=0,cont=0,MAIOR=0;
float SALARIO,SOMA=0;

while(K<=0){
printf("Digite uma quantidade de salarios: \n ");
scanf("%d",&K);
if(K<=0)
printf("Digite um numero maior do que 0 \n ");
}


while(cont<K){
printf("\n Digite o %d salario \n ",cont+1);
scanf("%f",&SALARIO);
cont++;
if(SALARIO>3000 && SALARIO<7000){
SOMA=SOMA+SALARIO;}
if(SALARIO==0)
MAIOR=SALARIO;
if(SALARIO>MAIOR){
MAIOR=SALARIO;}
}
printf("A SOMA dos  salarios <3000 e >7000 E  %f \n ",SOMA);
printf("\n O maior salario e %d",MAIOR);
}

#endif // ex11

#ifdef ex12
/*12)	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário. A variável P representa cada peso digitado.
Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba também o menor e o maior peso encontrado.
 Utilize o laço while para a entrada da quantidade N e um laço do while para efetuar os cálculos e as comparações solicitadas.*/



main(){

int N=0,cont=0, PESO,PESOSMAIORES=0,MAIOR,MENOR;
float SOMA=0,MEDIA=0;

while(N<=0){
printf("Digite uma quantidade de pesos : \n");
scanf("%d",&N);
if(N<0)
printf("Digite um numero maior do que 0 \n");
}

do{
printf("Digite o %d peso ",cont+1);
scanf("%d",&PESO);

if(PESO<0){
printf("Digite um numero maior do que 0 :");}
else
cont++;
if(PESO >= 70 && PESO <= 85.5 ){
SOMA=SOMA+PESO;
MEDIA=SOMA/N;
}
if(PESO>75)
PESOSMAIORES=PESOSMAIORES+1;
if(PESO==0)
MAIOR=PESO;
else
if(PESO>MAIOR)
MAIOR=PESO;
if(PESO==0)
MENOR=PESO;
if(PESO<MENOR)
MENOR=PESO;
}while(cont<N);



printf("A soma dos pesos >=70 e <=85.5 e  %f \n",SOMA);
printf("A MEDIA dos pesos >=70 e <=85 e  %f \n ",MEDIA);
printf("\n As quantidade de pessoas que possuem pesos maiores do que 75 eh: %d \n",PESOSMAIORES);
printf("\n O maior numero e %d",MAIOR);
printf("\n O menor numero e %d",MENOR);




getch();
}




#endif // ex12


#ifdef ex13
/*13)	Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados:  sexo, idade e quantidade de livros que leu no ano anterior.
  Faça um programa que leia os dados digitados pelo usuário,
sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo. Depois, calcule e imprima:
    a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
b)	A quantidade de mulheres que leram 5 livros ou mais.
c)   A média de idade dos homens que leram menos que 5 livros.
d) O percentual de pessoas que não leram LIVROS. */


main(){
int SEXO,IDADE=0,LIVROS=0,cont=0,TOTALLIVROS=0,i=0;
float MEDIA=0,SOMA=0;

do{
do{
printf("Digite o seu SEXO 1 para MASCULINO, 2 PARA FEMININO: \n");
scanf("%d",&SEXO);
if(SEXO!= 1 && SEXO!=2)
printf("DADOS INCORRETOS \n");
}while(SEXO != 1 && SEXO !=2);

printf("Digite a sua idade: \n");
scanf("%d",&IDADE);

printf("Digite a quantidade de livros que voce leu esse ano \n");
scanf("%d",&LIVROS);

if(IDADE<10)
TOTALLIVROS=TOTALLIVROS+LIVROS;
if(SEXO==2 && LIVROS>5)
i=i+1;
if(SEXO==1 && LIVROS<5){
cont=cont+1;
SOMA=SOMA+IDADE;
MEDIA=SOMA/cont;

}


}while(IDADE>0);

printf("A quantidade total de livros lidos pelos entrevistados menores de 10 anos e e: %d \n",TOTALLIVROS);
printf("A quantidade de mulheres que leram 5 livros ou mais e %d \n",i);
printf("A media de idade dos homens que leram menos que 5 livros e %f \n",MEDIA);
printf("O percentual de pessoas que nao leram livros e %d");
getch();
}


#endif // ex13


#ifdef ex14
/*14)	Receba a quantidade K de números quaisquer. K representa essa quantidade e deve ser digitada pelo usuário. A variável num armazena cada uma dos K
números digitados. Calcule e mostre a quantidade de números positivos divisíveis por 3, a média dos números negativos. Exiba também o maior número encontrado
 e quantas vezes ele apareceu. Utilize o laço do while para a entrada da quantidade K e um laço for para efetuar os cálculos e as comparações solicitadas.*/


main(){
int SEXO,IDADE=0,LIVROS=0,cont=0,TOTALLIVROS=0,i=0;
float MEDIA=0,SOMA=0;

do{
do{
printf("Digite o seu SEXO 1 para MASCULINO, 2 PARA FEMININO: \n");
scanf("%d",&SEXO);
if(SEXO!= 1 && SEXO!=2)
printf("DADOS INCORRETOS \n");
}while(SEXO != 1 && SEXO !=2);

printf("Digite a sua idade: \n");
scanf("%d",&IDADE);

printf("Digite a quantidade de livros que voce leu esse ano \n");
scanf("%d",&LIVROS);

if(IDADE<10)
TOTALLIVROS=TOTALLIVROS+LIVROS;
if(SEXO==2 && LIVROS>5)
i=i+1;
if(SEXO==1 && LIVROS<5){
cont=cont+1;
SOMA=SOMA+IDADE;
MEDIA=SOMA/cont;

}


}while(IDADE>0);

printf("A quantidade total de livros lidos pelos entrevistados menores de 10 anos e e: %d \n",TOTALLIVROS);
printf("A quantidade de mulheres que leram 5 livros ou mais e %d \n",i);
printf("A media de idade dos homens que leram menos que 5 livros e %f \n",MEDIA);
printf("O percentual de pessoas que nao leram livros e %d");
getch();
}






#endif // ex14




#ifdef ex15

/*15)Gere a seguinte sequência abaixo para K termos. K representa a
quantidade de números que o usuário gostaria quer fosse exibida dessa sequência.
Mostre também a somatória apenas dos números divisíveis por 3 dessa sequência.
Utilize o laço do while para a entrada da quantidade K e um laço for para efetuar os cálculos solicitados.

1, 1, 2, 3, 5, 8, 13, 21,.....*/


main(){
int K,A=0,B=1,C=0,cont=0,SOMA=0;

do{
printf("\n Digite uma quantidade K de numeros quaisquer: ");
scanf("%d",&K);
if(K<=0)
printf("\n Digite um numero maior do que 0");
}while(K<=0);


printf("1");


for(cont=0;cont<K;cont++){
C=A+B;
A=B;
B=C;
printf(" %d",C);
if(C%3==0)
SOMA=SOMA+C;

}
printf("\n A somatoria dos numeros que sao divisiveis por 3 e : %d",SOMA);

}




#endif // ex15


#ifdef ex16
//16)Solicite ao usuário um número maior ou igual a zero e inteiro representado pela variável num.
//Calcular o fatorial desse número. Utilize o laço while para a
//entrada da variável num e um laço for para efetuar o cálculo do fatorial.
//OBS: O Fatorial de zero e de um é um.
//Exemplo de cálculo do Fatorial:
////5! =5 * 4 * 3 * 2 * 1            ou
//5! =1 * 2 * 3 * 4 *5


main(){
int NUM=0,FATORIAL;

while(NUM<=0){
printf("Digite uma quantidade de numeros: \n ");
scanf("%d",&NUM);
if(NUM<=0)
printf("Digite um numero maior do que 0 \n ");
}


for(FATORIAL=1;NUM>1;NUM=NUM-1){
FATORIAL=FATORIAL*NUM;


}

printf("fatorial e : %d",FATORIAL);

}






#endif // ex16


#ifdef ex17
/*17)	Uma empresa contratou a quantidade de funcionários representada pela variável Y. Conforme o valor das vendas mensais, os funcionários adquirem pontos que determinarão seus salários ao final de cada mês. Sabe-se que esses funcionários trabalharão nos meses de novembro a janeiro do ano subsequente. Utilize os laços que desejar.
a)	Leia as pontuações nos três meses de cada funcionário;
b)	Calcule e mostre a pontuação geral de cada funcionário nos três meses.
c)	Calcule e mostre a média das pontuações de cada funcionário nos três meses.
d)	Determine e mostre a maior pontuação atingida entre todos os funcionários nos três meses.*/


main(){
int K,cont,ponto=0,GERAL=0,ponto1,ponto2,ponto3,MAIOR;
float MEDIA=0;

do{
printf("Digite uma quantidade K de funcionarios: \n");
scanf("%d",&K);
if(K<=0)
printf("Digite um numero maior do que 0 ");
}while(K<=0);

printf("Digite as pontuaoes dos funcionarios: \n ");
for(cont=0;cont<K;cont++){
printf("Digite a pontuacao de NOVEMBRO do %d FUNCIONARIO \n",cont+1);
scanf("%d",&ponto1);
printf("Digite a pontuacao de DEZEMBRO do %d FUNCIONARIO \n",cont+1);
scanf("%d",&ponto2);
printf("Digite a pontuacao de JANREIRO mes do %d FUNCIONARIO \n ",cont+1);
scanf("%d",&ponto3);
GERAL=ponto1+ponto2+ponto3;
MEDIA=GERAL/3;
if(GERAL==0 || GERAL>MAIOR){
MAIOR=GERAL;
}
printf("PONTUACAO GERAL do %d funcionario e %d \n",cont+1,GERAL);
printf("MEDIA PONTUACOES do %d funcionario e %f \n",cont+1,MEDIA);

}

printf("MAIOR PONTUACAO GERAL ATINGIDA FOI %d \n",MAIOR);
}
#endif // ex17






