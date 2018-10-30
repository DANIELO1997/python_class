#importar librerias para GUI
from tkinter import *
import tkinter

root = tkinter.Tk()

root.geometry("400x400")
root.title("mi calculadora")
root.resizable(FALSE, FALSE)
root.configure(background="#209DB1")

display=Entry(root,font=('italy',20,'bold'),width=10,bd=1,insertwidth=2,bg="#AE2527",justify="right").place(x=10,y=60)
boton1=Button(root,text="1",width=7,heigt=3).place(x=10,y=60)
