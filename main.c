#include "std.c"

int main() {
    pessoa p;

    fflush(stdin);
    scanf("%[^\n]s", p.nome);
    getchar();
    scanf("%[^\n]s", p.email);

    printf("%s\n%s\n", p.nome, p.email);
}
