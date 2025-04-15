import pyautogui as pag
import ctypes
import time
import keyboard

def unpause():
    '''
    while True:
        x, y = pag.position()
        print(x,y)
    '''

    pag.moveTo(3695, 1410)
    pag.leftClick()
    pag.moveTo(120, 990)
    pag.leftClick()

# Windows API setup
PUL = ctypes.POINTER(ctypes.c_ulong)

class MouseInput(ctypes.Structure):
    _fields_ = [("dx", ctypes.c_long),
                ("dy", ctypes.c_long),
                ("mouseData", ctypes.c_ulong),
                ("dwFlags", ctypes.c_ulong),
                ("time", ctypes.c_ulong),
                ("dwExtraInfo", PUL)]

class Input_I(ctypes.Union):
    _fields_ = [("mi", MouseInput)]

class Input(ctypes.Structure):
    _fields_ = [("type", ctypes.c_ulong),
                ("ii", Input_I)]

MOUSEEVENTF_MOVE = 0x0001
INPUT_MOUSE = 0

def move_mouse(dx, dy):
    extra = ctypes.c_ulong(0)
    ii = Input_I()
    ii.mi = MouseInput(dx, dy, 0, MOUSEEVENTF_MOVE, 0, ctypes.pointer(extra))
    command = Input(ctypes.c_ulong(INPUT_MOUSE), ii)
    ctypes.windll.user32.SendInput(1, ctypes.pointer(command), ctypes.sizeof(command))

# === LOOP ===
def move(direction, duration, speed, interval):
    start_time = time.time()
    while time.time() - start_time < duration:
        if direction == 'r':
            move_mouse(speed, 0)   # move RIGHT
        elif direction == 'l':
            move_mouse(-speed, 0)  # move LEFT
        elif direction == 'u':
            move_mouse(0, -speed)  # move UP
        elif direction == 'd':
            move_mouse(0, speed)   # move DOWN
        else:
            print('r, l, u, d')
        time.sleep(interval)


unpause()
for i in range(20):
    keyboard.press('e')
    time.sleep(0.1)
    keyboard.release('e')
    time.sleep(3.5)
