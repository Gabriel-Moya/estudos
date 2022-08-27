--A ordem das colunas durante o select interfere na performance
SELECT TOP 5
    [Id], [Nome], [CategoriaId]
FROM
    [Curso]
--A ordem das colunas no where, se respeitarem a ordem do select,
--também otimiza a consulta
-- WHERE
--     [CategoriaId] = 1
ORDER BY
    [Nome] ASC