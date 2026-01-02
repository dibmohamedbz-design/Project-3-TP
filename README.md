# Project 3 – Secret Message Encoder (Caesar Cipher)

This program works as an **Encoder/Decoder** using the **Caesar Cipher** logic.

---

## ▶️ How to Run the Project

Follow these steps to clone and run the project on your local machine:

```bash
git clone https://github.com/dibmohamedbz-design/Project-3-TP.git
cd Project-3-TP
gcc Project3.c -o cipher
./cipher
```

### Use the Program
- Choose **0** to encode a message
- Choose **1** to decode a message
- Enter the message
- Enter a shift key (between **1 and 25**)
- The result will be displayed in the terminal

---

## ✨ Features
- Supports both **uppercase** and **lowercase** letters
- Includes a **validation system** to prevent incorrect inputs

---

## ⚙️ Method
- The user chooses:
  - **0** to encode a message
  - **1** to decode a message
- The user enters a message:
  - Only letters are encoded
  - Numbers and symbols are ignored
  - Maximum length: **100 characters**
- The user enters a **shift key** (between **1 and 25**)
- The result is displayed in the terminal

---

## 🔐 Encoder
- The program uses **two for-loops**
- It checks whether each character is uppercase or lowercase
- Each letter is replaced by another letter from the same category,
  shifted forward by the value of the **shift key**

### Example
- 'a' with shift key 3 becomes 'd'
- 'X' with shift key 13 becomes 'K'

---

## 🔓 Decoder
- Works the same way as the encoder
- Instead of shifting forward, it shifts **backward**

### Example
- 'd' with shift key 3 becomes 'a'
- 'K' with shift key 13 becomes 'X'
=======
## features

- support Both **uppercase and lowercase** letters.
- include a ***validation system*** to make sure the user don't mess the inputs.
