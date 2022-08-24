USE [CursoBalta]

CREATE TABLE [Aluno](
    [Id] INT NOT NULL,
    [Nome] NVARCHAR(80) NOT NULL,
    [Nascimento] DATETIME NULL,
    [Active] BIT DEFAULT(0)
)
GO

ALTER TABLE [Aluno]
    ALTER COLUMN [Active] BIT NOT NULL