# Enter your code here. Read input from STDIN. Print output to STDOUT

import calendar

mm,dd,yyyy = map(int,input().split())

day = ["MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"]
val = int (calendar.weekday(yyyy,mm,dd))

print(day[val])

