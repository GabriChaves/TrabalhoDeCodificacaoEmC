int main() {
    int x, y, z;
    printf("Digite os três lados do triângulo: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z)
            printf("Triângulo equilátero\n");
        else if (x == y || x == z || y == z)
            printf("Triângulo isósceles\n");
        else
            printf("Triângulo escaleno\n");
    } else {
        printf("Não forma um triângulo\n");
    }

    return 0;
}
