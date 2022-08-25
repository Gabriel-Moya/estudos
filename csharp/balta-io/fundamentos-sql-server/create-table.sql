USE [CursoBalta]

CREATE TABLE [Aluno](
    [Id] INT NOT NULL,
    [Nome] NVARCHAR(80) NOT NULL,
    [Email] NVARCHAR(180) NOT NULL,
    [Nascimento] DATETIME NULL,
    [Active] BIT DEFAULT(0),

    CONSTRAINT [PK_Aluno] PRIMARY KEY([Id]),
    CONSTRAINT [UQ_Aluno_Email] UNIQUE([Email]),
)
GO

ALTER TABLE [Aluno]
    ALTER COLUMN [Active] BIT NOT NULL

ALTER TABLE [Aluno]
    DROP CONSTRAINT [PK_Aluno]