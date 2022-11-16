//Faça um Programa que pergunte em que turno você estuda.
//Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
//Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

#include <stdio.h>
int main (){
    char turno,M,V,N;
    printf("qual seu turno:");
    scanf("%c",&turno);
    
    
    if (turno=='M'){
        printf("Bom dia!");
    }
    else if (turno=='V'){
        printf("Boa tarde!");
    }
    else if(turno=='N'){
        printf("Boa noite!");
    }
    else{
        printf("Valor Inválido");
    }
    return 0;
}