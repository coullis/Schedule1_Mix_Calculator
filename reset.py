import os
import sys

def reset():
    if os.path.exists("Mix.db"):
        os.remove("Mix.db")
    else:
        print("The file does not exist")
        
reset()