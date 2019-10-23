#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int menu()
{
	int op= 0;
	
	printf("Seja Bem-Vindo(a), escolha uma das opções do menu!\n"
        	"0- Sair do programa.\n"
           	"1- Digite um número para saber se ele é par ou impar.\n"
          	"2- Digite um número de ponto flutuante para saber sua potenciação, resultada em notação científica.\n"
           	"3- Digite um número de ponto flutuante para saber sua radiciação, resultada em notação científica.\n"
        	"4- Digite um número para saber se ele é bissexto ou não.\n"
           	"5- Digite 3 notas para saber a média ponderada.\n"
           	"6- Digite 2 notas para saber a média aritmética.\n"
           	"7- Digite um número para imprimir o seu fatorial.\n"
           	"8- Digite um número para saber se ele é primo ou não.\n"
           	"9- Digite um número para saber os primeiros números da sequência de Fibonacci.\n"
        	"10- Digite seu nome e sua matrícula, para saber a sua matrícula em hexadecimal.\n");
	
	scanf("%d", &op);
}
int impar()
{
	int numEscolhido;
	
  	printf("Digite um número inteiro para saber se ele é par ou impar: ");
	scanf("%d", &numEscolhido);

    if(numEscolhido%2 == 0){
    	printf("\n O número é par.\n");
    } else{
        printf("\n O número é impar.\n");
    }
}
int poten() 
{
	float baseA = 0;
    int expoenteB = 0;
	float resultado = 0;

    printf("Digite um número de ponto flutuante para representar a base da potência: \n");
    scanf("%f", &baseA);
    printf("Digite um número inteiro que irá representar o expoente: \n");
    scanf("%d", &expoenteB);

    resultado = pow (baseA, expoenteB);

    printf("O resultado da potência em notação científica é: %.3E.\n", resultado);
}
int radi()
{
	float radA = 0;
    int indiceB = 0;
    float resultado = 0;

    printf("Digite um número que será o radicando: ");
    scanf("%f", &radA);
    printf("Digite o númerio inteiro que será o índice da raiz: ");
    scanf("%d", &indiceB);

    resultado = pow(radA, 1./indiceB);

    printf("\nResultado da raiz em notação científica é: %.3E.", resultado);
}
int bissexto()
{
	int ano = 0;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if(ano > 0){
		if(ano%4 == 0){
    		printf("O ano %d é bissexto.\n", ano);
        	} else{
            	printf("O ano %d não é bissexto.", ano);
        	}
    } else{
        printf("Ano inválido.\n");
    }
}
int ponderada()
{
	float nota1, nota2, nota3, mediaPon;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

	mediaPon = (1*nota1+1*nota2+2*nota3)/4;

    if(mediaPon >= 60){
    	printf("Aluno aprovado! Média: %.2f.", mediaPon);
    } else{
        printf("Aluno reprovado! Média: %.2f.", mediaPon);
    }
}
int aritmetica()
{
	float nota1, nota2, mediaArit;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
		mediaArit = (nota1+nota2)/2;
		printf("A média é: %.2f", mediaArit);
	} else{
		printf("Média inválida.");
	}
}
int fatorial()
{
	int num;
    int fat = 0;
    int numFat;

    printf("Digite um número inteiro: \n");
    scanf("%d", &numFat);

    num = numFat; //nao mudar valor

    if(num > 0){
        for(fat=1; num>1; num--){
            fat=fat*num;
        }
        printf("O fatorial de %d é: %d\n", numFat, fat);
    } else{
        printf("Inválido.\n");
    }
}
int primo()
{
	int i, numPri, num = 0;
                
    do{
        printf("Digite um número para saber se ele é primo: \n");
        scanf("%d", &numPri);
        
        if(numPri<=0){
            printf("Número inválido.\n");
        }
    }while(numPri <= 0);
    
    for(i= 2; i<numPri/2; i++){
        if(numPri%i == 0){
            num++;
            break;
        }
    }
    if(num == 0){
		printf("O número %d é primo.\n", numPri);
    } else{
        printf("O número %d não é primo.", numPri);
    }
}
int fibonacci()
{
	int i, elem, pri, seg, soma;

    printf("Digite a quantidade de elementos que você deseja imprimir na sequência de Fibonacci:");
    scanf("%d", &elem);

    pri = 0;
    seg = 1;

    if(elem >= 0){
        printf("Série de Fibonacci: %d\n", seg);

    }else if(elem <= 0){
        printf("Série de Fibonacci: %d\n", pri);
    }

    for(i = 2; i<=elem; i++){
        soma = pri+seg;
        pri = seg;
        seg = soma;
        printf("%d ", soma);
    }
}
int hexadecimal()
{
	int matricula = 0;

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);
    
	printf("A matrícula em hexadecimal é: %X \n\n");
    		
}
int adeus()
{
	printf("\nAté a próxima.");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    //menu();
		
	int numDigitado;
	numDigitado= menu();

    do{
        switch(numDigitado){
        	
        	//encerra o menu
			 case 0 :{
                adeus();
                break;
            }
            //Informa se o número é par ou impar.
            case 1 :{
				impar();
                break;
            }
            //Calcula a potenciacão de números com ponto flutuante
            case 2 :{
            	poten();
                break;
            }
            //Calcula a raiz de números com ponto flutuante 
            case 3 :{
                radi();
                break;
            }
            //Informa quando o ano é bissexto
            case 4 :{
				bissexto();
                break;
            }
            //Calcula média ponderada de 3 notas.
            case 5 :{
            	ponderada();
                break;
            }
            //Calcula média aritmética de 2 notas.
            case 6 :{
            	aritmetica();
                break;
            }
            //Calcula o fatorial
            case 7 :{
            	fatorial();
                break;
            }
            //Calcula se o número é primo ou não
            case 8 :{
            	primo();
                break;
            }
            //Sequência de Fibonacci
            case 9 :{
            	fibonacci();
                break;
            }
            //Imprime nome e matrícula em hexadecimal
            case 10 :{
            	hexadecimal();
                break;
        	}
            default :
                printf("\nVocê digitou uma opção inválida, tente novamente.");
                break;
        	
		}
    } while(numDigitado!=0);
    
    return 0;
}

