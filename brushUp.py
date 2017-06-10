import random
import sys
import os


'''
Multiline
'''

# printing in python

print("Hello World")

# variable assignment

name = "Jarrod"
print(name)

# data types: int, strings, lists, tupes, dictonarties

name = 15

# arithmetic operators: +, -, *, /, %, **, //

print("5 + 2 =", 5+2)
print("5 - 2 =", 5-2)
print("5 * 2 =", 5*2)
print("5 / 2 =", 5/2)
print("5 % 2 =", 5%2)
print("5 // 2 =", 5//2)

# string manipulation

quote = "\"Always remember you are unique"

multi_line_quote = ''' just
like everyone else'''

new_string = quote + multi_line_quote

print("%s %s %s" % ('I like the quote', quote, multi_line_quote))

print('\n' * 5)

print("I don't like ", end="")
print("newlines")

# lists

grocery_list = ['Juice', 'Tomatoes', 'Potatoes',
                'Bananas']

print('First Item', grocery_list[0])

grocery_list[0] = 'Green Juice'
print('First Item', grocery_list[0])

print(grocery_list[1:3])

other_events = ['Was Car', 'Pickup Kids',
                'Cash Check']

to_do_list = [other_events, grocery_list]
print(to_do_list)

print((to_do_list[1][1]))

grocery_list.append('Onions')
print(to_do_list)

grocery_list.insert(1, "Pickle")

grocery_list.remove("Pickle")

grocery_list.sort()

grocery_list.reverse()

del grocery_list[4]
print(to_do_list)

to_do_list2 = other_events + grocery_list

print(len(to_do_list2))
print(max(to_do_list2))
print(min(to_do_list2))

# tuples

pi_tuple = (3, 1, 4, 1, 5, 9)

new_tuple = list(pi_tuple)
new_list = tuple(new_tuple)

# len(tuple) min(tuple) max(tuple)

# dictonaries

super_villans = {'Fiddler' : 'Issac Bowin',
                 'Captain Cold' : 'Leonard snart',
                 'Weather Wizard' : 'Mark Mardon',
                 'Mirror Master' : 'Sam Scudder',
                 'Pied Piper' : 'Thomas Peterson'}

print(super_villans['Captain Cold'])

del super_villans['Fiddler']

super_villans['Pied Piper'] = 'Hartley Rathaway'

print(len(super_villans))

print(super_villans.get('Pied Piper'))

print(super_villans.keys())

print(super_villans.values())

# conditionals

# if else elif == != > >= <=

age = 21

if age > 16:
    print('You are old enough to drive')
else:
    print('You are not old enough to drive')
if age >= 21:
    print('You are old enough to drive a tractor trailer')
elif age >= 16:
    print('You are old enough to drive a car')
else:
    print("You are not old enough to drive")

age = 30

if((age >= 1) and (age <= 18)):
    print("You get a birthday")
elif(age == 21) or (age >= 65):
    print("You get a birthday")
elif not(age == 30):
    print("You don't get a birthday")
else:
    print("You get a birthday part yeah")

# loops

# for loops

for x in range(0, 10):
    print(x, ' ', end="")

print('\n')

for y in grocery_list:
    print(y)

for x in [2, 4, 6, 8, 10]:
    print(x)

num_list = [[1,2,3],[10,20,30],[100,200,300]]

for x in range(0,3):
    for y in range(0,3):
        print(num_list[x][y])

# while loops
'''
random_number = random.randrange(0, 100)

while(random_number != 15):
    print(random_number)
    random_number = random.randrange(0, 100)
'''
i = 0;

while (i <= 20):
    if(i%2 == 0):
        print(i)
    elif(i == 9):
        break
    else:
        i += 1 # i = i + 1
        continue
    i += 1

# functions

def addNumber(a, b):
    return (a + b)

string = addNumber(1, 4)
print(string)

# get input

print("What is your name?")

name = sys.stdin.readline()

print('Hello', name)

# strings 2

long_string = "I'll catch you if you fall - The Floor"

print(long_string[0:4])
print(long_string[-5:])
print(long_string[:-5])
print(long_string[:4] + "be there")

print("%c is my %s letter and my number %d number is %.5f" %
      ('X', 'favourite', 1, .14))

print(long_string.capitalize())

print(long_string.find("Floor"))

print(long_string.isalpha())

print(long_string.isalnum())

print(len(long_string))

print(long_string.replace("Floor", "Ground"))

print(long_string.strip())

quote_list = long_string.split(" ")

print(quote_list)

# file io

test_file = open("test.txt", rw)

print(test_file.mode)

print(test_file.name)

test_file.write(bytes("Write me to the file\n", 'UTF-8'))

test_file.close()

test_file = open("test.txt" , rw)

text_in_file = test_file.read()
print(text_in_file)

os.remove("test.txt")


# objects
# TBA


      


    
