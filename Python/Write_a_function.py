def is_leap(year):
    leap = False
    if year % 400 == 0:
        leap = True
    elif year % 100 == 0:
        leap = False
    elif year % 4 == 0:
        leap = True
    
    return leap
    

    # Write your logic here
    
    
year = int(raw_input())
print is_leap(year)