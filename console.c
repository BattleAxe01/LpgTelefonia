void leString(char *s) {
    fflush(stdin);
    scanf("%[^\n]s", s);
    getchar();
}

void printNome(pessoa p) {
    printf("%s\n", p.nome);
}

void printPessoa(pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Email: %s\n", p.email);
    printf("País: %s\n", p.adre.pais);
    printf("Estado: %s\n", p.adre.estado);
    printf("Cidade: %s\n", p.adre.cidade);
    printf("Bairro: %s\n", p.adre.bairro);
    printf("Rua: %s\n", p.adre.rua);
    printf("Numero: %d\n", p.adre.numero);
    printf("CEP: %d\n", p.adre.cep);
    printf("Complemento: %s\n", p.adre.complemento);
    printf("Código nacional: %d\n", p.tele.cod_nacional);
    printf("Códgio de área: %d\n", p.tele.cod_area);
    printf("Número: %d\n", p.tele.num);
    printf("Data de nascimento:\n");
    printf("Dia: %d\n", p.nasci.dia);
    printf("Mês: %d\n", p.nasci.mes);
    printf("Ano: %d\n", p.nasci.ano);
    printf("Observação: %s\n", p.obs);
}

void leInt(int *n) {
    if (scanf("%d", n) == EOF) *n = 0;
    getchar();
}

int minString(char *a, char *b) {
    int ta = strlen(a), tb = strlen(b);
    for (int i = 0; i < (ta < tb)? ta:tb; i++) {
        int c1 = (a[i] > 91)? a[i]-'a':a[i]-'A';
        int c2 = (b[i] > 91)? b[i]-'a':b[i]-'A';
        if (c1 != c2) return (c1 < c2);
    }
    return (ta < tb);
}
