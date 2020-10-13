#include <stdio.h>
#include<math.h>

void quadrado()
{
  float a, p, lado;
  printf("\nInsira o valor do lado do quadrado: ");
  scanf("%f", &lado);
  a=lado*lado;
  p=lado*4;
  printf("\nArea=%f\nPerimetro=%f\n", a, p);
}

void triangulo()
{
  float a, p, S, l1, l2, l3, altura;
  printf("\nInsira o valor do lado 1: ");
  scanf("%f", &l1);
  printf("\nInsira o valor do lado 2: ");
  scanf("%f", &l2);
  printf("\nInsira o valor do lado 3: ");
  scanf("%f", &l3);
  S=l1+l2+l3;
  p=S/2;
  a=sqrt(p*(p-l1)*(p-l2)*(p-l3));
  printf("\nArea=%f\nPerimetro=%f\n", a, S);
}

float arealosango(float D, float d)
{
  return(D*d/2);
}

float perimetrolosango(float D, float d)
{
  return(4*sqrt(((D/2)*(D/2))+((d/2)*(d/2))));
}

int main()
{
  int select=0;
  float d, D, area, perimetro;
  while(select!=4)
  {
    printf("\n1.Quadrado\n2.Triangulo\n3.Losango\n");
    scanf("%d", &select);

    if(select==1)
    {
      quadrado();
    }

    if(select==2)
    {
      triangulo();
    }

    if(select==3)
    {
      printf("\nInsira o valor da diagonal maior: ");
      scanf("%f", &D);
      printf("\nInsira o valor da diagonal menor: ");
      scanf("%f", &d);
      area=arealosango(D,d);
      perimetro=perimetrolosango(D,d);
      printf("\nArea=%f\nPerimetro=%f\n", area, perimetro);
    }
  }

  return 0;
}