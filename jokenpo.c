#include <stdio.h>
#include <time.h>
int main(){
int escolhacomputador, escolhajogador;
srand (time (0));
escolhacomputador = rand() %3 + 1;


printf("***Jogo do Jokenpô***\n");
printf("1.Pedra\n");
printf("2.Papel\n");
printf("3.Tesoura\n");
printf("Escolha:");
scanf("%d", &escolhajogador);



switch(escolhajogador){
case 1:
printf("\nO jogador -Pedra\n");
break;
case 2:
printf("\n O jogador - Papel\n");
break;
case 3:
printf("\n O jogador - Tesoura\n");
break;
default:
printf("Opção Inválida\n");
break;
}

switch(escolhacomputador){
case 1:
printf("\nO computador escolheu Pedra\n");
break;
case 2:
printf("\n O computador escolheu Papel\n");
break;
case 3:
printf("\n O computador escolheu Tesoura\n");
break;
}

if(escolhajogador == escolhacomputador){
    printf("\nEmpatou\n");
} else if((escolhajogador == 1 && escolhacomputador == 3) || 
        (escolhajogador == 2 && escolhacomputador == 1) ||
        (escolhajogador == 3 && escolhacomputador == 2)){
    printf("\nO jogador venceu\n");
} else {
printf("o jogador perdeu.");
}




return 0;
}