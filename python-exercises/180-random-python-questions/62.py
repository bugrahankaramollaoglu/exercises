""" QR is short for Quick Response. In this program we'll
create a program that generates qr code from a url. for that:
    - we'll need a modüle named pyqrcode

"""

import pyqrcode
from pyqrcode import QRCode

# the url that we'll turn into a qr code
s = "https://www.youtube.com/watch?v=rz5TGN7eUcM"

# generate QR code
url = pyqrcode.create(s)

# Create and save the png file naming "myqr.png"
url.svg("myyoutube.svg, scale=8")
