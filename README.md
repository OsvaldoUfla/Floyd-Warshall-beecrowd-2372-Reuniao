# GCC218-beecrowd-2372-Reunião
Um exemplo de uso do algoritmo de Floyd-Warshall para encontrar caminhos mais curto entre os vértices de todos para todos.   
Codigo usado para resolver a questão desafio encontro dos caminhoneiros

Todos os anos, a SBC (Sociedade Brasileira de Caminhoneiros) reúne seus membros em alguma cidade para discutir sobre a profissão. Nessas reuniões são discutidos os problemas da categoria e são apresentadas sugestões sobre como melhorar as condições de trabalho.

O grande problema desse tipo de encontro é que os membros estão espalhados pelo país, uma vez que a profissão exige que eles viajem para diversos lugares todos os dias. Por isso, a escolha da cidade onde será feita a reunião sempre é feita de modo que não prejudique demais nenhum dos caminhoneiros. O critério para tal é que a maior das distâncias percorridas pelos caminhoneiros para chegar ao local da reunião deve ser a menor possível. Ou seja, a distância percorrida pelo caminhoneiro que vai percorrer a maior distância entre todos os caminhoneiros para chegar à reunião deve ser a menor possível.

Dadas as cidades onde se encontram os caminhoneiros e a descrição das estradas que interligam essas cidades,escreva um programa que determina qual será a menor distância máxima percorrida por um caminhoneiro parachegar até o local da reunião. Os caminhoneiros conhecem bem as estradas, e portando sempre fazem o menor caminho possível até a cidade da reunião. Sempre existe um caminho ligando quaisquer duas cidades.

## Entrada
A primeira linha da entrada possui dois números inteiros N (2 ≤ N ≤ 100) e M (N − 1 ≤ M ≤ 10000), que representam, respectivamente, o número de cidades e o número de estradas que as interligam. As cidades são identificadas por números inteiros entre 0 e N − 1. As próximas M linhas da entrada possuem, cada uma, a descrição de uma estrada. Cada descrição de entrada é composta por três números inteiros: U, V e W, onde Ue V representam cidades (0 ≤ U ≤ N − 1 e 0 ≤ V ≤ N − 1) e W representa o comprimento da estrada que une essas duas cidades (todas as estradas são mão dupla, 1 ≤ W ≤ 100). É sempre possível viajar entre qualquer duas cidades com as estradas existentes, mas pode haver mais de uma estrada ligando o mesmo par de cidades.


## Saída
Seu programa deve imprimir uma única linha contendo um número inteiro, a distância máxima percorrida porum caminhoneiro para ir até a reunião, obedecidas as restrições estabelecidas (ou seja, essa distância máximadeve ser a menor possível).

![image](https://user-images.githubusercontent.com/80057661/183313527-583b7db9-6e90-4243-b116-f933cd9287fb.png)

![image](https://user-images.githubusercontent.com/80057661/183313537-9b078af0-617f-456d-ab32-909a2dfd8c89.png)
