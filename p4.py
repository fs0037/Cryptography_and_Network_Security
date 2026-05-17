import math

def transposition_encrypt(text, width):
    ciphertext = [''] * width
    for col in range(width):
        pointer = col
        while pointer < len(text):
            ciphertext[col] += text[pointer]
            pointer += width
    return "".join(ciphertext)

def transposition_decrypt(text, width):
    num_of_columns = math.ceil(len(text) / width)
    num_of_rows = width
    shaded_boxes = (num_of_columns * num_of_rows) - len(text)
    
    plaintext = [''] * num_of_columns
    col = 0
    row = 0
    
    for char in text:
        plaintext[col] += char
        col += 1
        
        if (col == num_of_columns) or (col == num_of_columns - 1 and row >= num_of_rows - shaded_boxes):
            col = 0
            row += 1
            
    return "".join(plaintext)

print("Problem 4: Transposition Cipher")
default_text = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING VARENDRA UNIVERSITY BANGLADESH"
print(f"Default text: {default_text}")

user_text = input("Enter your text (leave blank to use default text): ")
if not user_text.strip():
    user_text = default_text

user_width = int(input("Enter the width of the matrix (e.g.: 8): "))

encrypted_res = transposition_encrypt(user_text, user_width)
decrypted_res = transposition_decrypt(encrypted_res, user_width)

print(f"\nEncrypted text (Ciphertext):\n{encrypted_res}")
print(f"\nDecrypted text (Plaintext):\n{decrypted_res}")
