--Create table PESSOAS
create table if not exists PESSOA(
	IDPESSOA SERIAL primary key,
	NOME VARCHAR(100),
	DOCUMENTO VARCHAR(20),
	CELULAR VARCHAR(20)
);

--Create table PRODUTOS
create table if not exists PRODUTO(
	IDPRODUTO SERIAL primary key,
	NOME VARCHAR(100),
	CODERP VARCHAR(10),
	PRECO NUMERIC(10,2)
);

--Create table COMPRAS
create table if not exists COMPRA(
	IDCOMPRA SERIAL primary key,
	IDPRODUTO INT,
	IDPESSOA INT,
	DATACOMPRA DATE,
	constraint FK_PESSOA_COMPRA foreign KEY(IDPESSOA) references PESSOA(IDPESSOA),
	constraint FK_PRODUTO_COMPRA foreign key(IDPRODUTO) references PRODUTO(IDPRODUTO)
);