#include <stdio.h>
#include <string.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';
#define TAM 500

int main(void) {

  char nome[TAM], topico[TAM], duvida[TAM];
  char ch;

  printf("Olá! Qual é o seu nome ou o nome de sua empresa? :)\n");
  gets(nome);

  printf("Bem-vindo ao chat da Epic Games, %s! Aqui, é um espaço para você tirar algumas dúvidas.\nVamos começar com o básico!\n", nome);

  do{
    printf("\nEscolha um tópico de sua dúvida! Pode ser sobre a parceria com a Epic, funcionamento da loja ou Unreal Engine!\n");
    gets(topico);

    /* Sobre a Epic */

    if(strstr(topico,"Epic") != 0 || strstr(topico,"epic") != 0 || strstr(topico,"Parce") != 0 || strstr(topico,"parce") != 0){
      printf("\nCerto, vamos falar sobre a parceria com a Epic!\nO que você deseja saber?\n(sugestões: como virar parceiros, qual é o benefício de escolher a Epic, qual é o lucro)\n");
      gets(duvida);

        /* Parceria Epic */

      if(strstr(duvida,"Como") != 0 || strstr(duvida, "como") != 0 || strstr(duvida, "vir") != 0 || strstr(duvida, "Vir") != 0 || strstr(duvida,"parce") != 0 || strstr(duvida,"Parce") != 0){
        printf("\nPara criar uma parceria com a Epic e vender seu jogo em nossa loja, é necessário, primeiramente, preencher o formulário em nosso site. Após o contato e a fase de análises, seu jogo poderá ser adicionado de forma simples e rápida.\nCaso você já tenha um relacionamento com a Epic por meio do licenciamento da Unreal Engine, fale diretamente com o seu contato comercial.\n");
      }

        /* Benefício da Parceria */

      else if(strstr(duvida,"benef") != 0 || strstr(duvida,"Benef") != 0 || strstr(duvida,"Escol") != 0 || strstr(duvida,"escol") != 0 || strstr(duvida,"Epic") != 0 || strstr(duvida,"epic") != 0){
        printf("\nO benefício de escolher a Epic é que a maior parte do lucro ficará em suas próprias mãos, já que ficamos somente com 12 porcento do valor. Além disso, por conta da nossa popularidade, seu jogo tem maior possibilidade de fazer sucesso.\n");
      }

      /* Qual é o lucro */

      else if(strstr(duvida,"lucro") != 0 || strstr(duvida,"Lucro") != 0){
        printf("\nAo vender seus jogos na Epic, 88 porcento do lucro ficará em suas mãos. :)\n");
      }

        /* Erro */

      else{
        printf("\nNão entendi a sua dúvida. :(\n");
      }
    }

    /* Funcionamento da Loja */

    else if(strstr(topico, "funcio") != 0 || strstr(topico, "Funcio") != 0 || strstr(topico, "Loja") != 0 || strstr(topico, "loja") != 0){
      printf("\nOk! Vamos falar sobre a nossa loja!\nO que você deseja saber?\n(sugestões: por que abrir uma loja, escolha de títulos, quais plataformas são suportadas, moedas aceitas, página do jogo, número de usuários, desenvolvedores participantes)\n");
      gets(duvida);

        /* Por que abrir uma loja? */

      if(strstr(duvida, "porque") != 0 || strstr(duvida, "por que") != 0 || strstr(duvida, "pq") != 0 || strstr(duvida, "Porque") != 0 || strstr(duvida, "Por que") != 0 || strstr(duvida, "Pq") != 0 || strstr(duvida, "abr") != 0 || strstr(duvida, "Abr") != 0 || strstr(duvida, "Loja") != 0 || strstr(duvida, "loja") != 0){
        printf("\nNosso sonho, como desenvolvedores, era ter uma loja com economia justa e contato direto com nossos jogadores. Graças ao sucesso do Fortnite, este sonho se tornou possível e fundamos nossa própria loja. :)\n");
      }

        /* Escolha de títulos */

      else if(strstr(duvida, "escol") != 0 || strstr(duvida, "Escol") != 0 || strstr(duvida, "Tít") != 0 || strstr(duvida, "tít") !=0 || strstr(duvida, "Tit") != 0 || strstr(duvida, "tit") != 0){
        printf("\nDamos prioridade a desenvolvedores com cronograma flexível e disposição a trabalhar conosco nas fases iniciais da loja.\n");
      }

        /* Plataformas suportadas */

      else if(strstr(duvida, "plat") != 0 || strstr(duvida, "Plat") != 0 || strstr(duvida, "suport") != 0 || strstr(duvida, "Suport") != 0){
        printf("\nInicialmente, temos suporte a PC e Mac. Pretendemos contar com o suporte de outras plataformas futuramente, como o Android.\n");
      }

        /* Moedas */

      else if(strstr(duvida, "Moeda") != 0 || strstr(duvida, "moeda") != 0 || strstr(duvida, "aceit") != 0 || strstr(duvida, "Aceit") != 0){
        printf("\nNo momento, aceitamos dólares americanos, libras esterlinas, euros, zlotys poloneses, rublos russos, wons sul-coreanos, ienes japoneses, liras turcas e grívnias ucranianas.\n");
      }

        /* Página do Jogo */

      else if(strstr(duvida, "pag") != 0 || strstr(duvida, "pág") != 0 || strstr(duvida, "Pág") != 0 || strstr(duvida, "Pag") != 0 || strstr(duvida, "Jogo") != 0 || strstr(duvida, "jogo") != 0 || strstr(duvida, "Game") != 0 || strstr(duvida, "game") !=0){
        printf("\nVocê poderá criar sua própria página para seu jogo e cultivar um relacionamento direto com o seu público através de um feed de notícias!\n");
      }

        /* Número de usuários */

      else if(strstr(duvida,"núm") != 0 || strstr(duvida, "Núm") != 0 || strstr(duvida, "num") != 0 || strstr(duvida, "Num") != 0 || strstr(duvida, "usu") != 0 || strstr(duvida, "Usu") != 0){
        printf("\nPossuímos em torno de 85 milhões de usuários em nossa plataforma!\n");
      }

        /* Desenvolvedores Participantes */

      else if(strstr(duvida, "Desenvolv") != 0 || strstr(duvida, "desenvolv") != 0 || strstr(duvida, "Partic") != 0 || strstr(duvida, "partic") != 0){
        printf("\nUbisoft, Quantic Dream, Klei Entertainment, CD PROJEKT RED, Deep Silver, Telltale Games, Gearbox Software, thatgamecompany, Obsidian Entertainment são algumas empresas que já disponibilizam seus jogos em nossa loja!\n");
      }
      
        /* Erro */

      else {
        printf("\nNão entendi a sua dúvida. :(\n");
      }
    }

    /* Unreal Engine */

    else if(strstr(topico, "Unr") != 0 || strstr(topico, "unr") != 0 || strstr(topico, "eng") != 0 || strstr(topico, "Eng") != 0){
      printf("\nBeleza, vamos falar do motor Unreal Engine!\nO que você deseja saber?\n(sugestões: o que é, versão recente, vantagens ao lançar na Epic, utilização de outro motor)\n");
      gets(duvida);

      /* O que é */

    if(strstr(duvida, "O que") != 0 || strstr(duvida, "o que") != 0 || strstr(duvida, "oq") != 0 || strstr(duvida, "Oq") != 0){
      printf("\nA Unreal Engine expande os limites do que um motor de jogos pode fazer e empodera desenvolvedores de conteúdo (em jogos, filmes/efeitos especiais, design automotivo, visualização arquitetural e muito mais) em todo o mundo, para que eles possam dar vida a suas visões e criações inovadoras! Seu objetivo é fornecer ferramentas de desenvolvimento rápido para a criação de personagens, armas, cenários e a programação da inteligência artificial.\n");
    }

      /* Versão recente */
    
    else if(strstr(duvida, "vers") != 0 || strstr(duvida, "Vers") != 0 || strstr(duvida, "recen") != 0 || strstr(duvida, "Recen") != 0){
      printf("\nAtualmente, está em sua quarta versão: recebeu mudanças como mudanças nos algoritmos para que o funcionamento do jogo não seja prejudicado. Em prol dos programadores, a redução do tempo do processo de iteração e a permissão de atualizar o código C enquanto o motor está em funcionamento foram aplicadas para facilitar o trabalho.\n");
    }

      /* Criação com a Unreal Engine */

    else if(strstr(duvida, "vanta") != 0 || strstr(duvida,"Vanta") != 0 || strstr(duvida, "Lanç") != 0 || strstr(duvida, "lanç") != 0 || strstr(duvida, "Epic") != 0 || strstr(duvida, "epic") != 0){
      printf("\nAlém da vantagem de lançar um jogo em todas as plataformas, royalties de engine não são cobrados para jogos feitos com o UE4.\n");
    }

      /* Utilização de outro motor */

    else if(strstr(duvida, "util") != 0 || strstr(duvida, "Util") != 0 || strstr(duvida, "outr") != 0 || strstr(duvida, "Outr") != 0 || strstr(duvida, "moto") != 0 || strstr(duvida, "Moto") != 0){
      printf("\nSeu jogo ainda poderá ser vendido na loja Epic Games, já que não seguimos com nenhum critério relativo à engines.\n");
    }
      
      /* Erro */

    else {
      printf("\nNão entendi a sua dúvida. :(\n");
    }
    }

    else {
      printf("\nNão entendi qual é o tópico de dúvida! :(\n");
    }

    printf("\nDeseja fazer outras perguntas? s/n?\n");
    scanf(" %c", &ch);
    
    getchar();
  } while(ch == 's');
  
  printf("\nVolte sempre! :)");

  return 0;
}