
# Smart Energy Meter (IoT-Based System)

An IoT-enabled Smart Energy Meter developed using **ESP32** and **PZEM-004T** for real-time monitoring of electrical parameters. The system measures voltage, current, power, energy, frequency, and power factor, then displays the data on a Wi-Fi-enabled web dashboard with automatic refresh and threshold-based alerts.

## Features

- Real-time monitoring of voltage, current, power, and energy
- Live web dashboard with 2–3 second refresh intervals
- Wi-Fi connectivity using ESP32
- Threshold-based alerts for excessive energy consumption
- Continuous data acquisition and visualization
- Lightweight embedded implementation using Arduino IDE

## Hardware Used

- ESP32 Development Board
- PZEM-004T Energy Meter Module
- AC Load
- Power Supply

## Software Used

- Arduino IDE
- Embedded C/C++
- Blynk Iot

## Working

1. The PZEM-004T measures electrical parameters from the connected AC load.
2. The ESP32 reads sensor data through serial communication.
3. The ESP32 hosts a web server over Wi-Fi.
4. The dashboard updates every 2–3 seconds with live measurements.
5. Alerts are generated when energy usage exceeds predefined thresholds.

## Project Structure

```
Smart-Energy-Meter
├── firmware
├── web-dashboard
├── circuit
├── images
├── docs
└── README.md
```

## Technologies

- ESP32
- Embedded C
- IoT
- Wi-Fi
- PZEM-004T
- HTML
- CSS
- JavaScript

## Future Improvements

- Cloud data logging
- MQTT integration
- Mobile application
- Historical energy graphs
- Remote device management

## Author

**Akshat Srivastava**
