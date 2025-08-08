#include <stdio.h>
    int main(){
        //variavel carta 1
        int população1,pontosturisticos1;
        char estado1;
        char codigo1[4];
        char nomedacidade1[50];
        float areadacidade1,PIB1;

        //variavel carta 2
        int população2,pontosturisticos2;
        char estado2;
        char codigo2[4];
        char nomedacidade2[50];
        float areadacidade2,PIB2;

     //descrever a carta 1 
     printf("Faça o cadastro da carta 1\n");

     printf("Digite o Estado:");
     scanf(" %c", &estado1);

     printf("Digite o codigo:");
     scanf(" %s", codigo1);

     printf("Digite o nome da cidade:");
     scanf("%s", nomedacidade1);

     printf("Digite o tamanho da população: ");
     scanf("%d", &população1);

     printf("Digite o tamanho da área:");
     scanf("%f", &areadacidade1);
    
    printf("Insira o PIB:");
    scanf("%f", &PIB1);

    printf("Insira o numero de Pontos turísticos:");
    scanf("%d", &pontosturisticos1);
    
    //exebição de carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\nNome da cidade: %s\n",codigo1,nomedacidade1);
    printf("População:%d\n",população1);
    printf("Área:%.2f Km²\nPIB:%.2f Bilhões de reais\n" ,areadacidade1,PIB1);
    printf("Numero de Pontos Turísticos: %d\n",pontosturisticos1);   

//descrever a carta 2 
     printf("Faça o cadastro da carta 2\n");

     printf("Digite o Estado:");
     scanf(" %c", &estado2);

     printf("Digite o codigo:");
     scanf(" %s", codigo2);

     printf("Digite o nome da cidade:");
     scanf("%s", nomedacidade2);

     printf("Digite o tamanho da população: ");
     scanf("%d", &população2);

     printf("Digite o tamanho da área:");
     scanf("%f", &areadacidade2);
    
    printf("Insira o PIB:");
    scanf("%f", &PIB2);

    printf("Insira o numero de Pontos turísticos:");
    scanf("%d", &pontosturisticos2);
    
    //exebição de carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\nNome da cidade: %s\n",codigo2,nomedacidade2);
    printf("População:%d\n",população2);
    printf("Área:%.2f Km²\nPIB:%.2f Bilhões de reais\n" ,areadacidade2,PIB2);
    printf("Numero de Pontos Turísticos: %d\n",pontosturisticos2);

        return 0;
        
    }