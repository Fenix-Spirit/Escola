create database DB_ginasio;
use DB_ginasio;
create table tb_clientes(
id_cliente int auto_increment primary key,
nome varchar(100) not null,
username varchar(50) unique not null,
contacto int not null,
idade int not null,
morada varchar(100)
);
create table tb_encomendas(
id_encomenda int auto_increment primary key,
id_cliente int not null,
data_encomenda date
);
create table tb_alunos(
id_aluno int auto_increment primary key,
nome varchar(100) not null,
contacto int not null,
idade int not null,
morada varchar(100)
);
create table tb_cursos(
id_curso int auto_increment primary key,
nome_curso varchar(50) not null
);
create table tb_perfils(
id_perfil int auto_increment primary key,
id_cliente int unique
);
create table tb_alunos_cursos(
id_aluno int,
id_curso int
);
alter table tb_encomendas
	add constraint fk_encomendas_clientes
    foreign key(id_cliente) references tb_clientes(id_cliente)
    on update cascade
    on delete cascade;
    
alter table tb_alunos_cursos
	add constraint fk_aca
    foreign key(id_aluno) references tb_alunos(id_aluno)
    on update cascade
    on delete cascade;
    
alter table tb_alunos_cursos
	add constraint fk_acc
    foreign key(id_curso) references tb_cursos(id_curso)
    on update cascade
    on delete cascade;
    
alter table tb_perfils
	add constraint fk_perfil_user
    foreign key(id_cliente) references tb_clientes(id_cliente)
    on update cascade
    on delete cascade;