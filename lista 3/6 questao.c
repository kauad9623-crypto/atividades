// 6. Fatorial
void fatorial() {
    int n; long long fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) fat *= i;
    printf("Fatorial: %lld\n", fat);
}
