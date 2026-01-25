create database views;
use views;
create table alunos(
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    curso VARCHAR(100),
    data_nascimento DATE
);
INSERT INTO alunos VALUES
    (1, 'Ana Silva', 'IF', '2007-05-12'),
    (2, 'Bruno Costa', 'IF', '2009-11-30'),
    (3, 'Carla Mendes', 'PT','2005-03-22'),
    (4, 'Diogo Ferreira', 'LR','2008-08-15');

create view vw_alunos as
    select nome,curso
    from alunos;

select * from vw_alunos;

show full tables where Table_type='VIEW';

SHOW CREATE VIEW vw_alunos;

drop view vw_alunos