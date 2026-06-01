-- Write your query below
SELECT customer_id FROM customers where year=2020 group by customer_id having sum(revenue)>0;