create database biblioteca;
use biblioteca;

CREATE TABLE TB_Autores (
    ID_Autores SMALLINT AUTO_INCREMENT PRIMARY KEY,
    Nome_autor VARCHAR(50) NOT NULL,
    Apelido_autor VARCHAR(50) NOT NULL
);
CREATE TABLE TB_Editoras (
    ID_Editoras SMALLINT AUTO_INCREMENT PRIMARY KEY,
    NomedaEditora VARCHAR(50) NOT NULL
);
CREATE TABLE TB_Temas (
      ID_Temas SMALLINT AUTO_INCREMENT PRIMARY KEY,
      Tema VARCHAR(30) NOT NULL
);
CREATE TABLE TB_Livros (
   Id_livro SMALLINT AUTO_INCREMENT PRIMARY KEY,
   Titulo VARCHAR(70) NOT NULL,
   Isbn CHAR(13),
   preco_livro DECIMAL(6,2) NOT NULL,
   num_paginas SMALLINT NOT NULL,
   edição TINYINT,
   data_pub DATE,
   Id_editora SMALLINT NOT NULL,
   Id_tema SMALLINT NOT NULL,
   FOREIGN KEY (Id_editora) REFERENCES TB_Editoras(ID_Editoras),
   FOREIGN KEY (Id_tema) REFERENCES TB_Temas(ID_Temas),
   CONSTRAINT fk_id_editora FOREIGN KEY (id_editora)
    REFERENCES tb_Editoras(Id_editoras) ON DELETE CASCADE ON UPDATE CASCADE,
   CONSTRAINT fk_id_tema FOREIGN KEY (Id_tema)
    REFERENCES tb_Temas(Id_temas) ON DELETE CASCADE ON UPDATE CASCADE
);
CREATE TABLE tb_autor_livro (
    IdAutor SMALLINT,
    idLivro SMALLINT,
    CONSTRAINT pk_autor_livro PRIMARY KEY(IdAutor, idLivro),
    CONSTRAINT fk_id_autor FOREIGN KEY (IdAutor)
    REFERENCES TB_Autores(ID_Autores) ON DELETE CASCADE ON UPDATE CASCADE,
    CONSTRAINT fk_id_livros FOREIGN KEY (idLivro)
    REFERENCES TB_Livros(Id_livro) ON DELETE CASCADE ON UPDATE CASCADE
);

INSERT INTO TB_Autores (Nome_autor, Apelido_autor) VALUES
   ('João', 'Silva'),
   ('Maria','Fernandes'),
   ('Carlos','Santos');
INSERT INTO TB_Editoras (NomedaEditora) VALUES
    ('Editora A'),
    ('Editora V'),
    ('Editora C');
INSERT INTO TB_Temas (Tema) VALUES
    ('Ficção'),
    ('História'),
    ('Ciência');
INSERT INTO TB_Livros (Titulo, Isbn, preco_livro, num_paginas, edição, data_pub,Id_editora, Id_tema) VALUES
    ('Livro 1', '1234567890123', 19.99, 300, 1, '2023-01-01', 1, 1),
    ('Livro 2', '1234567890124', 29.99, 400, 2, '2023-02-01', 2, 2),
    ('Livro 3', '1234567890125', 39.99, 500, 3, '2023-03-01', 3, 3);
INSERT INTO tb_autor_livro (IdAutor, idLivro) VALUES
    (2, 2),
    (3,3);
select * from TB_Temas;
select * from TB_Livros;
select * from TB_Autores;
select * from tb_autor_livro;

SELECT TB_Livros.Titulo, TB_Autores.Nome_autor, TB_Autores.Apelido_autor
FROM TB_Livros
         LEFT JOIN tb_autor_livro ON TB_Livros.Id_livro = tb_autor_livro.idLivro
         LEFT JOIN TB_Autores ON tb_autor_livro.IdAutor = TB_Autores.ID_Autores;

SELECT TB_Autores.Nome_autor, TB_Autores.Apelido_autor, TB_Livros.Titulo
FROM TB_Autores
         RIGHT JOIN tb_autor_livro ON TB_Autores.ID_Autores = tb_autor_livro.IdAutor
         RIGHT JOIN TB_Livros ON tb_autor_livro.idLivro = TB_Livros.Id_livro;

SELECT TB_Livros.Titulo, TB_Autores.Nome_autor, TB_Autores.Apelido_autor
FROM TB_Livros
         INNER JOIN tb_autor_livro ON TB_Livros.Id_livro = tb_autor_livro.idLivro
         INNER JOIN TB_Autores ON tb_autor_livro.IdAutor = TB_Autores.ID_Autores;

SELECT TB_Autores.Nome_autor, TB_Autores.Apelido_autor, TB_Livros.Titulo
FROM TB_Livros
         RIGHT JOIN tb_autor_livro ON TB_Livros.Id_livro = tb_autor_livro.idLivro
         RIGHT JOIN TB_Autores ON tb_autor_livro.IdAutor = TB_Autores.ID_Autores;

SELECT TB_Livros.Titulo, TB_Autores.Nome_autor, TB_Autores.Apelido_autor
FROM TB_Autores
         LEFT JOIN tb_autor_livro ON TB_Autores.ID_Autores = tb_autor_livro.IdAutor
         LEFT JOIN TB_Livros ON tb_autor_livro.idLivro = TB_Livros.Id_livro;