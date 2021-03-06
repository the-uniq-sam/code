from turtle import *

INSIDE = 0
LEFT = 1
RIGHT = 2
BOTTOM = 4
TOP = 8

print('Input x_min, y_min, x_max, y_max in each line')
x_min = int(input())
y_min = int(input())
x_max = int(input())
y_max = int(input())


#printing rectangle

pencolor("black")
penup()
goto(x_min,y_min)
pendown()
goto(x_min,y_max)
goto(x_max,y_max)

penup()
goto(x_min,y_min)
pendown()
goto(x_max,y_min)
goto(x_max,y_max)
penup()


def get_bits_value(x, y): 
	temp = INSIDE
	if int(x) < int(x_min):	 # left  
		temp  |= LEFT
	elif int(x) > int(x_max): #  right  
		temp |= RIGHT 
	if int(y) < int(y_min):	 # below  
		temp |= BOTTOM 
	elif int(y) > int(y_max): # above 
		temp |= TOP
	
	#print(temp)
	return temp

print('Now print the no. of lines')

#input no. of lines
n = int(input())

for number in range(n):

	print('Now print value of  x1,y1,x2,y2 in each line')

	#input coordinates
	x1 = int(input())
	y1 = int(input())
	x2 = int(input())
	y2 = int(input())

	x1_temp = x1
	y1_temp = y1
	x2_temp = x2
	y2_temp = y2
	
	#to find the position of point
	temp1 = get_bits_value(x1, y1)
	temp2 = get_bits_value(x2, y2) 
	indicate = False
	#print(temp1,temp2)

	while True: 

		#inside totally
		if temp1 == 0 and temp2 == 0: 
			indicate = True
			#print('inside totally')
			break

		#outside totally 
		elif ((temp1 & temp2) != 0):
			#print('outside totally') 
			break

		#partial case
		else: 

			x = 1.0
			y = 1.0

			#choosing one of the point
			if temp1 != 0: 
				code_out = temp1 
			else: 
				code_out = temp2 

			#now check the position & find respective coordinates
			if code_out & TOP: 
				x = x1 + (x2 - x1) *(y_max - y1) / (y2 - y1) 
				y = y_max 

			elif code_out & BOTTOM:  
				x = x1 + (x2 - x1) *(y_min - y1) / (y2 - y1) 
				y = y_min 

			elif code_out & RIGHT: 
				y = y1 + (y2 - y1) *(x_max - x1) / (x2 - x1) 
				x = x_max 

			elif code_out & LEFT: 
				y = y1 + (y2 - y1) *(x_min - x1) / (x2 - x1) 
				x = x_min 

		

			if code_out == temp1: 
				x1 = x 
				y1 = y 
				temp1 = get_bits_value(x1, y1) 

			else: 	
				x2 = x 
				y2 = y 	
				temp2 = get_bits_value(x2, y2) 
	
	if indicate:
		print ("It lies between ", x1, " , " , y1 ," to " ,x2 ," , " ,y2)
		pencolor('red')
		penup()
		goto(x1_temp,y1_temp)
		pendown()
		goto(x1,y1)
		pencolor('green')
		goto(x2,y2)
		pencolor('red')
		goto(x2_temp,y2_temp)
	else: 
		print("It is outside of this rectangle completely")
		pencolor('red')
		penup()
		goto(x1_temp,y1_temp)
		pendown()
		goto(x2_temp,y2_temp)
		
exitonclick()