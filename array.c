# include <cs50.h>
# include <stdio.h>

int main(void)
{
        //define arrays length
        int length;
        do
        {
        length = get_int ("Length: ");
        }
        while ( length < 1);

        //Declare array
        int value[length];
        value[0] = 1;

        //Imprimir el primer valor porque no sale
        printf("%i\n", value[0]);

        // Imprimir el valor x2 varias veces en función al tamanho de la tarea
        for (int i = 1; i < length; i++)
        {
            value[i] = 2* value [i - 1];
            printf("%i\n", value[i]);
        }
}