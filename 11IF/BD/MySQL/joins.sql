create database escola;
use escola;
-- Tabela: turmas

CREATE TABLE turmas (
                        id_turma INT PRIMARY KEY,
                        nome_turma VARCHAR(10)
);

-- Tabela: alunos
CREATE TABLE alunos (
                        id_aluno INT PRIMARY KEY,
                        nome VARCHAR(50),
                        id_turma INT,
                        FOREIGN KEY (id_turma) REFERENCES turmas(id_turma)
);

INSERT INTO turmas VALUES
                       (1, '11A'),
                       (2, '11B'),
                       (3, '11C');
INSERT INTO alunos VALUES
                       (101, 'Ana Silva', 1),
                       (102, 'Bruno Costa', 2),
                       (103, 'Carla Dias', NULL); -- Carla ainda não tem turma atribuída

select * from alunos;
select * from turmas;


-- Usar INNER JOIN – Só registos com correspondência
SELECT a.nome, t.nome_turma
FROM alunos a
         INNER JOIN turmas t ON a.id_turma = t.id_turma;

-- Usar LEFT JOIN – Todos os alunos, mesmo sem turma
SELECT a.nome, t.nome_turma
FROM alunos a
         LEFT JOIN turmas t ON a.id_turma = t.id_turma;

-- Usar RIGHT JOIN – Todas as turmas, mesmo sem alunos
SELECT a.nome, t.nome_turma
FROM alunos a
         RIGHT JOIN turmas t ON a.id_turma = t.id_turma;

