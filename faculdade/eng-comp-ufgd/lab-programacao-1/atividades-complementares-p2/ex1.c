#include <stdio.h>
#include <locale.h>

void consultsaldo(int a)
{
    printf("R$%d,00", a);
    printf("\n");
}

void depositar(int *a, int b)
{
    *a=*a+b;
    printf("\nOperação realizada com sucesso.\n");
}

void sacar(int *a, int b) {

    int c, nota2=0, nota5=0, nota10=0, nota20=0, nota50=0, nota100=0;

    *a=*a-b;
    c=b;
    
    if(b!=3) {
        while(c>9) {
            c=c%10;
        }
  
        if(c<10 && c!=0) {
            if(c==9) {
                nota2=nota2+2;
                nota5++;
            }

            if(c==8) {
                nota2=nota2+4;
            }

            if(c==7) {
                nota2++;
                nota5++;
            }

            if(c==6) {
                nota2=nota2+3;
            }

            if(c==5) {
                nota5++;
            }

            if(c==4) {
                nota2=nota2+2;
            }

            if(c==3) {
                nota2=nota2+4;
                nota5++;
                b=b-10;
            }

            if(c==2) {
                nota2++;
            }
        }

        b=b-c;
        while(b>=10) {
            while(b>=20) {
                while(b>=50) {
                    while(b>=100) {
                        b=b-100;
                        nota100++;
                    }

                    if(b!=0 && b>=50) {
                        b=b-50;
                        nota50++;
                    }
                }

                if(b!=0 && b>=20) {
                    b=b-20;
                    nota20++;
                }
            }

            if(b!=0) {
                b=b-10;
                nota10++;
            }
        }
    
        if(nota10>1) {
            while(nota10>1) {
                nota20++;
                nota10--;
            }
        }

        if(nota2!=0) {
            printf("\n%d notas de R$02,00", nota2);
        }

        if(nota5!=0) {
            printf("\n%d notas de R$05,00", nota5);
        }

        if(nota10!=0) {
            printf("\n%d notas de R$10,00", nota10);
        }

        if(nota20!=0) {
            printf("\n%d notas de R$20,00", nota20);
        }

        if(nota50!=0) {
            printf("\n%d notas de R$50,00", nota50);
        }

        if(nota100!=0) {
            printf("\n%d notas de R$100,00", nota100);
        }
    
        printf("\nOperação realizada com sucesso.\n");
    }

    else {
        printf("\nOperação não pode ser realizada.\n");
    }
}

int main() {

    setlocale(" ",LC_ALL);

    int select=0, saldo=0, valor;
  
    while(select!=4) {
        printf("1.Consultar saldo\n2.Depositar um valor\n3.Sacar um valor\n4.Sair\n");
        scanf("%d", &select);
    
        if(select==1) {
            consultsaldo(saldo);
        }
    
        if(select==2) {
            printf("\n\nDigite o valor a ser inserido: ");
            scanf("%d", &valor);
            if(valor<=1) {
                printf("\nValor inválido\n");
            }
            else {
                depositar(&saldo, valor);
            }
        }
    
        if(select==3) {
            printf("\n\nDigite o valor a ser retirado: ");
            scanf("%d", &valor);

            if(valor<=1 || valor>saldo) {
                printf("\nOperação inválida\n");
            }
            else {
                sacar(&saldo, valor);
            }
        }
    }
}