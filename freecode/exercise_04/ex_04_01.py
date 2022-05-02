def computepay (hours, rate):
    if hours > 40:
        # print ("overtime")
        regular_time = hours * rate
        overtime_pay = (hours - 40) * (rate * 0.5)
        total_pay = regular_time + overtime_pay
    else :
        # print ("regular time")
        total_pay = hours * rate
    return total_pay
# print ("pay: ", total_pay)
hr = input ("Enter Hours: ")
ra = input ("Enter Rate: ")
flhr = float(hr)
flra = float(ra)

xp = computepay(flhr, flra)

print ("pay", xp)