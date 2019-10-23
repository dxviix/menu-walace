#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int menu()
{
	int op= 0;
	
	printf("Seja Bem-Vindo(a), escolha uma das op��es do menu!\n"
        	"0- Sair do programa.\n"
           	"1- Digite um n�mero para saber se ele � par ou impar.\n"
          	"2- Digite um n�mero de ponto flutuante para saber sua potencia��o, resultada em nota��o cient�fica.\n"
           	"3- Digite um n�mero de ponto flutuante para saber sua radicia��o, resultada em nota��o cient�fica.\n"
        	"4- Digite um n�mero para saber se ele � bissexto ou n�o.\n"
           	"5- Digite 3 notas para saber a m�dia ponderada.\n"
           	"6- Digite 2 notas para saber a m�dia aritm�tica.\n"
           	"7- Digite um n�mero para imprimir o seu fatorial.\n"
           	"8- Digite um n�mero para saber se ele � primo ou n�o.\n"
           	"9- Digite um n�mero para saber os primeiros n�meros da sequ�ncia de Fibonacci.\n"
        	"10- Digite seu nome e sua matr�cula, para saber a sua matr�cula em hexadecimal.\n");
	
	scanf("%d", &op);
}
int impar()
{
	int numEscolhido;
	
  	printf("Digite um n�mero inteiro para saber se ele � par ou impar: ");
	scanf("%d", &numEscolhido);

    if(numEscolhido%2 == 0){
    	printf("\n O n�mero � par.\n");
    } else{
        printf("\n O n�mero � impar.\n");
    }
}
int poten() 
{
	float baseA = 0;
    int expoenteB = 0;
	float resultado = 0;

    printf("Digite um n�mero de ponto flutuante para representar a base da pot�ncia: \n");
    scanf("%f", &baseA);
    printf("Digite um n�mero inteiro que ir� representar o expoente: \n");
    scanf("%d", &expoenteB);

    resultado = pow (baseA, expoenteB);

    printf("O resultado da pot�ncia em nota��o cient�fica �: %.3E.\n", resultado);
}
int radi()
{
	float radA = 0;
    int indiceB = 0;
    float resultado = 0;

    printf("Digite um n�mero que ser� o radicando: ");
    scanf("%f", &radA);
    printf("Digite o n�merio inteiro que ser� o �ndice da raiz: ");
    scanf("%d", &indiceB);

    resultado = pow(radA, 1./indiceB);

    printf("\nResultado da raiz em nota��o cient�fica �: %.3E.", resultado);
}
int bissexto()
{
	int ano = 0;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if(ano > 0){
		if(ano%4 == 0){
    		printf("O ano %d � bissexto.\n", ano);
        	} else{
            	printf("O ano %d n�o � bissexto.", ano);
        	}
    } else{
        printf("Ano inv�lido.\n");
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
    	printf("Aluno aprovado! M�dia: %.2f.", mediaPon);
    } else{
        printf("Aluno reprovado! M�dia: %.2f.", mediaPon);
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
		printf("A m�dia �: %.2f", mediaArit);
	} else{
		printf("M�dia inv�lida.");
	}
}
int fatorial()
{
	int num;
    int fat = 0;
    int numFat;

    printf("Digite um n�mero inteiro: \n");
    scanf("%d", &numFat);

    num = numFat; //nao mudar valor

    if(num > 0){
        for(fat=1; num>1; num--){
            fat=fat*num;
        }
        printf("O fatorial de %d �: %d\n", numFat, fat);
    } else{
        printf("Inv�lido.\n");
    }
}
int primo()
{
	int i, numPri, num = 0;
                
    do{
        printf("Digite um n�mero para saber se ele � primo: \n");
        scanf("%d", &numPri);
        
        if(numPri<=0){
            printf("N�mero inv�lido.\n");
        }
    }while(numPri <= 0);
    
    for(i= 2; i<numPri/2; i++){
        if(numPri%i == 0){
            num++;
            break;
        }
    }
    if(num == 0){
		printf("O n�mero %d � primo.\n", numPri);
    } else{
        printf("O n�mero %d n�o � primo.", numPri);
    }
}
int fibonacci()
{
	int i, elem, pri, seg, soma;

    printf("Digite a quantidade de elementos que voc� deseja imprimir na sequ�ncia de Fibonacci:");
    scanf("%d", &elem);

    pri = 0;
    seg = 1;

    if(elem >= 0){
        printf("S�rie de Fibonacci: %d\n", seg);

    }else if(elem <= 0){
        printf("S�rie de Fibonacci: %d\n", pri);
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

    printf("Digite sua matr�cula: ");
    scanf("%d", &matricula);
    
	printf("A matr�cula em hexadecimal �: %X \n\n");
    		
}
int adeus()
{
	printf("\nAt� a pr�xima.");
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
            //Informa se o n�mero � par ou impar.
            case 1 :{
				impar();
                break;
            }
            //Calcula a potenciac�o de n�meros com ponto flutuante
            case 2 :{
            	poten();
                break;
            }
            //Calcula a raiz de n�meros com ponto flutuante 
            case 3 :{
                radi();
                break;
            }
            //Informa quando o ano � bissexto
            case 4 :{
				bissexto();
                break;
            }
            //Calcula m�dia ponderada de 3 notas.
            case 5 :{
            	ponderada();
                break;
            }
            //Calcula m�dia aritm�tica de 2 notas.
            case 6 :{
            	aritmetica();
                break;
            }
            //Calcula o fatorial
            case 7 :{
            	fatorial();
                break;
            }
            //Calcula se o n�mero � primo ou n�o
            case 8 :{
            	primo();
                break;
            }
            //Sequ�ncia de Fibonacci
            case 9 :{
            	fibonacci();
                break;
            }
            //Imprime nome e matr�cula em hexadecimal
            case 10 :{
            	hexadecimal();
                break;
        	}
            default :
                printf("\nVoc� digitou uma op��o inv�lida, tente novamente.");
                break;
        	
		}
    } while(numDigitado!=0);
    
    return 0;
}

