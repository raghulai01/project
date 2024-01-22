use ai_raghul_;
create table rk_usr_reg
(user_id int not null primary key auto_increment ,
f_name varchar(20) not null,
m_name varchar(50),
l_name varchar (50) not null,
dob date,
phone_no long,
username varchar(10) not null unique,
password varchar (18) not null);
insert into rk_usr_reg(user_id,f_name,m_name,l_name,dob,phone_no,username,password)values (1,'raghul','null','senthilkumar','2000-06-07',7010107069,'raghul77',12345678);
select * from rk_usr_reg;
insert into rk_usr_reg(user_id,f_name,m_name,l_name,dob,phone_no,username,password) values (2,'hari','null','anbu','2001-05-06',9854628756,'hari66',565878575) , (3,'arun','null','tamilselvan','2002-09-06',8954762138,'arun55',8954762421);
select * from rk_usr_reg;
insert into rk_usr_reg(user_id,f_name,m_name,l_name,dob,phone_no,username,password) values (5,'abdul','null','basha','2001-05-21',8965472364,'abdul00',642465545);
select * from rk_usr_reg;
delete from rk_usr_reg where user_id=5;
create table rk_usr_login
(
login_id int not null primary key,
user_name varchar (10) not null unique,
password varchar (18) not null ,
new_password varchar(18),
user_id int not null,
foreign key (user_id) references rk_usr_reg(user_id)
);


