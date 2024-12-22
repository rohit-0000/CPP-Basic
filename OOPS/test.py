import turtle
my_turtle_cursor = turtle.Turtle()

my_turtle_screen = turtle.Screen()

def pause():
    my_turtle_cursor.speed(200)
    for i in range(100):
        my_turtle_cursor.left(90)

def write_I_inside_heart():

    my_turtle_cursor.penup()

    my_turtle_cursor.goto(-150, 15)

    my_turtle_cursor.pencolor("#FFFFFF")

    my_turtle_cursor.write("I", font=("Helevetica", 34, "bold"))

def write_Love_inside_heart():

    my_turtle_cursor.penup()

    my_turtle_cursor.goto(-100, 15)

    my_turtle_cursor.pencolor("#FFFFFF")

    my_turtle_cursor.write("LOVE", font=("Helevetica", 34, "bold"))

def write_you_inside_heart():

    my_turtle_cursor.penup()

    my_turtle_cursor.goto(100, 15)

    my_turtle_cursor.pencolor("#FFFFFF")

    my_turtle_cursor.write("YOU", font=("Helevetica", 34, "bold"))

def draw_complete_heart():

    my_turtle_cursor.fillcolor("#FF0000")

    my_turtle_cursor.begin_fill()

    my_turtle_cursor.left(140)
    my_turtle_cursor.forward(294)

    draw_left_curve_of_heart()

    my_turtle_cursor.right(190)

    draw_right_curve_of_heart()

    my_turtle_cursor.forward(294)

    my_turtle_cursor.end_fill()

def draw_left_curve_of_heart():

    my_turtle_cursor.speed(200)

    for i in range(450):
        my_turtle_cursor.right(0.5)
        my_turtle_cursor.forward(1.2)
def draw_right_curve_of_heart():

    my_turtle_cursor.speed(200)
    for i in range(450):
        my_turtle_cursor.right(0.5)
        my_turtle_cursor.forward(1.2)

my_turtle_cursor.penup()
my_turtle_cursor.goto(0, -200)
my_turtle_cursor.pendown()

my_turtle_cursor.speed(200)

draw_complete_heart()

write_I_inside_heart()

write_Love_inside_heart()

write_you_inside_heart()

turtle.done()