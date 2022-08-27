--A ordem das colunas durante o select interfere na performance
SELECT TOP 5
    [Id], [Nome], [CategoriaId]
FROM
    [Curso]
--A ordem das colunas no where, se respeitarem a ordem do select,
--também otimiza a consulta
WHERE
    [ID] = 1 AND
    [CategoriaId] IS NOT NULL