#include <stdio.h>
#include <stdlib.h>
/* include */
#define importar include /* NÃO FINCIONA COM # *//
/* funções */
#define principal main
#define escrever printf
#define ler scanf
#define sistema system
#define obter getch
#define obtero getche
/* comandos de decisão */
#define se if
#define senao else
#define interruptor switch
#define caso case
#define pausa break
#define padrao default
#define continuar continue
#define vamospara goto
/* laços de repetição */
#define para for
#define enquanto while
#define fazer dO

/* variaveis */
#define inteiro int
#define real float
#define caractere char
#define vazio void

/* estrutura de dados*/
#define estrutura struct
#define definirtipo typedef

/* classes e objetos */
#define classe class

/* encapsulamento */
#define publico public

/*versao */
#include <locale.h>
#define s "\xdb\n\r"
void versao(void){
     setlocale(LC_ALL, "Portuguese");
    int a = 0, b;
    printf("\n\n\n");
    printf("\t\t\tssssss\n\r\t\t\tsssssssss\n\r\t\t\tssss   ssss\n\r\t\t\tssss     ssss\n\r\t\t\tssss      ssss\n\r\t\t\tssss      ssss\n\r\t\t\tssss     ssss\n\r\t\t\tssss   ssss\n\r\t\t\tsssssssss\n\r\t\t\tssssss\n\r");
    while(a < 5) {
    printf ("\t\t\tssss\n");
    a++;       
    }
    printf("\n\n\n");
    printf("\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t      \xdb linguagem P \xdb\n");
    printf("\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\t\t     Vertsão beta 0.2\n");
    printf("\nDesenvolvida nos laboratorios do instituto federal norte de minas gerais\n\n\n");
    printf("Dioreitos autorais reservados ao programador Sebastião Fortes Avelar de Almeida\n");
    scanf("%d", &b);
    system("pause");
}



