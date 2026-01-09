create database musica;
use musica;
create table artistas(
    artistas_id int auto_increment primary key,
    artista_nome varchar(100) not null
);
create table albuns(
    albun_id int auto_increment primary key,
    albun_titulo varchar(100) not null ,
    id_artista int,
    preco float not null ,
    foreign key (id_artista) references artistas(artistas_id)
                   on delete cascade
                   on UPDATE cascade
);
create table vendas(
    venda_id int auto_increment primary key,
    id_album int,
    foreign key (id_album) references albuns(albun_id)
);
insert into artistas(artista_nome) values
    ('TheWeeknd'),
    ('21 Savage'),
    ('JuiceWrld'),
    ('Kanye West'),
    ('J. Cole');
insert into albuns(albun_titulo, id_artista, preco) values
    ('The party never ends',3,20),
    ('Hurry up tomorrow',1,20),
    ('What happened to the streets?',2,20),
    ('BULLY',4,20),
    ('The off-season',5,20),
    ('Graduation',3,20);
insert into vendas(id_album) values
    (1),
    (5),
    (6),
    (3),
    (2),
    (2),
    (4);

select albun_titulo,id_artista from albuns;
select * from vendas;
select count(venda_id) from vendas;