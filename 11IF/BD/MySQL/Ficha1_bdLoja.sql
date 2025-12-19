create database DB_loja;
use DB_loja;
create table tb_clientes(
cod_cliente int auto_increment primary key,
nome varchar(50),
apelido varchar(50),
idade int,
morada varchar(50),
localidade varchar(50),
genero varchar(2)
);
insert into tb_clientes(nome,apelido,idade,morada,localidade,genero)
values
('Nuno','Couto',42,'Av da Boavista','Porto','M'),
('Maria','Lopes',25,'Rua 10','Espinho','F'),
('Martim','Ferreira',15,'Rua do Moeiro','Gaia','M'),
('Joana','Pedrosa',20,'Av. Brasil','Porto','F'),
('Tiago','Silva',30,'Travessa dos Porcos','Gaia','M');

select cod_cliente,nome from tb_clientes;
select * from tb_clientes where localidade='Porto';
select * from tb_clientes where localidade='Porto' and idade>40;
select nome,morada from tb_clientes where genero='F'