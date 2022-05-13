
# Exercício 01: Fluxograma

## Problema

<p align="justify">
Faça um diagrama para representar uma inserção, remoção e pesquisa em uma lista linear.
</p>

## Desenvolvimento

<p align="justify">
Primeiramente, é criado um arquivo com 100 nomes, dentre eles algumas repetições, e uma struct Lista, que possui um vetor do tipo Item, com 100 posições, para receber todos os nomes do arquivo.
</p>


<p align="center">
<img src="images/insercao.png"/> 
</p>


<p align="justify">
É criada então uma lista vazia, cujos ponteiros de primeira e ultima posição ambos apontam para a primeira posição. Em seguida, é feita a leitura do arquivo e os nomes lidos são salvos no vetor da lista.
Após imprimir a lista de nomes completa, é feita uma pesquisa para encontrar possíveis repetições nesses nomes. Caso sejam encontradas, estas cópias serão removidas, deixando no lugar do nome uma string vazia "".
</p>


<p align="center">
<img src="images/remocao.png"/> 
</p>


<p align="justify">
Por fim, é impressa novamente a lista de nomes, porém dessa vez saltando as posições cujo vetor possui uma string vazia "", apresentando assim a lista apenas com os nomes sem repetição.
</p>


<p align="center">
<img src="images/pesquisa.png"/> 
</p>
