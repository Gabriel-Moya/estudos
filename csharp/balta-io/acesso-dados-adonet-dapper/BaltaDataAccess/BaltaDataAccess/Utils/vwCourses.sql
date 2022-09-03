CREATE OR ALTER VIEW vwCourses AS
	SELECT * FROM [Course]
GO

--RELACIONAMENTOS
SELECT * FROM [CareerItem] INNER JOIN [Course]
ON [CareerItem].[CourseId] = [Course].[Id]
GO