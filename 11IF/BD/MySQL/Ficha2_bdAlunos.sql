create database GestaoAlunos;
use GestaoAlunos;
create table tb_alunos(
numero int auto_increment primary key,
nome varchar(100) not null,
curso varchar(50),
idade int,
cidade varchar(50)
);

insert into tb_alunos(nome,curso,idade,cidade)
values
('A','Engenharia Informatica',78,'Porto'),
('B','Gestao',24,'Gaia'),
('C','Arquitetura',14,'Espinho'),
('D','Engenharia Informatica',1,'Amadora'),
('E','Medicina',98,'Gaia'),
('F','Gestao',54,'Lisboa');

select * from tb_alunos;

select * from tb_alunos where curso='Engenharia Informatica';

select * from tb_alunos where idade>22;

update tb_alunos set cidade='Lisboa' where numero=3;

select count(numero) from tb_alunos;

select count(numero) from tb_alunos where curso='Gestao';

select distinct cidade from tb_alunos;

select distinct curso from tb_alunos;

select * from tb_alunos order by idade desc;