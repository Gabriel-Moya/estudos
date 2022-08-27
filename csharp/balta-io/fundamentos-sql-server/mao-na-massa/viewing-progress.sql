DECLARE @studentId UNIQUEIDENTIFIER = 'b5b81356-4235-4b74-8466-1534c5ed2adb'

SELECT
    [Student].[Name] AS [Student],
    [Course].[Title] AS [Course],
    [StudentCourse].[Progress],
    [StudentCourse].[LastUpdateDate]
FROM
    [StudentCourse]
    INNER JOIN [Student] ON [StudentCourse].[StudentId] = [Student].[Id]
    INNER JOIN [Course] ON [StudentCourse].[CourseId] = [Course].[Id]
WHERE
    [StudentCourse].[StudentId] = @studentId
    AND [StudentCourse].[Progress] < 100
ORDER BY
    [StudentCourse].[LastUpdateDate] DESC