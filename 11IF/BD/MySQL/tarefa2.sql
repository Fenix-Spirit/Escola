create database tarefa2;
use tarefa2;
CREATE TABLE clientes (
    id_cliente INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    cidade VARCHAR(50) NOT NULL
);

INSERT INTO clientes (nome, cidade) VALUES
('João Silva', 'Porto'),
('Maria Costa', 'Lisboa'),
('Ana Sousa', 'Braga'),
('José Pinto', 'Porto');

CREATE TABLE encomendas (
    id_encomenda INT AUTO_INCREMENT PRIMARY KEY,
    id_cliente INT NOT NULL,
    valor DECIMAL(10,2) NOT NULL,
    data_encomenda DATE NOT NULL,
    FOREIGN KEY (id_cliente) REFERENCES clientes(id_cliente)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);

INSERT INTO encomendas (id_cliente, valor, data_encomenda) VALUES
(1, 50.00, '2025-01-10'),
(2, 75.00, '2025-02-15'),
(1, 30.00, '2025-03-20'),
(3, 100.00, '2025-04-05');


select * from clientes where nome like 'Jo%';

select * from clientes where cidade in('Porto','Braga');

select * from encomendas order by valor asc;

select count(*) from clientes;
select sum(valor) from encomendas;
select avg(valor) from encomendas;