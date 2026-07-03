<h1 align="center">🏦 Banking System Simulator</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Course-Object%20Oriented%20Programming-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/UCP-Fall%202024-red?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white"/>
</p>

<p align="center">
A <b>C++ console-based Banking System Simulator</b> demonstrating Object-Oriented Programming concepts including Encapsulation, Inheritance, Polymorphism, Dynamic Binding, and Input Validation.
</p>

---

# 📌 Overview

The **Banking System Simulator** is a menu-driven C++ application developed as an **Object-Oriented Programming (OOP)** semester project.

The system allows users to create and manage bank accounts, securely verify PINs, deposit and withdraw money, check balances, modify account information, and automatically lock accounts after multiple incorrect PIN attempts.

The project follows modular programming principles using multiple classes and demonstrates real-world banking operations.

---

# ✨ Features

| Feature | Description |
|---------|-------------|
| 🆕 Create Account | Create Savings or Current Accounts |
| 🔍 Search Account | Search an account using Account Number |
| 📋 Show All Accounts | Display all registered accounts |
| 💰 Deposit Money | Deposit money securely |
| 💸 Withdraw Money | Withdraw money with balance validation |
| 💳 Balance Inquiry | Display current account balance |
| ✏️ Modify Account | Update account information |
| 🔒 Account Lock | Automatically lock after 3 incorrect PIN attempts |
| 🔓 Unlock Account | Unlock using the correct PIN |
| ✅ Input Validation | Validate PIN, Name and Numeric Inputs |

---

# 🧠 OOP Concepts Used

<p>

<img src="https://img.shields.io/badge/Encapsulation-success?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Inheritance-blue?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Polymorphism-red?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Virtual%20Functions-orange?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Dynamic%20Binding-blueviolet?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Input%20Validation-lightgrey?style=for-the-badge"/>

</p>

---

# 🏛️ Class Structure

| Class | Responsibility |
|-------|----------------|
| `Account` | Base class containing account information and common banking operations |
| `SavingsAccount` | Derived class representing savings accounts |
| `CurrentAccount` | Derived class representing current accounts |
| `Bank` | Manages all bank accounts and banking operations |

---

# 📋 Menu

```text
===== BANK MANAGEMENT SYSTEM =====

1. Create New Account
2. Show All Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Balance Inquiry
7. Modify Account
8. Account Status Check
9. Exit
```

---

# 🔐 Security Features

- 4-digit PIN validation
- PIN verification before every transaction
- Account automatically locks after 3 incorrect PIN attempts
- Unlock account using the correct PIN
- Protected account data using encapsulation

---

# 📂 Project Structure

```text
Banking-System-Simulator/
│
├── Account.h
├── Account.cpp
├── SavingsAccount.h
├── SavingsAccount.cpp
├── CurrentAccount.h
├── CurrentAccount.cpp
├── Bank.h
├── Bank.cpp
├── main.cpp
│
├── UML Diagram.png
├── Banking_System_Simulator_Project_Report.docx
├── README.md
├── LICENSE
└── .gitignore
```

---

# 🏗️ UML Class Diagram

```
                Account
                   ▲
         ┌─────────┴─────────┐
         │                   │
SavingsAccount      CurrentAccount

                   ▲
                   │
                 Bank
```

*(Include the UML Diagram image in the repository for a complete visualization.)*

---

# ▶️ How to Run

## 🖥️ Visual Studio

1. Open Visual Studio
2. Create an Empty C++ Project
3. Add all `.cpp` and `.h` files
4. Build the project
5. Press **Ctrl + F5**

---

## 💻 VS Code

```bash
g++ *.cpp -o BankingSystem
./BankingSystem
```

---

# 📸 Sample Output

```text
===== BANK MANAGEMENT SYSTEM =====

1. Create New Account
2. Show All Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Balance Inquiry
7. Modify Account
8. Account Status Check
9. Exit
```

---

# 🎯 Learning Outcomes

This project demonstrates:

- Object-Oriented Programming
- Classes & Objects
- Encapsulation
- Inheritance
- Polymorphism
- Virtual Functions
- Dynamic Memory
- Arrays of Objects
- Menu-Driven Programming
- Input Validation
- Secure Authentication

---

# 🚀 Future Enhancements

- 💾 File Handling
- 🗄️ Database Integration
- 📄 Transaction History
- 📱 GUI Application
- 🌐 Online Banking
- 📊 Account Statements
- 💳 Interest Calculation
- 🔔 SMS & Email Notifications

---

# 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C++ | Programming Language |
| Visual Studio | IDE |
| OOP | Software Design |
| Console | User Interface |

---

# 🎓 Academic Information

| Field | Details |
|-------|---------|
| **University** | University of Central Punjab (UCP) |
| **Course** | Object-Oriented Programming |
| **Project Type** | Semester Project |

---

# 👨‍💻 Developer

**Irfan**  
**L1F24BSCS0580**

---

# 📄 License

This project is licensed under the **MIT License**.

See the **LICENSE** file for details.

---

<h3 align="center">⭐ If you found this project helpful, don't forget to star the repository! ⭐</h3>
