select CITY, length(CITY) 
from STATION 
order by length(CITY), city limit 1;
select CITY, length(CITY) 
from STATION 
order by length(CITY) desc limit 1;
