from turtle import *

def drange2(start, stop, step):
    numelements = int((stop-start)/float(step))
    for i in range(numelements+1):
            yield start + i*step

print("Enter x1,x2,x3,x4,y1,y2,y3,y4 in each line")
x0 = int(input())
x1 = int(input())
x2 = int(input())
x3 = int(input())
y0 = int(input())
y1 = int(input())
y2 = int(input())
y3 = int(input())

penup()
pencolor('red')
goto(x0,y0)
pendown()
goto(x1,y1)
goto(x2,y2)
goto(x3,y3)
penup()

xu=0.0
yu=0.0
pencolor("black")
penup()
for u in drange2(0,1,0.001):
	xu = pow(1-u,3)*x0+3*u*pow(1-u,2)*x1+3*pow(u,2)*(1-u)*x2+pow(u,3)*x3; 
	yu = pow(1-u,3)*y0+3*u*pow(1-u,2)*y1+3*pow(u,2)*(1-u)*y2+pow(u,3)*y3;
	goto(xu,yu)
	pendown()

print("done")
exitonclick()