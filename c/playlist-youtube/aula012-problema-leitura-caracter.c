int main(){

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura e o sexo (f, F, m ou M)\n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c", idade, peso, altura, sexo);

    return 0;
}