# 🖥️ Realsoft Caixa (PDV)

<p align="center">
  <img src="https://img.shields.io/github/languages/top/fydelis2025/Realsoft_Caixa?style=for-the-badge&color=E91E63" alt="Language">
  <img src="https://img.shields.io/github/repo-size/fydelis2025/Realsoft_Caixa?style=for-the-badge" alt="Repo Size">
  <img src="https://img.shields.io/github/last-commit/fydelis2025/Realsoft_Caixa?style=for-the-badge" alt="Last Commit">
</p>

## 👤 Autoria e Histórico
Este é o projeto principal de frente de caixa da suíte Realsoft, desenvolvido por **Adiel Santos Fontes**.

*   **Autor:** Adiel Santos Fontes
*   **Data Inicial do Projeto:** Setembro de 2011

O **Realsoft Caixa** é um sistema de Ponto de Venda (PDV) robusto, projetado para alta performance em ambientes de varejo. Ele gerencia todo o ciclo da venda, desde a identificação de itens até a finalização do pagamento e emissão de comprovantes, operando de forma integrada com os módulos de retaguarda e configuração.

## 🚀 Funcionalidades Principais
- **Operação de Venda:** Interface ágil para registro de produtos via código de barras ou busca manual.
- **Múltiplas Formas de Pagamento:** Suporte a dinheiro, cartões e outras modalidades integradas.
- **Integração com Balanças:** Comunicação nativa com o módulo `Realsoft_ComunicaBalanca` para pesagem em tempo real.
- **Fechamento de Caixa:** Relatórios de conferência e fluxo de movimentação financeira por turno.
- **Sincronização:** Envio automático de dados para a retaguarda através do `Realsoft_Configurador`.

## 🛠️ Stack Técnica
- **Linguagem:** C# (.NET)
- **Tecnologia:** ASP.NET Web Forms
- **Processamento:** Lógica de negócio otimizada para transações rápidas em `App_Code`.
- **Interface:** Design focado em usabilidade operacional (UX para PDV).

## 📂 Estrutura de Pastas
*   `/Caixa`: Interface principal do operador de caixa.
*   `/Consultas`: Verificação rápida de preços e estoque.
*   `/Pagamento`: Módulo de processamento de transações financeiras.
*   `/App_Code`: Núcleo de regras de negócio e integração com banco de dados.
*   `/App_Themes`: Identidade visual e estilização do terminal de vendas.

## ⚙️ Instalação
1. Clone o repositório:
   ```bash
   git clone [https://github.com/fydelis2025/Realsoft_Caixa.git](https://github.com/fydelis2025/Realsoft_Caixa.git)
