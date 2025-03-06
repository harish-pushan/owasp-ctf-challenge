#string = 'K3y5_4r3_1mport4nT'
#key = 9823



def encode(string,key):
    cipher = ''
    for ch in string:
        cipher+=chr(ord(ch)^key)
    return cipher

def decode(cipher,key):
    dec = ''
    for ch in cipher:
        dec+=chr(ord(ch)^key)
    return dec

#cipher = encode(string,key)
cipher = '☔♬☦♪☀♫☭♬☀♮☲☯☰☭☫♫☱☋'

print(f"Try decoding this : {cipher}")
key = int(input("Hey this can give me the key to unlock the password: "))

dec = decode(cipher,key)

#print(cipher)
print(dec)


