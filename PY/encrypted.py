def xor_cipher(plaintext, key):
    ciphertext = ""
    for i in range(len(plaintext)):
        # 将明文的每个字符与密钥的对应字符进行异或运算
        ciphertext += chr(ord(plaintext[i]) ^ ord(key[i % len(key)]))
    return ciphertext

def xor_decipher(ciphertext, key):
    plaintext = ""
    for i in range(len(ciphertext)):
        # 将密文的每个字符与密钥的对应字符进行异或运算
        plaintext += chr(ord(ciphertext[i]) ^ ord(key[i % len(key)]))
    return plaintext

# 测试
plaintext = "Hello, World!"
key = "secret"

ciphertext = xor_cipher(plaintext, key)
print("Ciphertext:", ciphertext)

deciphered_text = xor_decipher(ciphertext, key)
print("Deciphered text:", deciphered_text)
