#include <stdio.h>

//Manera antigua e ineficiente
//int main(void)
//{
//    printf("miaw\n");
//    printf("miaw\n");
//    printf("miaw\n");
//}


// Forma de aumentar o disminuir mecánica

//int main(void)
//{
//    int i = 3;
//    while (i > 0)
//    {
  //      printf("miaw \n");
    //    i--;
    //}
//}

// Forma eficiente
//int main (void)
//{
 //   for (int i = 0 ; i < 3 ; i++)
  //      {
    //        printf("meow \n");
      //  }
//}


//Loop infinito , para apagar el loop Control + "C"
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    while(true)
    {
        printf("meow\n");
    }
}