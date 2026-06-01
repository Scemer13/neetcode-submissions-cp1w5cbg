-- Write your query below
select name from customers where id not in (Select customer_id from orders);