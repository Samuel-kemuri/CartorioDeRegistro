#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço de memoria
#include <locale.h> //biblioteca de alocaçao de texto por região
#include <string.h> //biblioteca responsavel por cuidar das string

//função de registro
int registro(){
	
	char arquivo[40];
	 
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	int loop=0;
	
	setlocale(LC_ALL, "Portuguese"); //Definindo os caracteris da linguagem portuguesa-br
	
	// registrando a vareavel 'nome'
	system("cls");
	printf("\n ---{ Registro }--- \n");
	printf("\n Nome:\n");
	printf(" Sobrenome:\n");
	printf(" Cpf:\n");
	printf(" Cargo:\n");
	printf("\n Digite o nome: ");
	scanf("%s", nome);
	// fim
	
	system("cls"); //limpar chat
	
	// registrando a vareavel 'sobrenome'
	printf("\n ---{ Registro }--- \n");
	printf("\n Nome: %s\n", nome);
	printf(" Sobrenome:\n");
	printf(" Cpf:\n");
	printf(" Cargo:\n");
	printf("\n Digite o sobrenome: ");
	scanf("%s", sobrenome);
	//fim
	
	system("cls"); //limpar chat
	
    // registrando a vareavel 'cpf'
    printf("\n ---{ Registro }--- \n");
	printf("\n Nome: %s\n", nome);
	printf(" Sobrenome: %s\n", sobrenome);
	printf(" Cpf:\n");
	printf(" Cargo:\n");
	printf("\n Digite o cpf: ");
	scanf("%s", cpf);
	//fim
	
	system("cls"); //limpar chat
	
	// registrando a vareavel 'cargo'
	printf("\n ---{ Registro }--- \n");
	printf("\n Nome: %s\n", nome);
	printf(" Sobrenome: %s\n", sobrenome);
	printf(" Cpf: %s\n", cpf);
	printf(" Cargo:\n");
	printf("\n Digite o cargo: ");
	scanf("%s", cargo);
	// fim
	
	system("cls"); //limpar chat
	
	strcpy(arquivo, cpf); // arquivo recebe valor de cpf ( arquivo = cpf )
	
	FILE *file; // chamando a funçao FILE e pedindo para criar um file
	
	//criando documento e nomeando com 'arquivo'
	file = fopen(arquivo, "w"); // criando documento é renomeando o documento com a string atribuida a vareavel 'arquivo' 
	fclose(file); // encerrando o documento
    // fim
	
	// adcionando 'nome' no documento
	file = fopen(arquivo, "a");
	fprintf(file," Nome: ");
	fclose(file);
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	file = fopen(arquivo, "a");
	fprintf(file,"\n");
	fclose(file);
	// fim
	
	// adcionando 'sobrenome' no documento
	file = fopen(arquivo, "a");
	fprintf(file," Sobrenome: ");
	fclose(file);
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
    file = fopen(arquivo, "a");
	fprintf(file,"\n");
	fclose(file);
	// fim
	
	// adcionando 'cpf' no documento
	file = fopen(arquivo, "a");
	fprintf(file," Cpf: ");
	fclose(file);
	file = fopen(arquivo, "a");
	fprintf(file, cpf);
	fclose(file);	 
    file = fopen(arquivo, "a");
	fprintf(file,"\n");
	fclose(file);
	// fim
	
	// adcionando 'cargo' no documento
	file = fopen(arquivo, "a");
	fprintf(file," Cargo: ");
	fclose(file);
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	// fim
	
	// laucher avisando que foi um sucesso o cadastro
	printf("\n ---{ Registro }--- \n");
	printf("\n Nome: %s\n", nome);
	printf(" Sobrenome: %s\n", sobrenome);
	printf(" Cpf: %s\n", cpf);
	printf(" Cargo: %s\n", cargo);
	printf("\n Os dados foram registrados com sucesso!\n");
	printf("\n");
	system("pause");
	// fim

    system("cls"); //limpar chat
	 
	// laucher pergutando se quer outro registro
	printf("\n ---{ Registro }--- \n"); //Cabesario da aplicação
	printf("\n Desejada fazer outro registro? \n\n"); //Escolha de Opçoes
	
	printf(" # 1- Fazer outro registro \n"); 
	printf(" # 2- Voltar ao menu \n\n");
	  
	printf(" Opção: ");
	scanf("%d", &loop); //armazenando a escolha do ususario
	 
	system("cls"); //limpar chat
	
	switch(loop){
	 	
	 	case 1: 
         	registro();
         	main();
	    break;
		   
	    case 2:
	     	main();
	 	break;
	 	   
	 	default: 
	 	 	printf("\n ---{ Registro }--- \n");
			printf("\n Essa opção não existe! \n"); 
	 	 	printf("\n");
	 		system("pause");
	 	break;
	}
	//fim das opçoes
}

