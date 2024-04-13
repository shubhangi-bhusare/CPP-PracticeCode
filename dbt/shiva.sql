
create table SALESMAN(
    Salesman_id int ,
    name varchar(50),
    city varchar(50),
    commission int,
    primary key(salesman_id)
     on delete set null 
);

create table CUSTOMER(
    customer_id int primary key,
    cust_name varchar(50),
    city varchar(50),
    grade int ,
    salesman_id int,
    CONSTRAINT s_fk FOREIGN KEY(salesman_id) references salesman(salesman_id)
);

create table ORDERS(
    ord_no int primary key,
    purchase_amt int,
    ord_date date,
    customer_id int,
    Salesman_id int,
      CONSTRAINT c1_fk FOREIGN KEY( customer_id) references CUSTOMER( customer_id),
     CONSTRAINT s1_fk FOREIGN KEY(salesman_id) references salesman(salesman_id)
    
);

insert into salesman values(1000,'JOHN','BANGLORE',25),(2000,'SMITH','BANGLORE',15),(3000,'RAGHAV','PUNE',35),(4000,'HETAL','DELHI',20),(5000,'SANVI','MUMBAI',15);
insert into customer values(10,'PREETHI','BANGLORE',100,1000),(11,'VISHAL','MADURAI',300,1000),(12,'BHAVESH','CHENNAI',400,2000),(13,'CHINAR','BANGLORE',200,2000),(14,'MAMTA','BANGLORE',400,3000);
insert into orders values(50,5000,'2023-05-04',10,1000),(51,450,'2022-01-22',10,2000),(52,1000,'2021-09-28',13,2000),(53,3500,'2020-04-24',14,3000),(54,550,'2024-03-18',12,2000);




select name,salesman_id,count(*) from salesman  where salesman_id s IS (select salesman_id from customer ) group by s.salesman_id; 

select salesman_id from customer where s goup by name having count(*)>1; 


select name from salesman where salesman_id IN (select salesman_id,count(*) as no_of_salesman from customer group by salesman_id having count(*)>1);

select * from orders order by ord_date

select salesman_id,count(*) from customer group by salesman_id having count(*)>1;

select * from orders where salesman_id IN (select salesman_id from salesman where city like '%ORE%') AND customer_id IN (select customer_id from customer where city like '%ORE%');


select ord_no,ORD_DATE,customer_id from orders order by year(ORD_DATE) union select purchase_amt,Salesman_id from orders order by salesman_id ;

select purchase_amt,Salesman_id from orders order by salesman_id ;

delimiter //
create view findsalesman()
select name,salesman_id from salesman where salesman_id IN (select salesman_id from customer) group by salesman_id;
end//
delimiter ;

delete from salesman 
where salesman_id=1000;

delimiter //
create function 90_cal_cost(weight int) returns int
begin 
declare cost int default 0;
if weight >= 20 then 
 set cost=100*weight;
elseif weight>=10 then
 set cost = 150*weight;
 else 
 set cost = 200*weight;
end if;
 return cost;

end//
delimiter ;


delimiter //
create procedure calcomm()
begin
declare asalesman_id,acomm_per,asales_cost,asales_amt int default 0;
declare asname varchar(50);
declare vfinished int default 0;
declare scursor cursor for salesman select salesman_id,name,commission from salesman;
declare continue handler for NOT FOUND set vfinished=1;

label1:loop
   fetch scursor
   if vfinished=1
     leave lable1;
    end if;

ALTER TABLE salesman
ADD constraint on delete null;




