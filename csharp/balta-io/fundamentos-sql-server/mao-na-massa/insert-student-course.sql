SELECT * FROM [Course]
SELECT * FROM [Student]
SELECT * FROM [StudentCourse]

DECLARE @studentId UNIQUEIDENTIFIER = (SELECT NEWID())

INSERT INTO
    [Student]
VALUES (
    @studentId,
    'Gabriel Moya',
    'hello@moya.dev',
    '12345678901',
    '12345678',
    NULL,
    GETDATE()
)

INSERT INTO
    [StudentCourse]
VALUES (
    '5f5a33f8-4ff3-7e10-cc6e-3fa000000000',
    @studentId,
    50,
    0,
    '2020-01-22 12:35:54',
    GETDATE()
)