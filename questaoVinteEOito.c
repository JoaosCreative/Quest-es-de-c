    printf("Escolha (1, 2 ou 3): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        total = total * 90 / 100;
        printf("Você pagará R$ %d à vista.\n", total);
    } else if (opcao == 2) {
        printf("Você pagará 2x de R$ %d.\n", total / 2);
    } else if (opcao == 3) {
        total = total * 110 / 100;
        printf("Você pagará 3x de R$ %d.\n", total / 3);
        printf("Total com juros: R$ %d\n", total);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
