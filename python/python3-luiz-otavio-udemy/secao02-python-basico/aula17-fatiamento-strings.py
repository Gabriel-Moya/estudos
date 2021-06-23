# posi  [012345678]
texto = 'Python S2'
# neg  -[987654321]
print(texto)
print(texto[2])
print(texto[-2])

url = 'www.google.com.br/'
print(url)
print(url[:-1])

nova_string = texto
print(nova_string[2:6])
print(nova_string[:6]) # Para começar do início da string, basta ocultar o primeiro valor
print(nova_string[7:]) # Para ir até o final da string, basta ocultar o último valor
print(nova_string[0::2]) # O último dígito é a quantidade de casa que irá pular a cada passo