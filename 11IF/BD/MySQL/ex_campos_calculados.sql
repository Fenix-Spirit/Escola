create database campos_calculados;
use campos_calculados;

create table produtos(
  id_produto int auto_increment primary key ,
  nome_produto varchar(100) not null ,
  preco_venda decimal(12,2) not null check ( preco_venda>0 ),
  quantidade int not null check ( quantidade>0 ),
  preco_compra decimal(12,2) not null,
  margem_lucro decimal(12,2) as(preco_venda-preco_compra) virtual ,
  valor_total_stock decimal(12,2) as(quantidade*preco_venda)virtual
);
/* virtual, pois os preços são atualizados frequentemente devido à inflação*/
insert into produtos(nome_produto, preco_venda, quantidade, preco_compra) VALUES
    ('massa',20.5,200,5.43),
    ('arroz',59.99,132,2.17);
select *from produtos