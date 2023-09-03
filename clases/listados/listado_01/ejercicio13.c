#include <stdio.h>

int main()
{
    int candidatos, electores;
    scanf("%d %d", &candidatos, &electores);

    // Verificadores
    if (candidatos < 1 || candidatos > 10000)
    {
        return 0;
    }
    else if (electores < 1 || electores > 10000)
    {
        return 0;
    }

    // Arreglos para guardar los datos
    int postulantes[candidatos];
    int votacion[electores];
    float procentajes[candidatos];

    // Lleno un arreglo con los posibles votos de los electores
    for (int i = 1; i <= candidatos; i++)
    {
        postulantes[i - 1] = i;
    }

    // Registro los votos de los electores
    for (int i = 0; i < electores; i++) // 1 2 3 2 1 1
    {
        int x;
        scanf("%d", &x);
        if (x < 1 || x > candidatos)
        {
            return 0;
        }
        votacion[i] = x;
    }

    // Creo un contador que ire guardando en un arreglo para contar la cantidad de votos, con float contador voy reiniciando ese contador
    for (int i = 0; i < candidatos; i++)
    {
        float contador = 0;
        for (int j = 0; j < electores; j++)
        {
            if (postulantes[i] == votacion[j])
            {
                contador++;
            }
        }
        procentajes[i] = (contador / (float)electores) * 100;
    }

    // Muestro los porcentajes de voto en pantalla
    for (int i = 0; i < candidatos; i++)
    {
        printf("%0.2f%%", procentajes[i]);
        if (i < candidatos - 1)
        {
            printf("\n");
        }
    }

    return 0;
}