import os
def exibir_nome_app():
    print("""
    ░██████╗░█████╗░██████╗░░█████╗░██████╗░  ███████╗██╗░░██╗██████╗░██████╗░███████╗░██████╗░██████╗
    ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔══██╗  ██╔════╝╚██╗██╔╝██╔══██╗██╔══██╗██╔════╝██╔════╝██╔════╝
    ╚█████╗░███████║██████╦╝██║░░██║██████╔╝  █████╗░░░╚███╔╝░██████╔╝██████╔╝█████╗░░╚█████╗░╚█████╗░
    ░╚═══██╗██╔══██║██╔══██╗██║░░██║██╔══██╗  ██╔══╝░░░██╔██╗░██╔═══╝░██╔══██╗██╔══╝░░░╚═══██╗░╚═══██╗
    ██████╔╝██║░░██║██████╦╝╚█████╔╝██║░░██║  ███████╗██╔╝╚██╗██║░░░░░██║░░██║███████╗██████╔╝██████╔╝
    ╚═════╝░╚═╝░░╚═╝╚═════╝░░╚════╝░╚═╝░░╚═╝  ╚══════╝╚═╝░░╚═╝╚═╝░░░░░╚═╝░░╚═╝╚══════╝╚═════╝░╚═════╝░\n""")
        
def exibir_menu():
    print("1. Cadastrar Restaurante")
    print("2. Listar Restaurante")
    print("3. Ativar Restaurante")
    print("4. Sair\n")

def finalizar_app():
    os.system("cls")
    print("Você saiu do aplicativo.\n")

def opcao_menu(opcao_escolhida):
    if opcao_escolhida == 1:
        print("Você escolheu a opção 1: Cadastrar Restaurante")

    elif opcao_escolhida == 2:
        print("Você escolheu a opção 2: Listar Restaurante")
    elif opcao_escolhida == 3:
        print("Você escolheu a opção 3: Ativar Restaurante")
    elif opcao_escolhida == 4:
        finalizar_app()
    else:
        print("Opção inválida. Por favor, escolha uma opção válida.")

def main():
    exibir_nome_app()
    exibir_menu()
    opcao_escolhida = int(input("Escolha uma opção: "))
    opcao_menu(opcao_escolhida)

if __name__ == "__main__":

    main()