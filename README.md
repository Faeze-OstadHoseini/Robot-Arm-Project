# 🤖 Robotic Arm Control with Arduino & Joystick

> A 4-DOF robotic arm controlled by analog joysticks, designed for educational and industrial automation purposes.

---

## 📋 Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Hardware Components](#hardware-components)
- [Circuit Diagram](#circuit-diagram)
- [Software Setup](#software-setup)
- [Code Explanation](#code-explanation)
- [Mechanical Design](#mechanical-design)
- [Future Improvements](#future-improvements)
- [Author](Faeze OstadHoseini)

---

## 📌 Overview
This project implements a **4-DOF (Degree of Freedom) robotic arm** using:
- **Arduino Uno** as the microcontroller
- **4 Servo Motors** for joint control
- **4 Analog Joysticks** for real-time manipulation
- **SolidWorks** for 3D modeling and mechanical design

The arm can be controlled manually via joysticks, making it suitable for:
- Educational robotics
- Pick-and-place operations
- Remote handling applications

---

## ✨ Features
✅ **4 independent joints** controlled by 4 joysticks  
✅ **Smooth motion** with servo mapping and delay optimization  
✅ **3D printable design** (SolidWorks files included)  
✅ **Intuitive control** with joystick mapping for natural movement  
✅ **Modular code** - easily extendable for more DOFs  

---

## 🧩 Hardware Components
| Component | Quantity | Description |
|-----------|----------|-------------|
| Arduino Uno | 1 | Main controller |
| Servo Motor MG995 | 4 | High-torque servos for joints |
| Analog Joystick | 4 | 2-axis thumb joysticks |
| Power Supply | 1 | 5V 2A (external for servos) |
| Jumper Wires | 20+ | Male-to-female connectors |
| Breadboard | 1 | For prototyping |

### Pin Connections:
| Servo | Arduino Pin | Joystick | Arduino Pin |
|-------|-------------|----------|-------------|
| Servo 1 | Pin 3 | Joy A | A0 |
| Servo 2 | Pin 4 | Joy B | A1 |
| Servo 3 | Pin 6 | Joy C | A2 |
| Servo 4 | Pin 10 | Joy D | A3 |

---

## 🔌 Circuit Diagram
*(Add your wiring diagram image here)*

![Wiring Diagram](Schematic/wiring-diagram.png)

---

## 💻 Software Setup

### Requirements
- Arduino IDE (v1.8.19 or later)
- Built-in Servo library (no additional installation needed)

### Upload Instructions
1. Clone this repository:
   ```bash
   git clone https://github.com/Faeze-OstadHoseini/Robot-Arm-Project.git
