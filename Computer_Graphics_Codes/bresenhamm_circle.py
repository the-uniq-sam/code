from turtle import *
from time import *
print('Input x coordinate of centre')
centrea = int(input())
print('Input y coordinate of centre')
centreb = int(input())
print('Input radius of circle')
r = int(input())
color("red")
penup()
speed(10)
x = 0
y = r
d = 3 - 2*r
#print it

setx(centrea+x)
sety(centreb+y)
dot()
setx(centrea-x)
sety(centreb+y)
dot()
setx(centrea+x)
sety(centreb-y)
dot()
setx(centrea-x)
sety(centreb-y)
dot()
setx(centrea+y)
sety(centreb+x)
dot()
setx(centrea-y)
sety(centreb+x)
dot()
setx(centrea+y)
sety(centreb-x)

dot()
setx(centrea-y)
sety(centreb-x)
dot()

while y>=x:
	x = x+1
	if(d>0):
		y = y-1
		d = d + 4*(x-y) + 10
	else:
		d = d + 4*x + 6
	#print it
	setx(centrea+x)
	sety(centreb+y)
	dot()
	setx(centrea-x)
	sety(centreb+y)
	dot()
	setx(centrea+x)
	sety(centreb-y)
	dot()
	setx(centrea-x)
	sety(centreb-y)
	dot()
	setx(centrea+y)
	sety(centreb+x)
	dot()
	setx(centrea-y)
	sety(centreb+x)
	dot()
	setx(centrea+y)
	sety(centreb-x)
	dot()
	setx(centrea-y)
	sety(centreb-x)
	dot()

#I took sleep function just to take the screenshot to submit in assignment
sleep(30)