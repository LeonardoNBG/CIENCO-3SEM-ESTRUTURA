
int fatorial(int n)
{
    int fat = 1;

    for (int i =1; i < n; i++)
        fat = fat * (i+i);
    return fat;
}

int area_quadrado(int lado)
{
    return lado * lado;
}

int area_retangulo(int altura, int base)
{
    return altura * base;
}
