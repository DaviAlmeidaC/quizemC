//Fundação Matias Machiline.
//Sergio Roberto.
//Raquel Almeida Carvalho.
//238843
//data de criação:09/06/23. Hora de criação:15:00hs.
//data de termino: 20/06/2023       . Hora de termino: 16:43   .
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
int main(){
	
	char name[4];
	int A=0, E=0, T=0;
	int q1, q2, nome, C, c, a, b, d, e;
	int i, P, t;


// Pagina 1

system("color e");
	printf("\n                       Autora:Raquel Almeida Carvalho\n");
	printf("\n                     Quiz educacional de EDUCACAO FISICA\n");
	printf("\n                             QUALIDADE DE VIDA\n\n");
	
printf("                                                                        +:=- .:     \n");
printf("                           .=---       - :   -.   -=-     :--    .==-    :=+*-   --.    \n");  
printf("                           =-     .++++# *   #- .. .=  -+:.-+  -=  =-  -:  += .::*.   \n");  
printf("                           =+==- ..  :# +.  #- +:        ::.#. *        -=== +-  :+   \n");  
printf("                           =-    --   .# +.  - #       =+--=#::      :*:..=# *    #   \n");  
printf("                           ==    +:    # .  *- #      .#    *-:      *:   .# #    *:  \n");  
printf("     -*##*****+=.  ==    +-    # *:  *- *:     :+    *-.#      *:   .# *.   *:  \n");  
printf("    .####==+++++++++++=:   ==    :*    # +- .#+ -*.   . #.   *- +=   . -#.  =#.-+   #   \n");  
printf("    -####                  =++=  -+++# .++:=. :++++: :++==++  =+++. :=+=:+= -*++:   \n");  
printf("    =####-:-----:::..         .--   .::.       .           .::.    --                   \n");  
printf("    +#################=    .=+-  :##+-    =.      .=#######:: -+===-.   :-===-.   \n");  
printf("    +####::::::.....      ==.    .###+   :+   :.      =####=. .-+#########+-#######*- \n");  
printf("    *####                *##.    :###+    .: =##.    *####:      *#####################:\n");  
printf("    #####                *##-     +###+      =##=   =####:      .######################+\n");  
printf("    #####                ##=      =###.    +##+  .####+        ######################=\n");  
printf("    #####                ##=       :###-   +##+  -####-        =####################*.\n");  
printf("    *####                *##=         ####:  =##+  +####:         +###################: \n");  
printf("    ####                +##+  +#:    -###+  -##  +####:      --  =################*.  \n");  
printf("    #####                -##*  ##*    =###+  .###  =####+     =#-   :*#############=    \n");  
printf("    ###                :###  =##:.:####-   ###. .#####+:.:+#=      -#########=.     \n");  
printf("    =###+                 ###.  :#######+    +##:  .+#######:         .=*###+-        \n");  
printf("     =+=.                 .++     :=+++=.      =+.    .-+++=:              .:           \n");  
                                                                                          
                                                                                          
                                                                                                     
	printf("\n\nQuer inicar o quiz? \n\nDigite S para continuar ou N para sair");
	scanf("%s", &q1);
	
	// Pagina 2
	if( q1 == 's'){
	system("cls");
	printf("\n               ESCREVA SEU NOME OU APELIDO PARA INICIAR:");
	scanf("%s",&name);

// Carregando

int n=0;
	char barra [30]="";
	strcpy(barra,"\xDB");
	while( n <= 100){
		printf("Tela de carregamento. \n\nAguarde um pouco %s\n", name);
		printf("\nLoading...\n");
		printf("%s", barra);
		printf("%d%%", n);
		Sleep(500);
		strcat(barra,"\xDB");
		system("cls");
		system("color f");
		n+=5;
		if( n == 100){
			printf("               Regras do jogo:\n -leia as questoes sobre qualidade de vida;\n -marca a alternativa que for a correta;\n -apenas uma das alternativas esta correta;\n -se divirta\n\n\nPrecione QUALQUER TECLA para comecar");
			getch();
		
		}
		system("cls");
	}

//Pergunta 1



do{
	
	
	printf("NIVEL FACIL\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
	printf("Q1) O que significa qualidade de vida?\n");
	printf("a) comer e beber o que quizer.\n");
	printf("b) nao e possivel ter uma boa qualidade de vida.\n");
	printf("c) praticar atividaes fisicas, ter uma boa alimentacao, socializar e esta bem consigo.\n");
	printf("d) trabalhar varias horas por dia.\n");
	printf("e) nenhuma das alternativas.\n\n");
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='C'|| q1=='c'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 2

do{
	printf("NIVEL FACIL\n");
	
	printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
			printf("Q2) O que e necessario principalmente para ter uma boa qualidade de vida?\n");
			printf("a) saude.\n");
			printf("b) esta atualizado das noticias politicas.\n");
			printf("c) bens materiais.\n");
			printf("d) cometer acoes ruins.\n");
			printf("e) trabalhar.\n\n");
			
			printf("Digite a sua resposta:");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}
''

if(q1=='A'|| q1=='a'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 3

do{
	
	
	printf("NIVEL FACIL\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
					printf("Q3) O que devemos fazer para sermos produtivos?\n");
					printf("a) gastar o tempo em qualquer coisa.\n");
					printf("b) desistir nas primeiras tentativas.\n");
					printf("c) se organizar e manter uma boa rotina.\n");
					printf("d) ver sempre as redes sociais.\n");
					printf("e) sair e se divertir todos os dias.\n\n");
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='C'|| q1=='c'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 4

do{
	
	
	printf("NIVEL FACIL\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
					printf("Q4) Devemos socializar para termos uma boa qualidade de vida?\n");
					printf("a) Nao, pois e perca de tempo.\n");
					printf("b) Sim, mas uma vez por mes apenas.\n");
					printf("c) Nao, pois devemos focar em nos mesmo.\n");
					printf("d) Nao, porque isso ira incomodar os outros.\n");
					printf("e) Sim, pois faz bem tanto para nos mesmos quanto para os outros.\n\n");
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='E'|| q1=='e'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 5

do{
	
	
	printf("NIVEL MEDIO\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
					    printf("Q5) A qualidade de vida está relacionada com:\n");
					    printf("a) dormir 5 horas por dia, fazer exercicios uma duas vezes por semana, se hidratar, e etc.\n");
					    printf("b) viajar, se hitratar, boa autoestima, saude mental, e etc.\n");
					    printf("c) boa condicao financeira, viajar, fazer exercicios fisicos, se hidratar, e etc.\n");
					    printf("d) alimentacao equilibrada, fazer exercicios fisicos, se hidratar, saude mental, dormir bem e etc.\n");
					    printf("e) fazer exercicios fisicos, alimentacao desregulada, saude mental, se hidratar, e etc.\n\n");
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='D'|| q1=='d'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 6

do{
	
	
	printf("NIVEL MEDIO\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
					    printf("Q6) Quantas horas de sono e necessario, para uma boa noite (aproximadamente (Adulto))?\n");
					    printf("a) 3 horas\n");
					    printf("b) 7 horas\n");
					    printf("c) 5 horas\n");
					    printf("d) 10 horas\n");
					    printf("e) o quanto voce quiser\n\n");	
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='B'|| q1=='B'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 7

do{
	
	
	printf("NIVEL MEDIO\n");
	
		printf("Usuario:%s\n\n", name);
	 printf("Acertos: %d Erros: %d\n\n", A, E);
					    printf("Q7) Segundo a Organizacao Mundial de Saude (OMS), saude e…\n");
					    printf("a) apenas a ausencia de doenças ou enfermidades.\n");
					    printf("b) um estado de completo bem-estar fisico, mental e social.\n");
					    printf("c) apenas um estado de completo bem-estar fisico.\n");
					    printf("d) apenas um estado de completo bem-estar psiquico.\n");
					    printf("e) nenhuma das alternativas.\n\n");	
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='B'|| q1=='b'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 8

do{
	
	
	printf("NIVEL DIFICIL\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
					    printf("Q8)A prática regular e controlada de atividade fisica ...\n");
					    printf("a) ajuda a prevenir / reduzir a hipertensao.\n");
					    printf("b) aumenta o risco de doenças cardiovasculares.\n");
					    printf("c) diminui o stress e estimula o aumento do estado de depressao e ansiedade.\n");
					    printf("d) estimula a propagacao de doenças infeciosas.\n");
					    printf("e) melhora a saude mental, ajudar a prevenir doencas, regular o sono. \n\n");
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='E'|| q1=='e'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 9

do{
	
	
	printf("NIVEL DIFICIL\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
					    printf("Q9) Quantos litros de água é ideal (aproximadamente), para uma pessoa ingerir?\n");
					    printf("a) de 1,5L------2L\n");
					    printf("b) de 2,5L------3L\n");
					    printf("c) de 3,5L------4L\n");
					    printf("d) de 3,5L------5L\n");
					    printf("e) de 3,5L------9L\n\n");
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='B'|| q1=='b'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Pergunta 10

do{
	
	
	printf("NIVEL DIFICIL\n");
	
		printf("Usuario:%s\n\n", name);
	printf("Acertos: %d Erros: %d\n\n", A, E);
					    printf("Q10) Quais sao os pilares da qualidade de vida?\n");
					    printf("a) alimentacao saudavel, exercicios fisicos, equilibrio mental, estudos e relacoes sociais.\n");
					    printf("b) alimentacao saudavel, equilibrio mental, bem-estar, qualidade de sono e relacoes sociais.\n");
					    printf("c) alimentacao saudavel, autoestima, equilibrio mental, qualidade de sono e relacoes sociais.\n");
					    printf("d) alimentacao saudavel, exercicios fisicos, equilibrio mental, trabalho e relacoes sociais.\n");
					    printf("e) alimentacao saudavel, beber bebidas alcoolicas, exercicios fisicos e relacoes sociais.\n\n");	
	
	printf("Digite a sua resposta:\n\n");
printf("segundos: %d", i);
	Sleep(500);
	system("cls");
	i++;
	
	
}while(i<=30 && !kbhit());
	if(kbhit()){
	scanf("%s", &q1); 
}


if(q1=='B'|| q1=='b'){
	A++;
	while(P<=5){
		printf("\n\n\n\tVoce acertou %s", name);
		system("color 2F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
	}
}else{
	E++;
	while(P<=5){
		printf("\n\n\n\nResposta errada!");
		system("color 4F");
		Sleep(500);
		system("color 0F");
		system("cls");
		P++;
		
	}
}

system("cls");

//Tela final 

printf("resposta certa!\n\nParabens!!!! Voce completou o quiz");
printf("Acertos: %d Erros: %d", A, E);
}

return 0;
}
