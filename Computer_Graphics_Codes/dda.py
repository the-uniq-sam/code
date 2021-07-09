from turtle import *
print('Name: Samyak: please enter x1 x2 y1 y2 in next 4 lines')
x1 = int(input())
x2 = int(input())
y1 = int(input())
y2 = int(input())
dx = float(x2 - x1)
dy = float(y2 - y1)
steps = 0
if(dx>=dy):
	steps = dx
else:
	steps = dy
dx = dx/steps
dy = dy/steps
x = x1
y = y1
i = 1
color('red','yellow')
begin_fill()
while(i<=steps):
	setx(x)
	sety(y)
	x+=dx
	y+=dy
	i= i+1
end_fill()
done()