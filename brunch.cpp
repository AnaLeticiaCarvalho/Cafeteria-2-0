#include <iostream>
using namespace std;
int main()
{
    //Declarando as variáveis

    int codigo, qtde;
    float valor = 0;
    char continua = 's';
    
    //Iniciando os comandos

    cout << "*** Cardápio ***\n";

    cout <<"*** Cardápio ***\n";

  cout <<"100 - Hambúrguer - R$5,50\n";

  cout <<"101 - Cachorro-quente - R$4,50\n";

  cout <<"102 - Milkshake - R$7,00\n";

  cout <<"103 - Pizza brotinho - R$8,00\n";

  cout <<"104 - Cheeseburguer - R$8,50\n";

  cout <<"Informe o código do seu pedido: ";

  cin >>codigo;

  cout <<"Informe a quantidade desejada: ";

  cin >>qtde;

  //Montando a estrutura de repetição

  while (continua=='s')
  {
    switch (codigo)
    {
    case 100:

      valor += qtde * 5.50;

      break;

      case 101:

      valor += qtde * 4.50;

      break;

      case 102:

      valor += qtde * 7.00;

      break;

      case 103:

      valor += qtde * 8.00;

      break;

      case 104:

      valor += qtde * 8.50;

      break;

      default:

      cout <<"Pedido inválido!";
    }

    //Testando a condição se continua ou encerra a operação

    cout << "Adicionar outros ítens? S/N ";
    cin >> continua;
    if (continua=='s')
    {
      cout <<"*** Cardápio ***\n";

      cout <<"100 - Hambúrguer - R$5,50\n";

      cout <<"101 - Cachorro-quente - R$4,50\n";

      cout <<"102 - Milkshake - R$7,00\n";

      cout <<"103 - Pizza brotinho - R$8,00\n";

      cout <<"104 - Cheeseburguer - R$8,50\n";

      cout <<"Informe o código do seu pedido: ";

      cin >>codigo;

      cout <<"Informe a quantidade desejada: ";

      cin >>qtde;
    }
    
   }

   cout <<"Valor total a pagar R$ " << valor;
  


}