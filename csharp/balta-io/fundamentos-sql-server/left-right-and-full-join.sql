-- LEFT JOIN
SELECT TOP 100
    [Curso].[Id],
    [Curso].[Nome],
    [Categoria].[Nome] AS [Categoria]
FROM
    [Curso]
    LEFT JOIN [Categoria]
        ON [Curso].[CategoriaId] = [Categoria].[Id]


-- RIGHT JOIN
SELECT TOP 100
    [Curso].[Id],
    [Curso].[Nome],
    [Categoria].[Nome] AS [Categoria]
FROM
    [Curso]
    RIGHT JOIN [Categoria]
        ON [Curso].[CategoriaId] = [Categoria].[Id]


-- FULL JOIN
SELECT TOP 100
    [Curso].[Id],
    [Curso].[Nome],
    [Categoria].[Nome] AS [Categoria]
FROM
    [Curso]
    FULL OUTER JOIN [Categoria]
        ON [Curso].[CategoriaId] = [Categoria].[Id]