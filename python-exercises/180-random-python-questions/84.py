import pyautogui
import cv2
import numpy as np

res = (1920, 1080)
codec = cv2.VideoWriter_fourcc(*'MP4V')
filename = "result.mp4"

fps = 10.0

result = cv2.VideoWriter(filename, codec, fps, res)

cv2.namedWindow("EKRAN KAYDI PROGRAMI", cv2.WINDOW_NORMAL)
cv2.resizeWindow("Recording", 350, 200)

while True:
    img = pyautogui.screenshot()
    frame = np.array(img)
    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    result.write(frame)

    cv2.imshow('Recording', frame)

    if cv2.waitKey(1) == ord('q'):
        break

result.release()

cv2.destroyAllWindows()