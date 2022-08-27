SELECT TOP 100
    [Curso].[Id],
    [Curso].[Nome],
    [Categoria].[Nome] AS [Categoria]
FROM
    [Curso]
    INNER JOIN [Categoria]
        ON [Curso].[CategoriaId] = [Categoria].[Id]