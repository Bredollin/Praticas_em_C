Validação de dados



int main()
{
	char nome[256]
	int idade;

	printf("ola qual o seu nome?\n");
		scanf("%s",&nome);


	printf("ola qual a sua idade?\n");
		scanf("%d",&idade);


	printf("Nome: %s \nidade: %d\n", nome, idade );

	printf("\nAguarde enquanto lemos seus dados ...");

	printf("A primeira letra do seu nome é: %c, nome[0]");


	if(idade >= 18){
		printf("\nVoce e adulto!");
	}else if (idae >= 12){
		printf("\nVoce e adolescente");
	}else{
		printf("\nVoce e crianca!");
	}


	return 0;
}