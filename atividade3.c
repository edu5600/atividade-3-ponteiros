
/*
A)
    1) Serão exibidos, repectivamente, o valor da variável i (pois o ponteiro aponta para seu endereço), e o endereço de i (que esta armazenado no ponteiro);
    2) Endereço da variável conta, endereço da variável salario e o endereço da variável resposta;
    3) 55 (foi levado a variável valor via o ponteiro *p), enderço da variável num e o valor armazenado em num (também 55).
    
    

B)
    1) int *pti; ;
    2) pti = &i; ;
    3) i = *pti; (pega o valor que está armazenado no endereço que *pti armazena e leva ele a variável i);



C)
    5) pti armazena o endereço da variável i, e não o valor da mesma. Então é falsa;



D)
*/



int main () {
    float num1 = 7.3, num2;
    float *fp;
    fp = &num1;
    printf ("%d\n", *fp);
    num2 = *fp;
    printf ("%d\n", num2);
    printf ("%p\n", &num1);
    printf ("%p\n", (fp - 1));
}