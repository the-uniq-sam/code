#Code must be run using python version 3.8 or newer
#I'm supposing that you have already python turtle installed on your system
from turtle import *
print('Name: Samyak: please enter x1 x2 y1 y2 in next 4 lines')
x1 = int(input())
x2 = int(input())
y1 = int(input())
y2 = int(input())
dx = int(x2 - x1)
dy = int(y2 - y1)
y = y1
color('red', 'yellow')
begin_fill()
m_new = 2*dy
p = 2*dy -dx
for x in range(x1,x2+1):
	setx(x)

	sety(y)
	p = p+m_new
	if(p>=0):
		y = y+1
		p = p - 2*dx

end_fill()
done()