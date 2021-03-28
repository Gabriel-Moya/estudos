# Tuplas
São estruturas imutáveis, identificadas no python pelos parênteses (), podendo acessar cada índice através dos colchetes [].

## Exemplo

```python
mochila = ('Machado', 'Camisa', 'Bacon', 'Abacate')
print(mochila)

print(mochila[0]) # Acessa a string 'Machado'
print(mochila[2]) # Acessa a string 'Bacon'
```

# Listas

Diferentemente das tuplas, as listas são estruturas mutáveis, permitem que seu conteúdo alterado, elas são identificadas no python pelos colchetes [], podendo acessar cada índice através dos colchetes [].

## Exemplo

```python
mochila = ['Machado', 'Camisa', 'Bacon', 'Abacate']
print('Lista: ', mochila)

mochila[2] = 'Laranja'			# Alterando conteúdo existente na posição 2
mochila.append('Ovos')			# Inserindo item ao final da lista
mochila.insert(1, 'Canivete')	# Inserindo um item em posição específica
del mochila[1]					# Deleta de uma posição específica, independente do conteúdo
mochila.remove('Ovos')			# Deleta um conteúdo específico, independente da posição
```

# Dicionários

É uma estrutura de dados dinâmica, nele podemos alterar dados e tamanhos, são identificados através das chaves {} e possuem alguns métodos próprios, sendo eles:

- *values*: Obtém somente os dados
- *keys*: Obtém somente as chaves
- *items*: Obtém o par **chave:dado**

## Exemplo

```python
game = {
    # 'key':'value'
    'nome':'Super Mario',
    'desenvolvedora':'Nintendo',
    'ano':1990
}

print(game.values())	# Retorna os valores
print(game.keys())		# Retorna as chaves
print(game.items())		# Retorna o conjunto
```