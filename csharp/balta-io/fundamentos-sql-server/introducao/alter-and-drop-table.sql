USE [CursoBalta]

ALTER TABLE [Aluno]
    ADD [Document] NVARCHAR(11)

ALTER TABLE [Aluno]
    ALTER COLUMN [Document] CHAR(11)

ALTER TABLE [Aluno]
    DROP COLUMN [Document]