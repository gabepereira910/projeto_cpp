#include <iostream>

using namespace std;

struct conta{
    
    string nometitular;
    double saldotitular;
    string cpftitular;


    void sacar(float valorasacar) {
        if(valorasacar > saldotitular) {
            cout << "Saldo insuficiente" << endl;
        } else {
            if(valorasacar < 0) {
                cout << "Modelo invalido" << endl;
            }
        }

        saldotitular = saldotitular - valorasacar;
    }

    void depositar(float valoradepositar) {
        if(valoradepositar < 0) {
            cout << "Modelo invalido" << endl;
        }

        saldotitular = saldotitular + valoradepositar;
    }

};

int main() {

    string nome, cpf, cep, status, endereco, ocupacao, contanumero, agencia;
    int escolha, idade;
    int operacao, tipoconta;
    float valorenviado;
    int tipopix, chavepix, emailpix, cpfpix, celularpix;

    conta contabancaria;
    contabancaria.depositar(350);

    cout << "Saldo em conta: " << contabancaria.saldotitular << " R$" << endl;

    cout << "Insira seu nome: " << endl;
    cin >> nome;
    getline(cin, nome);

    cout << endl;

    cout << "Prazer. Em que podemos ajudar?" << endl;
    cout << "Selecione uma das opcoes abaixo: " << endl << endl;

    cout << "1 - Abrir conta" << endl;
    cout << "2 - Preciso de ajuda no caixa" << endl;
    cout << "3 - Transferencias" << endl;
    cout << "4 - Problemas gerais" << endl;
    cout << "5 - Sair" << endl;
    cin >> escolha;

    switch(escolha) {
        case 1:
        cout << "Insira os seus dados abaixo conforme solicitado" << endl;
            cout << "CPF: " << endl;
            cin >> cpf;

            cout << "Idade: " << endl;
            cin >> idade;

            cout << "Estado civil: " << endl;
            cin >> status;
            getline(cin, status); 

            cout << "Ocupacao: " << endl;
            cin >> ocupacao;
            getline(cin, ocupacao);

            cout << "Endereco e numero: " << endl;
            cin >> endereco;
            getline(cin, endereco);

            cout << "CEP" << endl;
            cin >> cep;

            system("pause");

            cout << endl;

            cout << "Aguarde enquanto registramos tudo para voce. Seu cartao ira chegar em breve no endereco selecionado" << endl;
            cout << "Tenha uma otima semana " << nome << endl;
        break;
    
        case 2:
            cout << "Pegue sua senha e aguarde sua vez " << endl;
            system("pause");
            return 0;
        
        case 3:
            cout << "Escolha um modo de transferencia abaixo: " << endl;
            cout << "1 - TED" << endl;
            cout << "2 - PIX" << endl;
            cin >> operacao;

            cout << endl;
        
            switch(operacao) {
                case 1:
                    cout << "Insira os dados bancarios do destinatario abaixo: " << endl;
                    cout << "Numero da conta: " << endl;
                    cin >> contanumero;

                    cout << "Agencia: " << endl;
                    cin >> agencia;

                    cout << "Tipo de conta: " << endl;
                    cout << "1 - Conta corrente" << endl;
                    cout << "2 - Conta poupanca" << endl;
                    cin >> tipoconta;

                    if (tipoconta != 1 && tipoconta != 2) {
                        cout << "Selecione uma opcao valida" << endl;
                    }

                    cout << "Insira o valor a ser transferido: " << endl;
                    cin >> valorenviado;

                    if(valorenviado < 0) {
                        cout << "Modelo de envio invalido" << endl;
                    } else {
                        if (valorenviado > contabancaria.saldotitular) {
                            cout << "Saldo insuficiente" << endl;
                            break;
                        }

                    }

                    cout << "Transferindo.." << endl;
                    system("pause");
                    cout << "Transferencia finalizada" << endl;
                    break;

                case 2:
                    cout << "Insira a chave pix abaixo: " << endl;
                    cout << "1 - chave aleatoria" << endl;
                    cout << "2 - email" << endl;
                    cout << "3 - cpf" << endl;
                    cout << "4 - celular" << endl;
                    cin >> tipopix;

                    if (tipopix == 1) {
                        cout << "Digite o numero da chave: " << endl;
                        cin >> chavepix;

                        cout << "Inisraa o valor a ser enviado: " << endl;
                        cin >> valorenviado;

                        if(valorenviado > contabancaria.saldotitular) {
                            cout << "Saldo insuficiente" << endl;
                            system("pause");
                            return main();
                        } 

                        cout << "Pix transferido" << endl;
                        system("pause");
                        break;
                    } else {
                        if(tipopix == 2) {
                            cout << "Insira o email: " << endl;
                            cin >> emailpix;

                            cout << "Insira o valor a ser enviado: " << endl;
                            cin >> valorenviado;

                            if(valorenviado > contabancaria.saldotitular) {
                                cout << "Saldo insuficiente" << endl;
                                system("pause");
                                return main();
                            }

                            cout << "Pix transferido" << endl;
                            system("pause");
                            break;
                        } else {
                            if (tipopix == 3) {
                                cout << "Insira o cpf: " << endl;
                                cin >> cpfpix;

                                cout << "Insira o valor a ser transferido: " << endl;
                                cin >> valorenviado;

                                if(valorenviado > contabancaria.saldotitular) {
                                    cout << "Saldo insuficiente" << endl;
                                    system("pause");
                                    break;
                                }

                                cout << "Pix transferido" << endl;
                                system("pause");
                                break;
                            } else {
                                if(tipopix == 4) {
                                    cout << "Insira o numero de celular com ddd" << endl;
                                    cin >> celularpix;

                                    cout << "Insira o valor a ser enviado: " << endl;
                                    cin >>  valorenviado;

                                    if(valorenviado > contabancaria.saldotitular) {
                                        cout << "Saldo insuficiente" << endl;
                                        system("pause");
                                        break;
                                    }

                                    cout << "Pix transferido" << endl;
                                    system("pause");
                                    break;
                                } else {
                                    cout << "Selecione uma opcao valida!" << endl;
                                    system("pause");
                                    return main();
                                }
                            }
                        }
                    }

                    default:
                        cout << "Insira um valor valido" << endl;
                        return main();
            }

            case 4:
                cout << "Pegue sua senha e aguarde sua vez" << endl;
                system("pause");
                break;

            case 5:
                cout << "Volte sempre!" << endl;
                system("pause");
                break;

    }

}