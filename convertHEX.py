import binascii
filename = 'xor'
with open(filename, 'rb') as f:
    content = f.read()
print(binascii.hexlify(content))