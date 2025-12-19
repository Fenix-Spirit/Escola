create database DB_JOGO;
use DB_JOGO;
create table disciplinas(
	ID_disciplina int primary key,
    nome_disciplina varchar(100) not null
);

create table perguntas(
	ID_pergunta int primary key,
    ID_disciplina int ,
    texto varchar(255) not null,
    dificuldade varchar(20) not null,
    ano_escolaridade int not null
);
alter table perguntas
add foreign key(ID_disciplina) references disciplinas(ID_disciplina);

create table opcoes(
	ID_opcao int primary key,
    ID_pergunta int,
    texto_opcao varchar(255) not null,
    correta boolean not null
);
alter table opcoes
add foreign key(ID_pergunta) references perguntas(ID_pergunta);

insert into disciplinas(ID_disciplina,nome_disciplina) values
(1,'Matemática'),
(2,'Português'),
(3,'Físico-Química');

insert into perguntas(ID_pergunta,ID_disciplina,texto,dificuldade,ano_escolaridade) values
(101,1,'Qual é o valor de π arredondado a duas casas decimais?','Fácil',10),
(102,1,'Resolver a equação 2x + 5 =17.','Médio',9),
(103,2,'Quem é o autor de "Os Lusíadas"?','Fácil',9),
(104,2,'Indique a classe gramaticalda palavra "rápido".','Médio',10),
(105,3,'Qual é a fórmula química da água?','Fácil',7),
(106,3,'Defina energia potencial.','Difícil',11);

insert into opcoes(ID_opcao,ID_pergunta,texto_opcao,correta) values
(1001,101,'3,14',TRUE),
(1002,101,'3,41',FALSE),
(1003,102,'x = 6',TRUE),
(1004,102,'x = 5',FALSE),
(1005,103,'Luís de Camões',TRUE),
(1006,103,'Eça de Queirós',FALSE),
(1007,104,'Adjetivo',TRUE),
(1008,104,'Advérbio',FALSE),
(1009,105,'H2O',TRUE),
(1010,105,'CO2',FALSE),
(1011,106,'Energia associada ao movimento',FALSE),
(1012,106,'Energia armazenada devido à posição',TRUE);

select * from perguntas where dificuldade='Fácil';
select * from perguntas where ano_escolaridade=11;
select * from perguntas where texto like '%derivada%';
select * from perguntas order by ano_escolaridade asc, dificuldade asc;
select count(dificuldade),dificuldade from perguntas group by dificuldade order by count(dificuldade);
select * from opcoes where correta=TRUE order by ID_pergunta;