//função de consulta
 int consultar(){
 
	char conteudo[40];
	char cpf[40];
	int opcao1=0;
	int loop=0;
 
	setlocale(LC_ALL, "Portuguese"); //Definindo os caracteris da linguagem portuguesa-br
 
	//cabecalho da funcao consultar
	system("cls");
	printf("\n ---{ Consulta }--- \n");
	printf("\n Digite o cpf que deseja consultar: ");
	scanf("%s", cpf);
	//fim
 
	system("cls"); //limpat texto
 
	FILE *file; //chamando a funcao file
	file = fopen(cpf, "r"); //abrindo arquivo
 
	//criando if caso nao encontemos o registro
 	if(file == NULL){
 		system("cls");
 		printf("\n ---{ Consulta }--- \n");
 		printf("\n Não foi possivel localizar o registro!");
 		printf("\n\n"); 
 		printf(" # 1- Tentar novamente \n"); 
    	printf(" # 2- Voltar ao menu \n\n"); 
    	
    	printf(" Opção: ");
   		scanf("%d", &opcao1);
    	
   		switch(opcao1){
	 	
	 		case 1: 
         		consultar();
         		main();
	    	break;
		   
	    	case 2:
	     		main();
	 	 	break;
	 	   
	 	 	default: 
	 	 		printf("\n ---{ Consulta }--- \n");
				printf("\n Essa opção não existe! \n"); 
	 	 		printf("\n");
	 			system("pause");
	 	 	break;
		}
 	}
 	//fim do if
 	
 	//laucher mostrando os dados do registro   
 	printf("\n ---{ Consulta }--- \n");
 	printf("\n Essas são as informações do registro: \n\n");

 	//criando while e convertendo o file para o char conteudo
 	while(fgets(conteudo, 250, file) != NULL){
 		printf("%s", conteudo);
 	}
 
 	printf("\n\n");
 	system("pause");
 	//fim do laucher
 
	system("cls"); //limpar chat
	 
	// laucher pergutando se quer fazer outra consulta
	printf("\n ---{ Consulta }--- \n"); //Cabesario da aplicação
	printf("\n Desejada fazer outra consulta? \n\n"); //Escolha de Opçoes
	    
	//inicio das opçoes
 	printf(" # 1- Fazer outra consulta \n"); 
	printf(" # 2- Voltar ao menu \n\n"); 
	//fim das opçoes
	     
	printf(" Opção: ");
	scanf("%d", &loop); //armazenando a escolha do ususario 
	 
	system("cls"); //limpar chat
	 
	switch(loop){
	 	
	 	case 1: 
         	consultar();
         	main();
	    break;
		   
	    case 2:
	     	main();
	 	 break;
	 	 	   
	 	 default: 
	 	 	printf("\n ---{ Consulta }--- \n");
			printf("\n Essa opção não existe! \n"); 
	 	 	printf("\n");
	 		system("pause");
	 	 break;
	}
	//fim do laucher
}

