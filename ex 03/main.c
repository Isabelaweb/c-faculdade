
#include <stdio.h>

const int valor = 3;

int main ()

{

int vetor[4]={2,4,6,8};

vetor [0] = vetor [0] * valor;

vetor [1] = vetor [1] * valor;

vetor [2] = vetor [2] * valor;

vetor [3] = vetor [3] * valor;

printf ("\n  %d - ", vetor [3]);

printf ("\n  %d -", vetor [2]);

printf ("\n  %d -", vetor [1]);

printf ("\n  %d .", vetor [0]);

return 0;

}
