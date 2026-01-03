# 🤖 Arduino Robotic Arm Controller

A **4-DOF (Degrees of Freedom) robotic arm** controlled by Arduino with potentiometer-based manual control. This project demonstrates embedded systems programming and servo motor control for precise robotic manipulation.

## 🌟 Features

- **4-Axis Control**: Independent control of claw, base rotation, and two joint servos
- **Potentiometer Input**: Analog input-based control for precise positioning
- **Real-time Control**: Immediate response to user input with minimal delay
- **Servo Mapping**: Advanced analog-to-servo angle conversion
- **Serial Monitoring**: Debug capability for sensor reading verification

## 🔧 Hardware Components

- **Microcontroller**: Arduino (Uno/Nano/Mega compatible)
- **Servo Motors**: 4x standard servo motors (180° rotation)
- **Input Devices**: 4x 10kΩ potentiometers
- **Power Supply**: External power source (5-6V recommended for servos)
- **Connections**:
  - Potentiometer 1 (Claw) → A1
  - Potentiometer 2 (Base) → A2
  - Potentiometer 3 (Joint 1) → A3
  - Potentiometer 4 (Joint 2) → A4
  - Servo outputs → Pins 8, 9, 10, 11

## 🛠️ Tech Stack

- **Programming Language**: C++ (Arduino)
- **Framework**: Arduino IDE
- **Libraries**: Servo.h (standard Arduino library)
- **Hardware**: Arduino-compatible board

## 📋 Prerequisites

- Arduino IDE installed ([Download here](https://www.arduino.cc/en/software))
- USB cable for Arduino connection
- Basic understanding of electronics and circuit building

## 🚀 Installation & Setup

1. **Clone the repository**
   ```bash
   git clone https://github.com/HardhikTottempudi/robotic_Arm.git
   cd robotic_Arm
   ```

2. **Hardware Setup**
   - Connect 4 servo motors to digital pins 8, 9, 10, and 11
   - Connect 4 potentiometers to analog pins A1, A2, A3, and A4
   - Ensure proper power supply to servos (external 5V recommended)
   - Connect Arduino GND to common ground

3. **Upload Code**
   - Open `Robotical_Arm_Code.ino` in Arduino IDE
   - Select your Arduino board type (Tools → Board)
   - Select the correct COM port (Tools → Port)
   - Click Upload button or press Ctrl+U

4. **Testing**
   - Open Serial Monitor (Tools → Serial Monitor)
   - Set baud rate to 9600
   - Rotate potentiometers to control the robotic arm

## 💡 How It Works

### Control Mechanism
- **Claw Control**: Digital on/off based on potentiometer threshold (200 value)
- **Base Rotation**: Maps analog input (110-800) to servo angle (180°-0°)
- **Joint Controls**: Maps analog input (170-880) to servo angle (180°-0°)

### Code Architecture
```cpp
void setup() {
  // Initialize servo motors on designated pins
  // Begin serial communication for debugging
}

void loop() {
  // Read potentiometer values
  // Map analog values to servo angles
  // Write angles to servo motors
  // 5ms delay for stability
}
```

## 📹 Demo

Check out `Robotic arm video.mp4` in the repository for a live demonstration of the robotic arm in action!

## 🎯 Key Features for Hiring Managers

- **Embedded Systems**: Demonstrates proficiency in microcontroller programming
- **Hardware-Software Integration**: Shows ability to interface with physical components
- **Real-time Systems**: Implements responsive control with minimal latency
- **Problem-Solving**: Custom mapping algorithms for smooth servo control
- **Documentation**: Complete circuit diagram and code documentation included

## 🔧 Circuit Diagram

See `robotic arm.pdf` for detailed circuit schematic and wiring instructions.

## 🔮 Future Enhancements

- Add inverse kinematics for coordinate-based positioning
- Implement preset positions and movement sequences
- Add Bluetooth/WiFi control capability
- Create mobile app for wireless control
- Integrate sensors for obstacle detection
- Add gripper force feedback

## 📝 Troubleshooting

- **Servo jittering**: Check power supply - servos may need external power
- **Unresponsive controls**: Verify potentiometer connections and values in Serial Monitor
- **Limited range**: Adjust mapping values based on your specific potentiometers

## 📚 Resources

- [Arduino Servo Library Documentation](https://www.arduino.cc/reference/en/libraries/servo/)
- [Understanding PWM and Servo Control](https://www.arduino.cc/en/Tutorial/Foundations/PWM)

## 📝 License

This project is open source and available for educational purposes.

## 👤 Author

**Hardhik Tottempudi**
- GitHub: [@HardhikTottempudi](https://github.com/HardhikTottempudi)
- Portfolio: [hardhiktottempudi.com](https://hardhiktottempudi.com/)

---

*This project showcases practical skills in robotics, embedded systems, and real-time hardware control.*
