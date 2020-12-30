import serial
import tkinter as tk
from tkinter import Frame

arduinoData = serial.Serial('COM3',9600)

def colors(color):
    arduinoData.write(color.encode())
    print(color)

led_control_window = tk.Tk()

color_frame = Frame(led_control_window)
color_frame.pack()
button = tk.Button

Blue = button(color_frame, bg = 'blue', command = lambda:colors("Blue"), height = 2, width = 4,)
Red = button(color_frame,  bg = 'red', command = lambda:colors("Red"), height = 2, width = 4)
Green = button(color_frame,  bg = 'green', command = lambda:colors("Green"), height = 2, width = 4)
Purple = button(color_frame, bg = 'purple', command = lambda:colors("Purple"), height = 2, width = 4)
Turquise = button(color_frame, bg = 'light blue', command = lambda:colors("Turquise"), height = 2, width = 4)
Yellow = button(color_frame, bg = 'yellow', command = lambda:colors("Yellow"), height = 2, width = 4)


Blue.grid(row = 0, column = 1)
Red.grid(row = 1, column = 1)
Green.grid(row = 2, column = 1)
Purple.grid(row = 0, column = 2)
Turquise.grid(row = 1, column = 2)
Yellow.grid(row = 2, column = 2)

led_control_window.mainloop()


input("press enter to exit")   

