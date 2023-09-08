/*
    Cadastros_v1 di Luu
*/
#include <stdio.h>
#include <string.h>

int main()
{
    // Variáveis para armazenar temporariamente os dados dos usuarios
    char nomeCompleto[50];
    int datasNasc[1][3]; // {dia, mes, ano}
    char sexo, op;
    int cadastros;

    int contador = 0;

    printf("~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("     Cadastros v1\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Quantas pessoas pretende cadastrar? ");
    scanf("%d", &cadastros);
    
    // Arrays principais dos dados dos usuários
    // Uma array de strings, que armazenará o nome dos cadastrados.
    char nomesCompletos[cadastros][sizeof(nomeCompleto)];
    // Uma array de ints, que armazenará data de nascimento dos cadastrados.
    int datasNascUsuarios[cadastros][3];
    // Uma array de char, que armazenará o sexo dos cadastrados [M/F]
    char sexoUsuarios[cadastros][1];

    // Obtendo dados dos usuarios
    while (1)
    {
        if (contador >= cadastros)
        {
            printf("\nCadastros realizados com sucesso.\n");
            break;
        }
        getchar();
        // Obtendo nome do cadastrado atual
        printf("\nNome completo: ");
        fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
        // Obtendo data de nascimento do cadastrado atual
        printf("\nInforme sua data de nascimento.\n");
        printf("Dia: ");
        scanf("%d", &datasNasc[0][0]);
        printf("Mes: ");
        scanf("%d", &datasNasc[0][1]);
        printf("Ano: ");
        scanf("%d", &datasNasc[0][2]);
        // Obtendo sexo do cadastrado atual
        printf("\nSexo [M/F]: ");
        scanf(" %c", &sexo);

        printf("\n~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("   Dados informados");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Nome completo:       %s", nomeCompleto);
        printf("Data nascimento:     %d/%d/%d\n", datasNasc[0][0], datasNasc[0][1], datasNasc[0][2]);
        printf("Sexo:                %c", sexo);
        printf("\n~~~~~~~~~~~~~~~~~~~~~~\n");

        printf("Os dados estao corretos? [N/S] ");
        scanf(" %c", &op);

        if (op == 'N' | op == 'n')
        {
            printf("Refaca seu cadastro.\n");
            continue;
        } else
        {
            contador++;
            printf("Salvando seus dados.\n");
            // Adicionando dados coletados aos arrays principais
            for (int numCadastro = 0; numCadastro < cadastros; numCadastro++)
            {
                // Atribuindo letra a letra ao array de nomes principal
                for (int index = 0; index < strlen(nomeCompleto); index++)
                {
                    nomesCompletos[numCadastro][index] = nomeCompleto[index];
                }
                // Atribuindo datas de nascimento ao array de principal de datas
                for (int index = 0; index < 3; index++)
                {
                    datasNascUsuarios[numCadastro][index] = datasNasc[0][index];
                }
                // Atribuindo o sexo do cadastrado ao array principal de sexos
                sexoUsuarios[numCadastro][0] = sexo;
            }
        }
    }
    return 0;
}
