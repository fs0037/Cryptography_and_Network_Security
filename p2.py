# Task 1: Convert lowercase letters to uppercase letters using ASCII
print(" Task 1: ASCII Conversion ")
small_input = input("Enter several lowercase letters separated by commas (eg: a,b,c): ")

small_letters = [char.strip() for char in small_input.split(',')]
capital_letters = []

for char in small_letters:
    capital_char = chr(ord(char) - 32)
    capital_letters.append(capital_char)

print("Uppercase letters:", ", ".join(capital_letters))


# --- Task 2: Symmetric Cipher (XOR) ---
print("\n Task 2: Symmetric Cipher ")
char_to_encrypt = input("Enter a letter to encrypt (e.g.: A): ")
key = int(input("Enter a secret number (Key) (e.g.: 42): "))

ciphertext = chr(ord(char_to_encrypt) ^ key)
decryptedtext = chr(ord(ciphertext) ^ key)

print(f"Original letter: {char_to_encrypt}")
print(f"Encrypted (Ciphertext): {repr(ciphertext)}")
print(f"Decrypted (Recovery): {decryptedtext}")
