#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    // Credenciais fixas
    char usuario_correto[] = "admin";
    char senha_correta[] = "1234";

    printf("=== SISTEMA DE LOGIN ===\n");

    printf("Digite o usuario: ");
    scanf("%s", usuario);

    printf("Digite a senha: ");
    scanf("%s", senha);

    // Verificacao
    if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
        printf("Login bem-sucedido!\n");
    } else {
        printf("Usuario ou senha incorretos!\n");
    }

    return 0;
}
