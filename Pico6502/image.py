from PIL import Image

def rp6502_rgb(r,g,b):
    return (((b>>3)<<11)|((g>>3)<<6)|(r>>3))

try:
    with open("c:\pico6502\badger.bin", "wb") as o:
        with Image.open('c:\pico6502\badger.jpeg') as im:
            for r,g,b in zip(*[iter(im.getpalette())]*3):
                o.write(rp6502_rgb(r,g,b).to_bytes(2, byteorder='little', signed=False))
            for y in range(0, im.height):
                for x in range(0, im.width):
                    o.write(im.getpixel((x,y)).to_bytes(1, byteorder='little', signed=False))
except OSError:
    print("cannot")