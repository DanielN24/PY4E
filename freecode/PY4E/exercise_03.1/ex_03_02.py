hr = input ("Enter Hours: ")
try:
    flhr = float(hr)
except:
    print ("Error, please enter numeric input")
    quit()
ra = input ("Enter Rate: ")
try:
    flra = float(ra)
except:
    print ("Error, please enter numeric input")
    quit()
if flhr > 40:
    # print ("overtime")
    regular_time = flhr * flra
    overtime_pay = (flhr - 40) * (flra * 0.5)
    total_pay = regular_time + overtime_pay
else :
    # print ("regular time")
    total_pay = flhr * flra
print ("pay: ", total_pay)