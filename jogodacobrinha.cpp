# include <stdio.h>
# include <stdlib.h>//para o função system() e srand()
# include <windows.h>//para a função SetConsoleCursorPosition 
# include <conio.h>//para a função get()e kbhit()
# include <time.h> //para a função rand   

//Variaveis Globais
int c[300][2], pontos=1,cx=2, cy=2, comida[2], velo=150;

//funçoes

void gotoxy(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});

}

//Para desenhar a Cobra

void desenha(){
    int i;
    for (i=0; i< pontos; i++){
        gotoxy(c[i][0],c[i][1]);
        printf("%c",219);

    }
}

// atualização da posição da cobra

void atualiza(){
    int i;
    gotoxy(c[pontos][0],c[pontos][1]);
    printf(" ");
    for(i=pontos; i>=0;i--){
        c[i+1][0] = c[i][0];
        c[i+1][1] = c[i][1];

    }

}

//Ver se a cobra bateu no seu própio corpo
void analisa(){
    int i , retorno=0;
    for (i=1;i<pontos;i++){
        if(cx==c[i][0] && cy==c[i][1])
            retorno=1;

    }
    return retorno;
}

//Gerar comida em posição aleatória

void gerarComida(){
    gotoxy(comida[0], comida[1]);
    printf(" ");//apaga a ultima comida
    srand(time(NULL));
    comida[0] = (rand()%48)+1;
    comida[1] = (rand()%18)+1;
    gotoxy(comida[0],comida[1]);
    printf("%c",4);//imprime a comida na posição gerada

}

 int main (){
    int i, gameover=0;
    char tecla;

    for(i=0; i<50; i++){ // Linha superior
        gotoxy(i,0);
        printf("%c",219);
        Sleep(5); // Para ficar como uma animação
        //pausa o progrma por 5 milissegundos
    }
    for(i=0;i<20;i++){ // Coluna da Direita
        gotoxy(50,i);
        printf("%c",219);
        Sleep(5);

    }
    for(i=50;i>=0;i--){ // Coluna da Inferior
        gotoxy(i,20);
        printf("%c",219);
        Sleep(5);
    }
    for(i=20;i>=0;i--){ // Coluna da Esquerda
        gotoxy(0,i);
        printf("%c",219);
        Sleep(5);
    }
    gerarComida();//Gera a primeira comida
    desenha();//Desenha a Cobra
    tecla='d';//A direção começa pela direita

    while (gameover==0){
        gotoxy(52,2);
        printf("Pontos: %d\t ",pontos);
        gotoxy(52,4);
        printf("Desenvolvido por Lucas");
        c[0][0]=cx;
        c[0][1]=cy;
        if(kbhit())
            tecla=getch();
        if(tecla == 'w' || tecla=='W' || tecla == 72){
            cy--;
            if(cy==0) break;
            //se a cobra bater na parede superior o jogo acaba
        }
        if(tecla == 'a' || tecla=='A' || tecla == 75){
            cx--;
            if(cx==0) break;
            //se a cobra bater na parede esquerda o jogo acaba
        }
        if(tecla == 's' || tecla=='S' || tecla == 80){
            cy++;
            if(cy==20) break;
            //se a cobra bater na parede inferior o jogo acaba
        }
        if(tecla == 'd' || tecla=='D' || tecla == 77){
            cy++;
            if(cy==50) break;
            //se a cobra bater na parede Direita o jogo acaba
        }
        if(cx==comida[0] && cy==comida[1]){
            pontos++;
            if (velo>50)velo-=10;
            //velo é a velocidade media em milissegundos
            gerarComida();
        }
        gameover=analisa();
        atualiza();//atualiza  aposição da cobra
        desenha();//desenha a cobra
        gotoxy(50,20);//para o cursor não atrapalhar a visão da cobra
        Sleep(velo);//pausa o jogo por 'velo' milisegundos


    }
    system("cls");//Quando o usuário perder aparace uma mensagem final
    printf("Voce perdeu ! %d pontos. \n", pontos );
    system("pause");
 }
