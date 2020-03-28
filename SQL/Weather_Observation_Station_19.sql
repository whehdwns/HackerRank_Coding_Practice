select ROUND(pow(pow(Max(Lat_n)-min(Lat_n),2)+pow(Max(long_w)-min(long_w),2),1/2),4) 
from station;