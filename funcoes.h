void Menu () {
    printf("----MENU----\n\n");
    printf("1) Cadastro de Cliente\n");
    printf("2) Pesquisar Quartos Disponiveis\n");
    printf("3) Tipos de Quarto\n");
    printf("4) Reservar\n");
    printf("5) Check In\n");
    printf("6) Check Out\n");
    printf("7) Cancelar Reserva\n");
     printf("8) Encerrar Programa\n");
};

void Escolha(int opcao){
    switch(opcao){
        case 1: printf("\nCadastro\n");/*FUNCAO: Cadastro*/;
            break;
        case 2: /*FUNCAO: VERIFICA_QUARTOS*/
            break;
        case 3: /*FUNCAO: TIPOS_QUARTOS*/
            break;
        case 4: /*FUNCAO: RESERVAR*/
            break;
        case 5: /*FUNCAO: CHECK_IN*/
            break;
        case 6: /*FUNCAO: CHECK_OUT*/
            break;
        case 7: /*FUNCAO; CANCELAR_RESERVA*/
            break;
        case 8: printf("Encerrando...");
            break;
        default:printf ("Opcao Invalida\n");
    }
};

