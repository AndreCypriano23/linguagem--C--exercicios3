#define ex3
#include <stdio.h>



#ifdef ex1

///1)	Mostre todos os n�meros �mpares de 1 at� 100.Utilize o la�o while.


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
///2)	Mostre todos os n�meros �mpares de 50 at� 300.Utilize o la�o do while.

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
///3)	Receba um n�mero inteiro e mostre os n�meros pares de 2 at� esse inteiro. Utilize o la�o do while.


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
///4)	Pergunte ao usu�rio quantos alunos tem na sala dele. Em seguida, atrav�s de um la�o do while, pe�a ao usu�rio para que entre com as notas de todos
///os alunos da sala, um por vez.
///Exiba a m�dia da turma e quantas notas foram digitadas maiores ou iguais a 6.


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

///5)	Solicite ao usu�rio n�meros quaisquer at� que a soma desses n�meros digitados seja inferior a 20.
/// Utilize o la�o while.

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

///6)	Calcule e mostre a m�dia dos K primeiros pares e m�ltiplos de cinco.
///OBS: K representa a quantidade de n�meros pares solicitados via teclado pelo   usu�rio. Os n�meros pares dever�o ser gerados pelo programador. Utilize o la�o while para a entrada da quantidade K e um la�o for para o c�lculo da m�dia.
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
///7)	Leia um n�mero inteiro representado pela vari�vel N at� que N seja igual a zero. Exiba uma mensagem informando se o n�mero � par ou �mpar.


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
///8)	Receba K n�meros inteiros quaisquer, K representa a quantidade de termos solicitada pelo usu�rio e cada termo pode ser representado pela vari�vel N. Exiba a quantidade de n�meros positivos recebidos e a m�dia dos n�meros �mpares. .
///Utilize o la�o do while para a entrada da quantidade K e um la�o while para efetuar os c�lculos solicitados.


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
///9)	Receba K n�meros quaisquer, K representa a quantidade de termos solicitada pelo usu�rio e cada termo pode ser representado pela vari�vel N. Exiba o maior n�mero digitado.
///Utilize o la�o do while para a entrada da quantidade K e um la�o for para exibir o maior n�mero.


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
///10)	Receba dois n�meros. Calcule e mostre:
///a)	A soma dos n�meros pares desse intervalo, incluindo os n�meros digitados;
///b)	A multiplica��o dos n�meros �mpares desse intervalo de n�meros incluindo os n�meros digitados.


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
/*11)Receba a quantidade de sal�rios de K indiv�duos. K representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel Sal�rio armazena cada uma dos K sal�rios digitados. Calcule e mostre a somat�ria dos sal�rios superiores a 3 sal�rios m�nimos e
inferior ou igual a 7 sal�rios m�nimos.
Exiba tamb�m o maior e o menor sal�rio encontrado.
Utilize o la�o while para a entrada da quantidade K e um la�o while para efetuar os c�lculos e as compara��es solicitadas*/


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
/*12)	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usu�rio. A vari�vel P representa cada peso digitado.
Calcule e mostre a m�dia dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba tamb�m o menor e o maior peso encontrado.
 Utilize o la�o while para a entrada da quantidade N e um la�o do while para efetuar os c�lculos e as compara��es solicitadas.*/



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
  Fa�a um programa que leia os dados digitados pelo usu�rio,
sendo que dever�o ser solicitados dados at� que a idade digitada seja um valor negativo. Depois, calcule e imprima:
    a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
b)	A quantidade de mulheres que leram 5 livros ou mais.
c)   A m�dia de idade dos homens que leram menos que 5 livros.
d) O percentual de pessoas que n�o leram LIVROS. */


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
/*14)	Receba a quantidade K de n�meros quaisquer. K representa essa quantidade e deve ser digitada pelo usu�rio. A vari�vel num armazena cada uma dos K
n�meros digitados. Calcule e mostre a quantidade de n�meros positivos divis�veis por 3, a m�dia dos n�meros negativos. Exiba tamb�m o maior n�mero encontrado
 e quantas vezes ele apareceu. Utilize o la�o do while para a entrada da quantidade K e um la�o for para efetuar os c�lculos e as compara��es solicitadas.*/


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

/*15)Gere a seguinte sequ�ncia abaixo para K termos. K representa a
quantidade de n�meros que o usu�rio gostaria quer fosse exibida dessa sequ�ncia.
Mostre tamb�m a somat�ria apenas dos n�meros divis�veis por 3 dessa sequ�ncia.
Utilize o la�o do while para a entrada da quantidade K e um la�o for para efetuar os c�lculos solicitados.

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
//16)Solicite ao usu�rio um n�mero maior ou igual a zero e inteiro representado pela vari�vel num.
//Calcular o fatorial desse n�mero. Utilize o la�o while para a
//entrada da vari�vel num e um la�o for para efetuar o c�lculo do fatorial.
//OBS: O Fatorial de zero e de um � um.
//Exemplo de c�lculo do Fatorial:
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
/*17)	Uma empresa contratou a quantidade de funcion�rios representada pela vari�vel Y. Conforme o valor das vendas mensais, os funcion�rios adquirem pontos que determinar�o seus sal�rios ao final de cada m�s. Sabe-se que esses funcion�rios trabalhar�o nos meses de novembro a janeiro do ano subsequente. Utilize os la�os que desejar.
a)	Leia as pontua��es nos tr�s meses de cada funcion�rio;
b)	Calcule e mostre a pontua��o geral de cada funcion�rio nos tr�s meses.
c)	Calcule e mostre a m�dia das pontua��es de cada funcion�rio nos tr�s meses.
d)	Determine e mostre a maior pontua��o atingida entre todos os funcion�rios nos tr�s meses.*/


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






