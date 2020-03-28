SET sql_mode = '';
SELECT A.start_date, MIN(B.end_date)
FROM 
    (SELECT start_date 
     FROM PROJECTS 
     WHERE start_date NOT IN (SELECT end_date 
                              FROM PROJECTS)) AS A,
    (SELECT end_date 
     FROM PROJECTS 
     WHERE end_date NOT IN (SELECT start_date 
                            FROM PROJECTS)) AS B
where A.start_date < B.end_date
GROUP BY A.start_date
ORDER BY DATEDIFF(B.End_Date, A.Start_Date), A.Start_Date