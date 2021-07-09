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
x = r
y = 0
#These are used to plot points as dots for first time.
setx(x+centrea)
sety(y+centreb)

dot()
if (r > 0) :
	#These are used to plot points as dots in rest three quadrants for the first time.
	setx(x+centrea)
	sety(-y+centreb)
	dot()
	setx(y+centrea)
	sety(x+centreb)
	dot()
	setx(-y+centrea)
	sety(x+centreb)
	dot()
P = 1 - r
while x > y:
	y += 1
	if P <= 0:
		P = P + 2 * y + 1
	else:
		x -= 1
		P = P + 2 * y - 2 * x + 1
	if (x < y):
		break
	#These are used to plot points as dots in four quadrants.
	setx(x+centrea)
	sety(y+centreb)
	dot()
	setx(-x+centrea)
	sety(y+centreb)
	dot()
	setx(x+centrea)
	sety(-y+centreb)
	dot()
	setx(-x+centrea)
	sety(-y+centreb)
	dot()

	if x != y:
		#These are used to plot points as dots in four quadrants.
		setx(y+centrea)
		sety(x+centreb)
		dot()
		setx(-y+centrea)
		sety(x+centreb)
		dot()
		setx(y+centrea)
		sety(-x+centreb)
		dot()
		setx(-y+centrea)
		sety(-x+centreb)
		dot()

#it was added to wait to take screenshot
sleep(30)