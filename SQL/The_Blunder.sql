SELECT CEIL(AVG(salary - REPLACE(salary, '0', '')))
FROM employees;