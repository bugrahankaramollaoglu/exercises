# bitwise operations in python

a = 0b1010  # binary representation of 10
b = 0b1100  # binary representation of 12

print(bin(a & b))  # 0b1000 (bitwise AND)
print(bin(a | b))  # 0b1110 (bitwise OR)
print(bin(a ^ b))  # 0b0110 (bitwise XOR)
print(bin(~a))     # -0b1011 (bitwise NOT)
print(bin(a << 2))  # 0b101000 (left shift by 2 positions)
print(bin(b >> 2))  # 0b0011 (right shift by 2 positions)


""" Note that in Python, integer literals can be specified
in binary, octal, or hexadecimal format by prefixing them
with 0b, 0o, or 0x, respectively. """
