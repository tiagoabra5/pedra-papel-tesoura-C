#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<stdbool.h>

#define textoPadrao "pedra papel e tesoura"
#define pedra "1 = pedra"
#define papel "2 = papel"
#define tesoura "3 = tesoura"

int main(){
    for(;;){
        printf("%s\n\n", textoPadrao);
        printf("%s\n", pedra);
        printf("%s\n", papel);
        printf("%s\n\n", tesoura);

    int num1, num2;

    printf("escolha um numero entre 1 , 2 e 3: \n");
    printf("seu numero: ");
    scanf("%d", &num1);

    if (num1 == 0){
        break;
    }

    srand(time(NULL));

    num2 = rand() % 3 + 1;
    printf("computador escolheu: %d\n", num2);

    if (num1 == 1 && num2 == 3){
        printf("vc ganhou \n");
    } else if (num1 == 3 && num2 == 2){
        printf("vc ganhou \n");
    } else if (num1 == 2 && num2 == 1){
        printf("vc ganhou \n");
    } else if (num2 == 1 && num1 == 3){
        printf("vc perdeu \n");
    } else if (num2 == 3 && num1 == 2){
        printf("vc perdeu \n");
    } else if (num2 == 2 && num1 == 1){
        printf("vc perdeu \n");
    } else {
        printf("empate \n");
    }

}
    system("pause");
    return 0;
}
