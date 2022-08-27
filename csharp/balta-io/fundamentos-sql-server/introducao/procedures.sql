CREATE OR ALTER PROCEDURE [spListCourses]
    @Category NVARCHAR(60)
AS
    DECLARE @CategoryId INT
    SET @CategoryId = (SELECT TOP 1 [Id] FROM [Categoria] WHERE [Nome] = @Category)

    SELECT * FROM [Curso] WHERE [CategoriaId] = @CategoryId

    --Para excluir uma procedure
    DROP PROCEDURE [spListCourses]


EXEC [spListCourses] 'Backend'
EXEC [spListCourses] 'Frontend'
EXEC [spListCourses] 'Mobile'