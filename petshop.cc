#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main menu(){

  int opc;

  printf("Bem-vindo(a) ao petshop Animarias\n\nSelecione uma das opcoes abaixo para continuar:\n");
  printf("[1] - Menu Animais\n[2] - Menu Funcionarios\nOpcao: ");
  scanf("%d", &opc);

  switch (opc)
  {
  case 1:
    animais();
    break;
  
  case 2:
   funcionarios();
   break;

  default:
    printf("!!!Opcao Invalida!!!");
    break;
  }
}


//PARTE ANIMAL
typedef struct animal
{
  char tipo[20], nome[50], alergias[50], diagnostico[100];
  int i, idade, id=0, qtd[MAX]; 

} animal;

int animais(){
  int opc;

  printf("[1] - Cadastrar Animais\n[2] - Buscar Animal\n[3] - Atualizar Animal\n[4] - Cadastrar Diagnostico\n[5] - Consultar Diagnostico\n[6] - Listar Ultimos Diagnosticos Cadastrados\n[7] - Animal mais antigo\nOpcao: ");
  scanf("%d", &opc);

  switch (opc)
  {
  case 1:
    cadastroAnimal();
    break;

    case 2:
    /* code */
    break;

    case 3:
    /* code */
    break;

    case 4:
    /* code */
    break;

    case 5:
    /* code */
    break;

    case 6:
    /* code */
    break;

    case 7 :
    /* code */
    break;
      
  default:
    printf("!!!Opcao Invalida!!!");
    break;
  }


}

struct animal bicho;

int cadastroAnimal(){
  
  bicho
  int opc;

  printf("Cadastro de Animais\n");
  printf("\n\n");
  id = id+1;
  printf("Insira o nome de seu animal: ");
  scanf("%[^\n]s", bicho.nome);
  printf("\nInforme o tipo de seu animal: ");
  scanf("%[\n]s", bicho.tipo);
  printf("\nInforme a idade de seu animal: ");
  scanf("%d", &bicho.idade);
  printf("\n===============================");
  printf("\nSeu animal possui alguma alergia\n[1] - Sim\n[2] - Nao\nOpcao: ");
  scanf("%d", &opc);1

  do{
    print
  }while (opc == 2)
  {
    printf("\nParabens, seu animal foi cadastrado com sucesso!\n");
  }
  system("pause");
  return menu();
}

int buscarAnimal(){
  
  system("pause");
  return menu();
}


//PARTE FUNCIONÁRIO
typedef struct papel 
{
  int id;
  char papel[50];

} papel;

struct papel cargo;

typedef struct data
{
  int dia, mes, ano;

} data;

struct data datanasc;

typedef struct funcionario
{

  char nome[50];
  int id;
  float salario;
  bool ativo[2];

} funcionario;




int main(){

  return 0;
}