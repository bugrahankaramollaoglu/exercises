from rembg import remove
from PIL import Image

input_path = '3.png'
output_path = '3-2.png'
inp = Image.open(input_path)
output = remove(inp)
output.save(output_path)
