#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  printf("\n        _,.-Y  |  |  Y-._                    \n");
  printf("    .-~`   ||  |  |  |   `-.                 \n");
  printf("    I` ``=='|' !'! ``|`[]``|     _____       \n");
  printf("    L__  [] |..------|:   _[----I` .-{`-.    \n");
  printf("   I___|  ..| l______|l_ [__L]_[I_/r(=}=-P   \n");
  printf("  [L______L_[________]______j~  `-=c_]/=-^   \n");
  printf("   \\_I_j.--.\\==I|I==_/.--L_]               \n");
  printf("     [_((==)[`-----`](==)j                   \n");
  printf("        I--I`~~```~~`I--I                    \n");
  printf("        |[]|         |[]|                    \n");
  printf("        l__j         l__j                    \n");
  printf("        |!!|         |!!|                    \n");
  printf("        |..|         |..|                    \n");
  printf("        ([])         ([])                    \n");
  printf("        ]--[         ]--[                    \n");
  printf("        [_L]         [_L]                    \n");
  printf("       /|..|\\       /|..|\\                 \n");
  printf("      `=}--{=`     `=}--{=`   By: RenanLopesCoder  \n");
  printf("     .-^--r-^-.   .-^--r-^-.                 \n");
  printf("-----------------------------------------------------------\n");
  printf("---------------------- Jogo da adivinhação ----------------\n");
  printf("-----------------------------------------------------------\n");

  int segundos = time(0);
  srand(segundos);
  int numeroGrande = rand();
  int numeroSecreto = numeroGrande % 100;

  int chute;
  double pontos = 1000;
  int acertou = 0;
  int tentativas=1;
  int numeroDeTentativas;
  int nivel;

  printf("\nSelecione o nível de dificuldade!\n");
  printf("(1) Fácil (2) Médio (3) Difícil\n");
  scanf("%d", &nivel);

  switch (nivel) {
    case 1:
      numeroDeTentativas = 20;
      break;

    case 2:
      numeroDeTentativas = 15;
      break;

    default:
      numeroDeTentativas = 5;
  }
  printf("O computador pensou em um número de 0 a 100 você possui %d tentativas para adivinhar, boa sorte!", numeroDeTentativas);
  for(int i; tentativas <= numeroDeTentativas; i++){
    printf("Tentativa %d de %d\n", i, numeroDeTentativas);
    printf("Qual é Seu Chute? ");
    scanf("%d",&chute);
    printf("\nSeu Chute foi %d\n", chute);

    if(chute < 0){
      printf("Seu chute não pode ser número negativo!\n");
      continue;
    }

    acertou = (chute == numeroSecreto);

    if(acertou){
      break;
    }else{

      int maior = (chute > numeroSecreto);

      if(maior){
        printf("Seu chute foi maior que o número secreto\n");
      }else{
        printf("Seu chute foi menor que o número secreto\n");
      }
    }
    tentativas++;
    double pontosPerdidos =  abs(chute - numeroSecreto) / (double)2;
    pontos = pontos - pontosPerdidos;
  }
  if(acertou){
    printf("                          ,-.        _.---._         \n");
    printf("                         |  `\\.__.-''       `.       \n");
    printf("                           \\  _        _  ,.   \\     \n");
    printf("     ,+++=._________________)_||______|_|_||    |    \n");
    printf("    (_.ooo.===================||======|=|=||    |    \n");
    printf("      ~~'                   |  ~'      `~' o o  /    \n");
    printf("                            \\   /~`\\     o o  /    \n");
    printf("                             `~'    `-.____.-'       \n");
    printf("                                                     \n");

    printf("  __  __            ___             ___           __     __      \n");
    printf(" \\ \\/ /__  __ __  / _ | _______   / _ \\___  ____/ /__  / /    \n");
    printf("  \\  / _ \\/ // / / __ |/ __/ -_) / , _/ _ \\/ __/  '_/ /_/     \n");
    printf("  /_/\\___/\\_,_/ /_/ |_/_/  \\__/ /_/|_|\\___/\\__/_/\\_\\ (_)  \n\n\n");

    printf("Você acertou em %d tentativas!\n",tentativas);
    printf("Total de pontos: %.1f\n", pontos);
  }else{
    printf("\n   __  __            __                  __     \n");
    printf("   \\ \\/ /__  __ __  / /  ___  ___ ___   / /   \n");
    printf("    \\  / _ \\/ // / / /__/ _ \\(_-</ -_) /_/   \n");
    printf("    /_/\\___/\\_,_/ /____/\\___/___/\\__/ (_)   \n");
    printf("                                                \n");
    printf("\nFim de Jogo!\n");
    printf("Não desanime tente novamente!\n");
  }

}
