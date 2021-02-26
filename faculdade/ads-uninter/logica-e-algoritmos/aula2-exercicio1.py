precoProduto = float(input('Digite o preço do produto: '))
desconto = float(input('Qual a porcentagem de deconto deverá ser aplicado: '))

valorFinal = precoProduto-(precoProduto*(desconto/100))

print('O preço final do produto é: R$ ', valorFinal)