# ⚡ Smart Energy Meter using ESP32 & PZEM-004T

<div align="center">

<img src="images/banner.png" width="1000">

![ESP32](https://img.shields.io/badge/ESP32-IoT-blue?style=for-the-badge&logo=espressif)
![PZEM-004T](https://img.shields.io/badge/Sensor-PZEM--004T-green?style=for-the-badge)
![Arduino IDE](https://img.shields.io/badge/Arduino_IDE-00979D?style=for-the-badge&logo=arduino)
![Blynk](https://img.shields.io/badge/Blynk-IoT-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)

# ⚡ IoT-Based Smart Energy Monitoring System

### 📊 Real-Time Electrical Parameter Monitoring with Wi-Fi Dashboard & Alerts

*"Measure, Monitor, Analyze, and Optimize Energy Consumption Anywhere."*

</div>

---

# 📖 Table of Contents

- 🎯 Problem Statement
- 💡 Proposed Solution
- 🔍 Project Overview
- ✨ Features
- 🛠️ Hardware Components
- 🖼️ Hardware Setup
- 🔌 Circuit Diagram
- 📊 Dashboard Preview
- ⚙️ Working Principle
- 📁 Project Structure
- 🚀 Getting Started
- 📈 Results
- 🎯 Applications
- 🔮 Future Scope
- 👨‍💻 Author

---

# 🎯 Problem Statement

In today's world, monitoring electrical energy consumption has become essential for:

🏠 Homes

🏢 Offices

🏭 Industries

⚡ Smart Buildings

Traditional energy meters provide only cumulative readings and lack:

❌ Real-time monitoring

❌ Remote accessibility

❌ Instant alerts

❌ Energy analytics

❌ Smart energy management

As electricity consumption increases, users require an intelligent system capable of monitoring electrical parameters in real time and providing actionable insights.

---

# 💡 Proposed Solution

This project introduces an **IoT-Based Smart Energy Meter** using **ESP32** and **PZEM-004T** capable of:

✅ Real-time monitoring of electrical parameters.

✅ Wireless data visualization using Wi-Fi.

✅ Live dashboard updates.

✅ Energy consumption alerts.

✅ Remote accessibility.

✅ Low-cost and scalable implementation.

---

# 🔍 Project Overview

The system continuously measures:

⚡ Voltage (V)

⚡ Current (A)

⚡ Power (W)

⚡ Energy (kWh)

⚡ Frequency (Hz)

⚡ Power Factor (PF)

The measured data is transmitted to a web dashboard using the ESP32's built-in Wi-Fi capabilities and can also be visualized using **Blynk IoT**.

---

# ✨ Features

✅ Real-Time Energy Monitoring

✅ Live Wi-Fi Dashboard

✅ Automatic Refresh Every 2–3 Seconds

✅ Threshold-Based Alerts

✅ Lightweight Embedded System

✅ Remote Monitoring Capability

✅ User-Friendly Dashboard

✅ Low-Cost IoT Solution

---

# 🛠️ Hardware Components

| Component | Quantity |
|-----------|-----------|
| ESP32 Development Board | 1 |
| PZEM-004T Energy Meter | 1 |
| AC Load | 1 |
| Power Supply | 1 |
| Connecting Wires | As Required |

---

# 🖼️ Hardware Setup

<p align="center">
  <img src="./images/hardware_setup.jpg" width="750">
</p>

<p align="center">
  <em>Complete Hardware Setup of Smart Energy Meter</em>
</p>

---

# 🔌 Circuit Diagram

<p align="center">
  <img src="./images/circuit_diagram.png" width="900">
</p>

<p align="center">
  <em>Circuit Connections of ESP32 and PZEM-004T</em>
</p>

---

# 📊 Dashboard Preview

<p align="center">
  <img src="./images/dashboard.png" width="900">
</p>

<p align="center">
  <em>Real-Time Energy Monitoring Dashboard</em>
</p>

---

# ⚙️ Working Principle

### Step 1️⃣

The **PZEM-004T** measures electrical parameters from the connected AC load.

### Step 2️⃣

The **ESP32** reads the measured values through serial communication.

### Step 3️⃣

The ESP32 processes and updates the data continuously.

### Step 4️⃣

The system hosts a web server over Wi-Fi.

### Step 5️⃣

The dashboard refreshes every 2–3 seconds and displays:

- Voltage
- Current
- Power
- Energy
- Frequency
- Power Factor

### Step 6️⃣

Threshold-based alerts are generated whenever energy consumption exceeds predefined limits.

---

# 📡 System Architecture

```text
         AC Load
            │
            ▼
   +----------------+
   |   PZEM-004T    |
   +----------------+
            │
            │ UART
            ▼
   +----------------+
   |      ESP32     |
   +----------------+
            │
      Wi-Fi Connection
            │
            ▼
   +----------------+
   | Web Dashboard  |
   |   & Blynk IoT  |
   +----------------+
```

---

# 📁 Project Structure

```text
Smart-Energy-Meter/
│
├── firmware/
│   └── SmartEnergyMeter.ino
│
├── web-dashboard/
│   ├── index.html
│   ├── style.css
│   └── script.js
│
├── circuit/
│   └── Circuit_Diagram.png
│
├── images/
│   ├── banner.png
│   ├── hardware_setup.jpg
│   ├── dashboard.png
│   └── circuit_diagram.png
│
├── docs/
│   ├── Project_Report.pdf
│   └── Presentation.pptx
│
└── README.md
```

---

# 🚀 Getting Started

## 1️⃣ Clone Repository

```bash
git clone https://github.com/yourusername/Smart-Energy-Meter.git
```

---

## 2️⃣ Open Arduino IDE

Install the following libraries:

- PZEM004Tv30
- WiFi
- WebServer
- Blynk

---

## 3️⃣ Configure Wi-Fi Credentials

```cpp
const char* ssid = "YourWiFiName";
const char* password = "YourPassword";
```

---

## 4️⃣ Upload Firmware

Upload:

```text
firmware/SmartEnergyMeter.ino
```

to your ESP32 board.

---

## 5️⃣ Open Dashboard

Connect to the ESP32 IP address in your browser.

---

# 📈 Parameters Measured

| Parameter | Unit |
|-----------|-------|
| Voltage | Volts (V) |
| Current | Amperes (A) |
| Power | Watts (W) |
| Energy | kWh |
| Frequency | Hz |
| Power Factor | PF |

---

# 📊 Results

✅ Accurate real-time measurements.

✅ Stable Wi-Fi communication.

✅ Dashboard refresh every 2–3 seconds.

✅ Successful threshold-based alert system.

✅ Low-cost IoT implementation.

---

# 🎯 Applications

🏠 Smart Homes

🏢 Offices

🏭 Industrial Energy Monitoring

⚡ Energy Management Systems

🌍 Smart Buildings

🔋 Renewable Energy Monitoring

---

# 🔮 Future Scope

🚀 Cloud Data Logging

🚀 MQTT Integration

🚀 Mobile Application

🚀 Historical Graphs and Analytics

🚀 Remote Device Management

🚀 AI-Based Energy Consumption Prediction

🚀 Multi-Device Monitoring Dashboard

---

# 🧰 Technologies Used

- ESP32
- Embedded C/C++
- Arduino IDE
- Wi-Fi
- Blynk IoT
- PZEM-004T
- HTML
- CSS
- JavaScript

---

# 👨‍💻 Author

## Akshat Srivastava

🎓 B.Tech Electronics and Communication Engineering  
🏫 Lovely Professional University

💻 Embedded Systems | IoT | Robotics Enthusiast

🔗 GitHub: https://github.com/yourusername

🔗 LinkedIn: https://linkedin.com/in/yourprofile

---

<div align="center">

## ⭐ If you found this project useful, please consider giving it a star!

### ⚡ Building Smarter and More Efficient Energy Monitoring Solutions ⚡

</div>
