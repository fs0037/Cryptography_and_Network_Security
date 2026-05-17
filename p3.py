def caesar_encrypt(text):
    result = ""
    for char in text:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result

def caesar_decrypt(text):
    result = ""
    for char in text:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - base - 3) % 26 + base)
        else:
            result += char
    return result

plaintext = input("Problem 3: Write a sentence in English (Plaintext): ")

cipher = caesar_encrypt(plaintext)
decrypted = caesar_decrypt(cipher)

print(f"\nEncrypted text (Ciphertext): {cipher}")
print(f"Decrypted text (Original Text): {decrypted}")
