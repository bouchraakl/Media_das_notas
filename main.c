#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaProjeto,notaProva;
    printf("Insira a nota do projeto :");
    scanf("%f" , &notaProjeto);
    printf("Insira a nota da prova :");
    scanf("%f" , &notaProva);
    float media = (notaProjeto*0.6)+(notaProva*0.4);
    printf ("sua media final e %2.f\n" , media );
    if (media>=7){
        printf("Aluno aprovado");
    }
    else {
        printf("Aluno reprovado");
    }


   return 0;
}
