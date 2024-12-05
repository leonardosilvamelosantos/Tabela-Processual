# Sistema de Cadastro de Processos

Este projeto é um sistema simples em C para cadastrar, visualizar, editar e excluir processos judiciais. O sistema permite que o usuário insira informações sobre processos, como número do processo, tribunal, assunto e data da última movimentação.

## Funcionalidades

- Cadastrar novos processos.
- Visualizar todos os processos cadastrados.
- Editar processos existentes.
- Excluir processos da lista.
- Menu interativo para navegação.

## Estrutura do Código

O código é organizado em uma estrutura simples, utilizando uma estrutura (`struct`) para armazenar os dados dos processos e funções para realizar as operações de cadastro, visualização, edição e exclusão.

### Estrutura de Dados

A estrutura `Processo` contém os seguintes campos:

- `numeroProcesso`: Número do processo (inteiro).
- `tribunal`: Nome do tribunal (string).
- `assunto`: Assunto do processo (string).
- `dataUltimaMovimentacao`: Data da última movimentação (string).

## Como Compilar e Executar

Para compilar e executar o código, siga os passos abaixo:

1. **Certifique-se de ter um compilador C instalado** (como `gcc`).
2. **Salve o código em um arquivo** chamado `cadastro_processos.c`.
3. **Abra o terminal** e navegue até o diretório onde o arquivo está salvo.
4. **Compile o código** usando o seguinte comando:

   ```bash
   gcc -o cadastro_processos cadastro_processos.c


   Execute o programa com o comando:

bash
./cadastro_processos
Uso
Após executar o programa, um menu será exibido com as seguintes opções:

Cadastrar Processo: Permite ao usuário inserir os dados de um novo processo.
Visualizar Processos: Exibe todos os processos cadastrados.
Editar Processo: Permite ao usuário editar os dados de um processo existente.
Excluir Processo: Permite ao usuário excluir um processo da lista.
Sair: Encerra o programa.
Siga as instruções na tela para interagir com o sistema.

Contribuições
Contribuições são bem-vindas! Se você tiver sugestões ou melhorias, sinta-se à vontade para abrir uma issue ou enviar um pull request.
