USE db_ginasio;

SELECT * FROM db_ginasio.tb_alunos


BULK INSERT FROM db_ginasio.tb_alunos WITH(ROWTERMINATOR = '\n');