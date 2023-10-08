""" here we'll write a program that changes a normal pic to sketch """

import cv2

# reading image
image = cv2.imread("hoca.jpg")

# converting BGR image to grayscale
gray_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# creating a negative image by extracting color numbers from 255
inverted_image = 255 - gray_image

# Finally create the pencil sketch by mixing the grayscale image
# with the inverted blurry image. This is done by dividing
# the grayscale image by the inverted blurry image.
blurred = cv2.GaussianBlur(inverted_image, (21, 21), 0)
inverted_blurred = 255 - blurred
pencil_sketch = cv2.divide(gray_image, inverted_blurred, scale=256.0)

# now our sketch is ready. just need to display it on the screen
cv2.imshow("Original Image", image)
cv2.imshow("Pencil Sketch of Dog", pencil_sketch)
cv2.waitKey(0)
