Glossário de Revisão em JavaScript
1. Declaração de Variáveis em JavaScript
var, let e const

var: Declara uma variável com escopo global ou de função. Pode ser redeclarada e atualizada.

let: Declara uma variável com escopo de bloco. Pode ser atualizada, mas não redeclarada no mesmo escopo.

const: Declara uma constante que deve ser inicializada na declaração e não pode ser atualizada nem redeclarada.

var x = 10; // variável global/função
let y = 20; // variável com escopo de bloco
const z = 30; // constante

if (true) {
  var x = 40; // sobrescreve x global
  let y = 50; // variável local do bloco
  // z = 60; // ERRO: não pode alterar const
}
console.log(x); // 40 (var tem escopo global/função)
console.log(y); // 20 (let do bloco diferente do externo)
console.log(z); // 30

Diferenças de escopo e boas práticas

Use let e const para evitar problemas com escopo e redeclaração.

Prefira const sempre que o valor não deve mudar.

Evite var em código moderno.

2. Tipos de Dados

Number: Números (inteiros e decimais)

String: Texto entre aspas ('', "", ````)

Boolean: true ou false

Null: Valor intencionalmente vazio

Undefined: Variável declarada sem valor atribuído

Object: Coleção de pares chave-valor

Array: Lista ordenada de valores (tipo especial de objeto)

let n = 42;            // Number
let s = "Olá, mundo!"; // String
let b = true;          // Boolean
let v = null;          // Null
let u;                 // Undefined
let obj = { nome: "Ana", idade: 25 }; // Object
let arr = [1, 2, 3, 4];              // Array

3. Operadores em JavaScript
Aritméticos

+, -, *, /, % (módulo), ++ (incremento), -- (decremento)

let a = 10, b = 3;
console.log(a + b); // 13
console.log(a % b); // 1 (resto da divisão)
a++;
console.log(a); // 11

Relacionais

==, ===, !=, !==, >, <, >=, <=

== compara valor (conversão implícita)

=== compara valor e tipo (estritamente igual)

console.log(5 == '5');  // true
console.log(5 === '5'); // false
console.log(3 > 2);     // true

Lógicos

&& (e), || (ou), ! (não)

console.log(true && false); // false
console.log(true || false); // true
console.log(!true);         // false

Atribuição

=, +=, -=, *=, /=

let x = 5;
x += 3; // equivalente a x = x + 3
console.log(x); // 8

4. Estruturas de Decisão
if, else if, else
let idade = 18;

if (idade < 18) {
  console.log("Menor de idade");
} else if (idade === 18) {
  console.log("Tem 18 anos");
} else {
  console.log("Maior de idade");
}

switch/case
let cor = "vermelho";

switch(cor) {
  case "vermelho":
    console.log("Pare");
    break;
  case "amarelo":
    console.log("Atenção");
    break;
  case "verde":
    console.log("Siga");
    break;
  default:
    console.log("Cor desconhecida");
}

5. Estruturas de Repetição (loops)
for
for (let i = 0; i < 5; i++) {
  console.log(i);
}

while
let i = 0;
while (i < 5) {
  console.log(i);
  i++;
}

do...while
let j = 0;
do {
  console.log(j);
  j++;
} while (j < 5);

for...of (iterar valores de arrays)
const frutas = ["maçã", "banana", "laranja"];
for (const fruta of frutas) {
  console.log(fruta);
}

for...in (iterar propriedades de objetos)
const pessoa = { nome: "João", idade: 30 };
for (const chave in pessoa) {
  console.log(chave + ": " + pessoa[chave]);
}

6. Funções
Função tradicional
function soma(a, b) {
  return a + b;
}
console.log(soma(2, 3)); // 5

Arrow function
const multiplicar = (a, b) => a * b;
console.log(multiplicar(2, 3)); // 6

Parâmetros e retorno

Parâmetros podem ter valores padrão

Funções podem não retornar nada (undefined)

const saudacao = (nome = "Visitante") => `Olá, ${nome}!`;
console.log(saudacao());        // Olá, Visitante!
console.log(saudacao("Maria")); // Olá, Maria!

7. Arrays (listas)
Criação e acesso
const numeros = [10, 20, 30];
console.log(numeros[0]); // 10

Principais métodos

push: adiciona no fim

pop: remove do fim

map: cria novo array aplicando função

filter: filtra elementos que satisfazem condição

forEach: itera sem criar novo array

let arr = [1, 2, 3];

arr.push(4);       // [1, 2, 3, 4]
arr.pop();         // remove 4

const dobrados = arr.map(x => x * 2); // [2, 4, 6]
const pares = arr.filter(x => x % 2 === 0); // [2]

arr.forEach(x => console.log(x)); // imprime 1, 2, 3

8. Outros Conceitos Importantes
Escopo de variáveis

Variáveis var têm escopo global ou de função.

Variáveis let e const têm escopo de bloco {}.

Evitar poluir escopo global é boa prática.

Hoisting

Declarações var e funções são “içadas” para o topo do escopo.

let e const são “içadas” mas não inicializadas, causando erro se usadas antes da declaração.

console.log(a); // undefined (hoisting com var)
var a = 5;

// console.log(b); // ReferenceError (let não inicializado)
let b = 10;

Constantes

Valores que não devem mudar

Usar para evitar bugs e deixar código mais claro

Boas práticas

Usar nomes claros e significativos

Preferir const e let em vez de var

Evitar código duplicado e funções longas

Comentar código quando necessário para clareza
