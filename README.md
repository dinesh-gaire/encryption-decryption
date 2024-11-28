# 🔐 File Encryption-Decryption Program in C

## 📝 Project Overview

A simple yet educational C program that demonstrates basic file encryption and decryption techniques using ASCII character manipulation. Perfect for learning file handling, basic encryption concepts, and C programming.

## ✨ Key Features

### 🛡️ Core Functionalities
- **File Encryption**: Transform file contents by shifting ASCII values
- **File Decryption**: Reverse the encryption process
- **Interactive User Interface**: Simple, menu-driven program

### 🔒 Technical Highlights
- **Language**: Pure C
- **Encryption Method**: ASCII value shifting (+100 technique)
- **File Handling**: Read, modify, and write file contents

## 🛠 System Requirements

### Prerequisites
- **Compiler**: GCC or any standard C compiler
- **Required Libraries**:
  - `stdio.h`
  - `stdlib.h`

### Supported Platforms
- Linux
- macOS
- Windows (with MinGW)

## 🚀 Quick Start Guide

### 1. Clone the Repository
```bash
git clone https://github.com/dinesh-gaire/encryption-decryption.git
cd encryption-decryption-c
```

### 2. Compile the Program
```bash
gcc miniproject.c -o encryption_decryption
```

### 3. Run the Application
```bash
./encryption_decryption
```

## 🖥️ User Interface

### Main Menu
```
Welcome to Encryption-Decryption
--------------------------------
Press 1 for Encryption
Press 0 for Decryption
```

### Workflow
#### Encryption
1. Select option `1`
2. Enter the filename to encrypt
3. Program transforms and saves the file

#### Decryption
1. Select option `0`
2. Enter the filename to decrypt
3. Program restores original content

## 🔍 How It Works

### Encryption Process
```c
// Pseudocode for encryption
while (reading file) {
    char = current_character
    encrypted_char = char + 100  // Shift ASCII value
    write encrypted_char to file
}
```

### Decryption Process
```c
// Pseudocode for decryption
while (reading encrypted file) {
    char = current_character
    decrypted_char = char - 100  // Reverse shift
    write decrypted_char to file
}
```

## 📋 Example Usage

### Encrypting a File
```
Enter your choice: 1
Input the name of file to encrypt: example.txt
File example.txt successfully encrypted!
```

### Decrypting a File
```
Enter your choice: 0
Input the name of file to decrypt: example.txt
File example.txt decrypted successfully!
```

## ⚠️ Limitations

### 🚨 Security Considerations
- **Basic Encryption**: Simple ASCII shifting
- **Not Recommended for**:
  - Sensitive data protection
  - Professional security applications

### 🛠 Technical Constraints
- Fixed encryption key (+100)
- Creates temporary files
- Limited error handling

## 🚧 Potential Improvements

### Future Enhancements
- [ ] Implement advanced encryption algorithms (AES, RSA)
- [ ] Add password-based encryption
- [ ] Improve error handling
- [ ] Support multiple file types
- [ ] Add file path validation

## 💡 Learning Objectives

This project helps you understand:
- File I/O operations in C
- Basic encryption concepts
- Character manipulation
- Simple algorithmic thinking

## 🤝 Contributing

### How to Contribute
1. Fork the repository
2. Create a feature branch
3. Implement improvements
4. Submit a pull request

## 📜 License

**MIT License**
- Open for educational and personal use
- Attribution appreciated

## 🆘 Troubleshooting

### Common Issues
- Ensure input file exists
- Check file read/write permissions
- Verify compiler compatibility

## 🌟 Disclaimer

**Educational Purposes Only**
- Not suitable for securing sensitive information
- Demonstrates fundamental encryption concepts

## 📚 Learning Resources

### Recommended Reading
- C Programming Fundamentals
- File Handling Techniques
- Basic Cryptography Concepts

## 📞 Support

- Open GitHub Issues
- Review Documentation
- Contact Project Maintainers

---

**Remember**: This is a learning project. For real-world encryption, use professional cryptography libraries! 🔒
