#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
 system("color 3f");

         int menu, inserir, remover, alterar, consultar, opcao;
         int quant, i;
         int id, dia, mes, ano, idade;


//menu principal
    while(menu!=5){
             printf("\n\n\n\n\n\n\n\n");
             printf("\t\t\t\t\t ---------NICEFLIX--------\n\n");

             printf("\t\t\t\t\t 1 - Inserir cadastro\n");
             printf("\t\t\t\t\t 2 - consultar cadastro\n");
             printf("\t\t\t\t\t 3 - remover cadastro\n");
             printf("\t\t\t\t\t 4 - alterar cadastro\n");
             printf("\t\t\t\t\t 5 - sair do programa\n\n");


             printf("\t\t\t\t\t---escolha a opcao desejada---\n");
             scanf("\t\t\t\t\t %d", &menu);

   switch(menu){
         case 1:
           //inserir cadastro
           printf("\t\t\t\t\tQuantos cadastros voce deseja realizar?\n");
           scanf("%d", &quant);

           nome: ;
           char nome[100];

           for(i=0; i<quant; i++){
           system("cls");
           printf("\n\n\n\n\n\n\n\n");
           printf("\t\t\t\t---------CADASTRO---------\n");
           printf("\t\t\t\tDigite o seu ID: ");
           scanf("\t\t\t\t%d", &id);
           printf("\t\t\t\tDigite seu nome completo: ");
           fflush(stdin);
           scanf("\t\t\t\t%[^\n]s", &nome);
           printf("\t\t\t\tDigite sua data de nascimento dd/mm/aa\n");
           printf("\t\t\t\tdia: ");
           scanf("\t\t\t\t%d", &dia);
           printf("\t\t\t\tmes: ");
           scanf("\t\t\t\t%d", &mes);
           printf("\t\t\t\tano: ");
           scanf("\t\t\t\t%d", &ano);
           printf("\t\t\t\t----CADASTRO FINALIZADO----\n\n");
           system("pause");
           printf("----CADASTRO FINALIZADO----\n\n");
           system("cls");
            }
           break;

     case 2:
     //consultar cadastro
           system("cls");
           printf("\n\n\n\n\n\n\n\n");
           printf("\t\t\t\t----------CONSULTA DE CADASTRO-----------\n\n");
           printf("\t\t\t\tSeu id eh: %d\n\n ", id);
           printf("\t\t\t\tSeu nome eh: %s\n\n", nome);
           printf("\t\t\t\tSua data de nascimento eh: %d/%d/%d\n\n", dia, mes, ano);
           printf("\t\t\t\t----------Voltar para o Menu-------------\n\n");
           system("pause");
           system("cls");
           break;

      case 3: //remover cadastros
            printf("\n\n\n\n\n\n\n\n");
            system("cls");
            id=0;
            nome[0]='\0';
            dia=0;
            mes=0;
            ano=0;
            printf("\t\t\t\t-------cadastro excluido-------\n\n");
            system("pause");
            system("cls");
            break;

      case 4: //alterar cadastro
            system("cls");
                printf("\n\n\n\n\n\n\n\n");
              printf("\t\t\t\tVoce deseja alterar quantos campos cadastrados?\n");
              scanf("\t\t\t\t%d", &quant);
              for(i=0; i<quant; i++){
              printf("\t\t\t\t------Alterar cadastro de cliente---------\n\n");
              printf("\t\t\t\t 1 - Alterar nome do cliente\n\n");
              printf("\t\t\t\t 2 - Alterar Id do cliente\n\n");
              printf("\t\t\t\t 3 - Alterar data de nascimento\n\n");
              printf("\t\t\t\tQual opcao voce deseja Alterar\n");
              scanf("\t\t\t\t%d", &opcao);

      switch(opcao){

    case 1:   //alterar nome do cliente
            system("cls");
          printf("\t\t\t\tAlterar nome do cliente: ");
          fflush(stdin);
          scanf("\t\t\t\t%[^\n]s", &nome);
          printf("\t\t\t\tNovo nome do cliente: %s\n\n", nome);
          printf("\t\t\t\t---Nome Alterado---\n");
          system("pause");
          system("cls");
      break;

    case 2:  //alterar ID

          system("cls");
        printf("\t\t\t\t-------Alterar Id do cliente-----\n\n");
        printf("\t\t\t\tDigite o seu novo ID: ");
        scanf("\t\t\t\t%d", &id);
        printf("\t\t\t\tO seu novo id eh: %d\n", id);
        printf("\t\t\t\t-----ID Alterado-----\n\n");
        system("pause");
        system("cls");
      break;

    case 3:   //alterar data de NASCIMENTO

        system("cls");
        printf("\t\t\t\t-----Alterar Data de nascimento-----\n\n");
        printf("\t\t\t\tDigite sua data de nascimento dd/mm/aa\n");
        printf("\t\t\t\tdia: ");
        scanf("\t\t\t\t%d", &dia);
        printf("\t\t\t\tmes: ");
        scanf("\t\t\t\t%d", &mes);
        printf("\t\t\t\tano: ");
        scanf("\t\t\t\t%d", &ano);
        printf("\t\t\t\tSua nova data de nascimento eh : %d/%d/%d\n", dia, mes, ano);
        printf("\t\t\t\t-----Data de nascimento alterada-----\n\n");
        system("pause");
        system("cls");
      break;

          }
        }
      }
    }
  }
