--A ordem das colunas durante o select interfere na performance
SELECT TOP 5
    [Id], [Nome]
FROM
    [Curso]

-----------------------

SELECT DISTINCT TOP 100
    [Nome]
FROM
    [Categoria]