//função de deletar
int deletar(){
	
	char cpf[40]; 
	char conteudo[40];
	int opcao=0;
	int opcao1=0;
	int loop=0;
	
	setlocale(LC_ALL, "Portuguese"); //Definindo os caracteris da linguagem portuguesa-br
	
	//laucher para deletar cadastro
	system("cls");
	printf("\n ---{ Deletar }--- \n");
	printf("\n Digite o Cpf do registro que deseja deletar: ");
	scanf("%s", cpf);
	//fim
	
	system("cls"); //limpat texto
	
	//abrindo arquivo ja criado
	FILE *file; //chamando a funcao file
    file = fopen(cpf, "r"); //abrindo arquivo
    //fim
    
    //criando if caso nao encontemos o registro
	if(file == NULL){
    	printf("\n ---{ Deletar }--- \n");
     	printf("\n Não foi possivel localizar o registro!");
    	printf("\n\n");
    	 
    	printf(" # 1- Tentar novamente \n"); 
        printf(" # 2- Voltar ao menu \n\n"); 
    	printf(" Opção: ");
    	scanf("%d", &opcao1);
    	
    	switch(opcao1){
	    	
	    	case 1: 
            	deletar();
            	main();
	 	    break;
	 	   
	 	    case 2:
	 	    	main();
	 	    break;
	 	   
	 	    default: 
	 	    	printf("\n ---{ Deletar }--- \n");
				printf("\n Essa opção não existe! \n"); 
	 	      	printf("\n");
	 	      	system("pause");
	 	    break;
	 	}
    }
    //fim do if
  
   //lanucher para deletar registro
   printf("\n ---{ Deletar }--- \n");
   printf("\n Essas são as informações que deseja deletar? \n\n");
 
   //criando while e convertendo o file para o char conteudo
   while(fgets(conteudo, 250, file) != NULL){
        printf("%s", conteudo);
   }
   
   fclose(file);
   
   printf("\n\n");
   printf(" # 1- Sim \n"); 
   printf(" # 2- Não \n\n"); 
   
   printf(" Opção: ");
   scanf("%d", &opcao); //armazenando a escolha do ususario
   system("cls"); //limpar chat
	
   switch(opcao){
	    	
	    	case 1: 
	    		system("cls"); //limpar chat
		        remove(cpf);
		        printf("\n ---{ Deletar }--- \n");
		      	printf("\n Deletamos o arquivo com sucesso! \n\n");
		      	system("pause");
	 	    break;
	 	   
	 	    case 2:
	 	    	system("cls");
	 	        deletar();
	 	    break;
	 	   
	 	   // default igual a "se não"
	 	    default: 
	 	    	printf("\n ---{ Deletar }--- \n");
			  	printf("\n Essa opção não existe! \n"); 
	 	      	printf("\n");
	 	      	system("pause");
	 	    break;
   }
   //fim do laucher para deletar registro
   
   system("cls"); //limpar chat
	 
	//laucher para perguntar se quer deletar outro nome
	printf("\n ---{ Deletar }--- \n"); //Cabesario da aplicação
	printf("\n Desejada fazer outro delete? \n\n"); //Escolha de Opçoes
	    
	//inicio das opçoes
 	printf(" # 1- Fazer outro delete \n"); 
	printf(" # 2- Voltar ao menu \n\n"); 
	//fim das opçoes
	     
	printf(" Opção: ");
	scanf("%d", &loop); //armazenando a escolha do ususario 
	 
	system("cls"); //limpar chat
	 
	switch(loop){
	 	
	 	case 1: 
         	deletar();
         	main();
	    break;
		   
	    case 2:
	     	main();
	 	 break;
	 	   
	 	 default: 
	 	 	printf("\n ---{ Deletar }--- \n");
			printf("\n Essa opção não existe! \n"); 
	 	 	printf("\n");
	 		system("pause");
	 	 break;
	}
   //fim dolaucher de deletar outro nome
}

int main(){
	
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;){
		
		system("cls"); //limpar chat
		
	    setlocale(LC_ALL, "Portuguese"); //Definindo os caracteris da linguagem portuguesa-br
	 
	    printf("\n ---{ Cartório de Registros }--- \n"); //Cabesario da aplicação
	    printf("\n Escolha a opção desejada: \n\n"); //Escolha de Opçoes
	    
	    //inicio das opçoes
 	    printf(" # 1- Fazer registro \n"); 
	    printf(" # 2- Consultar registro \n"); 
	    printf(" # 3- Deletar registro \n"); 
	    printf(" # 4- Sair do sistema \n\n"); 
	    //fim das opçoes
	     
	    printf(" Opção: ");
	    scanf("%d", &opcao); //armazenando a escolha do ususario 
	 
	    system("cls"); //limpar chat
	    
	    //inicio de ecolha
	    switch(opcao){
	    	
	    	case 1: 
		   		registro();
	 	    break;
	 	   
	 	    case 2:
	 	    	consultar();
	 	    break;
	 	   
	 	    case 3:
	 	    	deletar();
	 	    break;
	 	    
	 	    case 4:
	 	    	printf("\n ---{ Cartório de Registros }--- \n"); 
	 	    	printf("\n Obrigado por ultilizar o sitema! \n");
	 	    	return 0;
	 	    break;
	 	    
	 	    //default igual a "se não"
	 	    default: 
	 	    	printf("\n ---{ Cartório de Registros }--- \n");
				printf("\n Essa opção não existe! \n"); 
	 	    	printf("\n");
	 	    	system("pause");
	 	    break;
	 	   	  
	    }
	    //fim de ecolha
	    
   }
	    
}
