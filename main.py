import sys, os, time, threading
import re as string
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), 'lib')))
from lib.lcuapi import LCU, Event, EventProcessor
from typing import Optional
from PIL import Image, ImageTk
import tkinter as tk


class interface:

    def __init__(self, title: Optional[str] = "Sin titulo", width: Optional[int] = 640, height: Optional[int] = 320, ResizeableX: Optional[bool] = False, ResizeableY: Optional[bool] = False):
        self.window = tk.Tk()
        self._title = title
        self._background = None
        self.window.title(self._title)
        self.window.geometry(f"{width}x{height}")
        self.window.resizable(ResizeableX, ResizeableY)

    @property
    def title(self):
        return self._title
    
    @property
    def background(self):
        return self._background

    @title.setter
    def title(self, value: str):
        self._title = value
        self.window.title(value)

    @background.setter
    def background(self, path: Optional[str] = None):

        if type(path) == str:
            if string.match(r"^#([0-9A-Fa-f]{6})$", path):
                print("CHANGING COLOR")
                self._background = path
                self.window.config(bg=path)
            else:
                print("CHANGING IMAGE")
                _bgphoto = Image.open(path)
                bgphoto = ImageTk.PhotoImage(_bgphoto)
                self._background = tk.Label(self.window, image=bgphoto)
                self._background.place(relwidth=1, relheight=1)
                self._background.image = bgphoto
        else:
            print("DESTROYING BG")
            if self._background:
                self._background.destroy()
            self._background = None
        



    def run_window(self):
        self.window.mainloop()
    


MainWindow = interface("League of Legends - AutoPick")
MainWindow.background = "#/bin/bg.jpg"



MainWindow.run_window()



