from tkinter import ttk, messagebox
from tkinter.filedialog import askopenfilename, asksaveasfilename
from ttkthemes import ThemedTk
import pyautogui
import time

root = ThemedTk(theme="radiance")
# root = Tk()
root.title("Screenshot App")
root.geometry("250x80")


def screen():
    # hide the root window
    root.withdraw()
    # stop execution for 3 seconds
    # to open any window of which you
    # want to take the screenshot
    time.sleep(3)
    # capture screenshot
    sc = pyautogui.screenshot()
    save = messagebox.askyesno("Screenshot App", "Do you want to save captured screenshot?")
    if save:
        file = asksaveasfilename(defaultextension="png",
                                 filetypes=[("All Files", "*.*"),
                                            ("PNG file", "*.png"),
                                            ("jpg file", "*.jpg")])
        # save screenshot
        if file:
            sc.save(file)
            print("Screenshot Saved..")
    # unhide the root window
    root.deiconify()


# create button to take screenshot
capture = ttk.Button(root, text="Take Screenshot", command=screen)
capture.pack(pady=22)
root.mainloop()
