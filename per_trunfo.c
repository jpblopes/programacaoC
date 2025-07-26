#include <stdio.h>
#include <string.h>

struct Carta {
    char Estado[26];
    char Codigo[4];
    char NomeDaCidade[50];
    int Populacao;
    float Area;
    float PIB;
    int NumeroDePontosTuristicos;
};

int main() {
    struct Carta Carta1, Carta2;

    printf("Cadastro Carta 1\n");

    printf("Estado: \n");
    scanf("%25s", Carta1.Estado);
    getchar(); // Limpa o buffer

    printf("Codigo: \n");
    scanf("%3s", Carta1.Codigo);
    getchar();

    printf("Nome da cidade: \n");
    fgets(Carta1.NomeDaCidade, sizeof(Carta1.NomeDaCidade), stdin);
    Carta1.NomeDaCidade[strcspn(Carta1.NomeDaCidade, "\n")] = '\0'; // Remove o \n

    printf("Populacao: \n");
    scanf("%d", &Carta1.Populacao);
    getchar();

    printf("Area (em Km2): \n");
    scanf("%f", &Carta1.Area);
    getchar();

    printf("PIB: \n");
    scanf("%f", &Carta1.PIB);
    getchar();

    printf("NumeroDePontosTuristicos: \n");
    scanf("%d", &Carta1.NumeroDePontosTuristicos);
    getchar();

    printf("\nCadastro Carta 2\n");

    printf("Estado: \n");
    scanf("%25s", Carta2.Estado);
    getchar();

    printf("Codigo: \n");
    scanf("%3s", Carta2.Codigo);
    getchar();

    printf("Nome da cidade: \n");
    fgets(Carta2.NomeDaCidade, sizeof(Carta2.NomeDaCidade), stdin);
    Carta2.NomeDaCidade[strcspn(Carta2.NomeDaCidade, "\n")] = '\0';

    printf("Populacao: \n");
    scanf("%d", &Carta2.Populacao);
    getchar();

    printf("Area (em Km2): \n");
    scanf("%f", &Carta2.Area);
    getchar();

    printf("PIB: \n");
    scanf("%f", &Carta2.PIB);
    getchar();

    printf("NumeroDePontosTuristicos: \n");
    scanf("%d", &Carta2.NumeroDePontosTuristicos);
    getchar();

    // Mostra os dados cadastrados
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", Carta1.Estado);
    printf("Codigo: %s\n", Carta1.Codigo);
    printf("Nome da cidade: %s\n", Carta1.NomeDaCidade);
    printf("Populacao: %d\n", Carta1.Populacao);
    printf("Area: %.2f Km2\n", Carta1.Area);
    printf("PIB: %.2f\n", Carta1.PIB);
    printf("Numero de pontos turisticos: %d\n", Carta1.NumeroDePontosTuristicos);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", Carta2.Estado);
    printf("Codigo: %s\n", Carta2.Codigo);
    printf("Nome da cidade: %s\n", Carta2.NomeDaCidade);
    printf("Populacao: %d\n", Carta2.Populacao);
    printf("Area: %.2f Km2\n", Carta2.Area);
    printf("PIB: %.2f\n", Carta2.PIB);
    printf("Numero de pontos turisticos: %d\n", Carta2.NumeroDePontosTuristicos);

    return 0;
}