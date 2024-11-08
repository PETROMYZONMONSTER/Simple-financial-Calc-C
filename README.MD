# Paradigmas da programação -- Atividade 7

### Sistema de calculadora financeira 
Nessa atividade, foi realizado uma calculadora financeira com 4 funções:

**Cálculo de juros simples:**
- Cálcula o interesse final simples do empréstimo. 
> ` (value * rate * days) / year; `

**Cálculo de juros compostos:**
- Cálcula o interesse que se acumula em cada parcela do empréstimo. 
> ` amount = value * pow((1 + rate/compound ),compound * year); `
>
> ` interest = amount - value; `

**Parcelas de financiamentos:**
- Recebe um valor, calcula o interesse que será acumulado em cada parcela, e divide ela de acordo com a duração (em meses) do pagamento.
> ` interest = pow(1+rate,month); `
>
> ` payment = (value * interest * rate)/(interest - 1); `

**Análise (retorno) de investimentos:**
- Calcula o interesse que o usuário irá receber por ano em seu investimento. 
> ` interest = value * (rate / 100); `
>
> ` value += interest + contribution; `

## Controle de fluxo e estruturas de controle

Durante o código foram utilizadas as estruturas While e If para manter controle sobre a entrada inicial do programa, verificando se o usuário colocou o input inválido (0) que encerra o seu funcionamento.
Também foi utilizado Goto, reiniciando o loop while quando ele for atingido dentro da função.

## Modularização

Todas as funções de cálculo foram divididas em módulos para manter o código mais organizado e claro. 
> main.c
>
> simpleInterest.c
>
> compoundInterest.c
>
> Installments.c
>
> Savings.c

## Ponteiros

O uso de ponteiros ajudou na organização do menu dentro do programa, evitando o uso repetido de scanf e evitando o uso desnecessário de strtol em um código simples. 

## Entrada e saída 

O usuário pode escolher a função desejada, e colocar os valores que achar adequado para testar a sua funcionalidade em todas as funções, com textos claros explicando para o mesmo que tipo de valor ele irá receber.

## Diagrama de fluxo
![diagrama](https://github.com/PETROMYZONMONSTER/Simple-financial-Calc-C/blob/2069cad6697a8d561d17ffed11de88cde5322d08/diagrama.png "diagrama")
