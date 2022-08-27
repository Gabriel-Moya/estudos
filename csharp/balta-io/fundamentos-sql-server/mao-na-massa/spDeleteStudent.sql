CREATE OR ALTER PROCEDURE spDeleteStudent (
    @StudentId UNIQUEIDENTIFIER
)
AS
    BEGIN TRANSACTION
        DELETE FROM
            [StudentCourse]
        WHERE
            [StudentId] = @StudentId

        DELETE FROM
            [Student]
        WHERE
            [Id] = @StudentId
    COMMIT
GO

EXEC spDeleteStudent 'b5b81356-4235-4b74-8466-1534c5ed2adb'