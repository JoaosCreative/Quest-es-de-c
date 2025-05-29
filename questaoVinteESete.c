 #include <stdio.h>

int main() {
    int preco;

    printf("Digite o preço do produto $ ");
    scanf("%d", &preco);

    if (preco < 100){
        preco = preco * 110 / 100;
    }
    else
        preco = preco * 120 / 100;

    printf("Novo preço: R$ %d\n", preco);

    return 0;
}
