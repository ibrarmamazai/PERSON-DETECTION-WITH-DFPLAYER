# PERSON DETECTION WITH DFPLAYER

![Person Detection with DFPlayer](https://img.shields.io/badge/Download%20Releases-Click%20Here-brightgreen)

## Overview

This project demonstrates an **Ultrasonic-Based Audio Welcome & Exit System** using the **DFPlayer Mini**. It allows for real-time detection of people entering or exiting a designated area. The system utilizes **ultrasonic sensors** to monitor the distance and plays audio messages through the **DFPlayer Mini MP3 module**.

## Features

- 🎵 Plays a **"Welcome"** message when a person is detected at the **entry point**.
- 🎵 Plays a **"Thank you"** message when a person is detected at the **exit point**.
- 📏 Capable of detecting presence within a range of **5 meters** using **ultrasonic distance measurement**.
- 🔊 Utilizes the **DFPlayer Mini** for standalone audio playback, eliminating the need for an internet connection or computer.

## Required Components

To build this project, you will need the following components:

| Component                         | Quantity |
|----------------------------------|----------|
| Arduino Uno/Nano                 | 1        |
| HC-SR04 Ultrasonic Sensor        | 2        |
| DFPlayer Mini MP3 Module         | 1        |
| MicroSD Card (formatted FAT32)   | 1        |
| Speaker (3W recommended)         | 1        |
| Jumper Wires                     | As needed|
| Breadboard                       | 1        |

## Circuit Diagram

![Circuit Diagram](https://example.com/circuit-diagram.png)

The circuit connects the ultrasonic sensors and the DFPlayer Mini to the Arduino. The ultrasonic sensors will measure the distance, while the DFPlayer Mini will handle audio playback.

## Installation

1. **Clone the Repository:**

   Open your terminal and run:

   ```
   git clone https://github.com/ibrarmamazai/PERSON-DETECTION-WITH-DFPLAYER.git
   ```

2. **Install the Required Libraries:**

   Make sure to install the following libraries in your Arduino IDE:

   - **DFPlayer Mini** library
   - **NewPing** library for ultrasonic sensors

   You can install these libraries via the Library Manager in the Arduino IDE.

3. **Upload the Code:**

   Open the `person_detection.ino` file in the Arduino IDE. Upload the code to your Arduino board.

4. **Prepare the MicroSD Card:**

   - Format the MicroSD card to FAT32.
   - Place the audio files named `welcome.mp3` and `thankyou.mp3` on the card.
   - Insert the MicroSD card into the DFPlayer Mini.

5. **Connect the Components:**

   Follow the circuit diagram to connect the components as described above.

## Usage

Once everything is set up, power the Arduino. The system will begin to monitor the area for movement. When a person approaches the entry point, the system will play the welcome message. As the person exits, it will play the thank you message.

## Troubleshooting

If you encounter issues, check the following:

- Ensure all connections are secure.
- Verify that the MicroSD card is properly formatted and contains the correct audio files.
- Check the power supply to the Arduino and DFPlayer Mini.

## Code Explanation

The main code logic involves reading the distance from the ultrasonic sensors and comparing it to a threshold. If the distance is less than the threshold, the system determines if the person is entering or exiting based on the sensor's position.

### Key Functions

- **setup():** Initializes the sensors and the DFPlayer Mini.
- **loop():** Continuously checks the distance and plays the appropriate audio message.

## Release Information

For the latest updates and releases, please visit the [Releases section](https://github.com/ibrarmamazai/PERSON-DETECTION-WITH-DFPLAYER/releases). You can download the latest version of the code and any updates from there.

## Future Improvements

- Add a display to show the status of the system.
- Implement a logging feature to track the number of entries and exits.
- Enhance the audio system with more messages.

## Contributing

If you wish to contribute to this project, feel free to fork the repository and submit a pull request. Contributions can include bug fixes, enhancements, or additional features.

## License

This project is licensed under the MIT License. You can freely use, modify, and distribute the code as long as proper attribution is given.

## Acknowledgments

- Special thanks to the Arduino community for their support and resources.
- Thanks to the creators of the libraries used in this project.

For any questions or issues, please open an issue in the repository or contact me directly.

![Person Detection with DFPlayer](https://img.shields.io/badge/Download%20Releases-Click%20Here-brightgreen)

Visit the [Releases section](https://github.com/ibrarmamazai/PERSON-DETECTION-WITH-DFPLAYER/releases) for the latest updates and downloads.