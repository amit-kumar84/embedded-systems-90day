# 90-DAY EMBEDDED SYSTEMS + IoT INTENSIVE ROADMAP
## Amit Kumar - Job-Ready in 90 Days (Laptop Only, No Hardware Required Initially)

**Goal**: Secure first embedded systems/IoT job within 90 days
**Strategy**: 70% Software + Simulations, 30% Virtual Hardware Projects
**Your Advantage**: Diploma in CSE + B.Tech in ECE (5th semester) = Strong foundation
**Job Target**: ₹3-5 LPA starting (Entry-level Embedded Software/IoT Developer)

---

## OVERVIEW: YOUR 90-DAY TRANSFORMATION

### Timeline Breakdown
- **Days 1-30**: Core Skills Intensive (C, RTOS, Embedded Systems Theory)
- **Days 31-60**: IoT Stack Mastery (WiFi, Cloud, Protocols, Real Projects)
- **Days 61-90**: Portfolio Project Execution + Interview Prep + Job Applications

### Why This Timeline Works for You
1. You have CSE foundation → C programming will be faster
2. You have ECE background → Hardware concepts easier to understand
3. Laptop-based learning → Can start immediately without hardware
4. Simulation tools → Practice without buying expensive equipment
5. Cloud-based IoT → Can build real IoT projects virtually

### Jobs You'll Be Ready For
- **Embedded Software Engineer** (Entry-level) - ₹3-5 LPA
- **IoT Developer** (Fresher with projects) - ₹6-8 LPA
- **Firmware Developer** - ₹3-5 LPA
- **Technical Assistant** (PRL-like positions) - ₹2-3 LPA + quick growth

---

## PHASE 1: FOUNDATIONAL SPRINT (Days 1-30)
### Goal: Build Core Knowledge + Job Interview Readiness

### Week 1: C Programming Advanced & Embedded Systems Theory (Days 1-7)

#### Day 1-2: Embedded C Deep Dive
**Learning Resources**:
- **Coursera**: "The Arduino Platform and C Programming" Module 1-2 (2 hours)
- **YouTube**: "Embedded C Programming" - Kunal Kushwaha (1.5 hours)
- **Website**: GeeksforGeeks - Embedded C Concepts (1 hour reading)
- **Simulation**: Compile first C program on laptop (no Arduino needed)

**Topics**:
- Memory layout (stack, heap, BSS, text)
- Pointers and memory management
- Volatile keyword and hardware registers
- Inline assembly basics
- Preprocessor directives

**Practice**:
```c
// Simulate hardware register reading
volatile unsigned int *register_address = (volatile unsigned int *)0x40000000;
unsigned int value = *register_address;

// Simulate bit manipulation for registers
#define BIT_SET(reg, bit) ((reg) |= (1 << (bit)))
#define BIT_CLEAR(reg, bit) ((reg) &= ~(1 << (bit)))
```

**Deliverable**: GitHub commit - 10 C programs demonstrating embedded concepts

#### Day 3-4: Embedded Systems Architecture
**Learning Resources**:
- **YouTube**: "ARM Cortex-M Architecture" - Phil's Lab (40 min)
- **Website**: GeeksforGeeks - Microcontroller Basics (1.5 hours)
- **Article**: "From Zero to main(): Bare Metal C" (1 hour)

**Topics**:
- ARM Cortex-M0/M3/M4 differences
- CPU modes (Thread, Handler)
- Memory-mapped I/O
- Interrupts and interrupt priority
- Reset sequence and boot process

**Interview Prep**: Understand these concepts deeply - they're common job questions

#### Day 5-7: Real-Time Operating Systems (RTOS) Theory
**Learning Resources**:
- **YouTube**: "FreeRTOS Fundamentals" - GreatScott (30 min overview)
- **Website**: FreeRTOS Official Docs (1 hour reading)
- **Simulation**: Install FreeRTOS simulator for Windows/Linux (free)

**Topics**:
- Task states and context switching
- Schedulers (preemptive vs cooperative)
- Task priority
- Intertask communication (queues, semaphores, mutexes)
- Deadlock and starvation

**Practice with Simulator** (No hardware needed):
- Create 3 tasks with different priorities
- Implement queue-based communication
- Create deadlock scenario and resolve it

**Deliverable**: 5 FreeRTOS simulation programs on GitHub

---

### Week 2: Communication Protocols & Debugging (Days 8-14)

#### Day 8: UART Protocol Deep Dive
**Learning Resources**:
- **YouTube**: "UART Protocol Explained" (20 min)
- **Simulator**: Use Proteus simulation or Wokwi
- **Practice**: Implement UART byte-by-byte in C

**Topics**:
- UART frame structure (start, data, parity, stop bits)
- Baud rate calculations
- Serial communication fundamentals
- RS-232 vs TTL levels

**Simulation Task**: 
- Simulate UART communication between two virtual devices
- Implement UART driver from scratch in C
- Send/receive structured data packets

#### Day 9: I2C Protocol
**Learning Resources**:
- **YouTube**: "I2C Protocol Explained" - I2C From Scratch (25 min)
- **Website**: GeeksforGeeks - I2C Protocol (1 hour)
- **Simulator**: Proteus I2C simulation

**Topics**:
- I2C bus timing and pull-up resistors
- Address and data transmission
- ACK/NACK mechanism
- Master-slave operation

**Simulation**: Design I2C communication between master and 3 slaves

#### Day 10: SPI Protocol
**Learning Resources**:
- **YouTube**: "SPI Protocol Detailed" (25 min)
- **Simulation**: SPI timing diagrams

**Topics**:
- 4-wire SPI (MOSI, MISO, CLK, CS)
- Chip select timing
- Mode selection (CPOL, CPHA)
- Full-duplex communication

#### Day 11: CAN Bus (Automotive)
**Learning Resources**:
- **YouTube**: "CAN Bus Explained" - Microchip (25 min)

**Topics**:
- CAN frame format
- Arbitration
- Error detection
- Applications in automotive

#### Day 12-13: Protocol Integration Project
**Project**: Implement multi-protocol simulator
- Simulate master device communicating via UART, I2C, and SPI
- Parse different protocol messages
- Route to different handlers

**Deliverable**: GitHub - Protocol simulator code with test vectors

#### Day 14: Debugging Techniques & Tools
**Learning Resources**:
- **YouTube**: "Embedded Systems Debugging" - Phil's Lab (20 min)
- **Tools**: GDB usage (learn basics)

**Topics**:
- Breakpoints and watchpoints
- GDB remote debugging
- Serial port debugging
- Logic analyzer simulation

---

### Week 3-4: Microcontroller Deep Dive + IoT Fundamentals (Days 15-30)

#### Day 15-18: ARM Cortex Microcontroller Peripherals
**Learning Resources**:
- **YouTube**: STM32 tutorial series (2 hours)
- **Simulators**: 
  - Proteus for circuit simulation
  - Wokwi.com (free online Arduino/STM32 simulator)
  - Renode (open-source emulator)

**Peripherals** (Study + Simulate):
1. **GPIO** - Input/output pin control
2. **Timer/Counter** - PWM generation, timing
3. **ADC** - Analog to digital conversion
4. **UART/SPI/I2C** - Serial communication
5. **Interrupt Controller** - NVIC
6. **Power Management** - Sleep modes

**For each peripheral - Create simulation**:
- Understand register structure
- Write register-based code (not Arduino abstraction)
- Test in simulator
- Document behavior

**Deliverable**: 5 peripheral simulators (GPIO, Timer, ADC, UART, Interrupt)

#### Day 19-22: IoT Fundamentals
**Learning Resources**:
- **Coursera**: "IoT for Beginners" - Module 1-2 (3 hours)
- **Microsoft**: "IoT for Beginners" GitHub (free, 24 lessons)
- **YouTube**: "IoT Architecture" - Cisco (25 min)

**Topics**:
- IoT architecture (Edge, Gateway, Cloud)
- Sensor → Device → Cloud pipeline
- Data serialization (JSON, Protocol Buffers)
- Cloud platforms overview
- Wireless communication fundamentals

**Simulation**: Design IoT system architecture diagram
- 5 sensor nodes
- Gateway device
- Cloud service
- Data flow and protocols

#### Day 23-26: Wireless Protocols
**Learning Resources**:
- **YouTube**: "Wireless Protocols for IoT" (1 hour)
- **Simulations**: Virtual WiFi/BLE stack understanding

**Topics Covered**:
1. **Bluetooth/BLE** - Low power wireless
2. **WiFi** - Internet connectivity
3. **LoRaWAN** - Long range IoT
4. **Zigbee** - Home automation
5. **Cellular (LTE-M, NB-IoT)** - Wide area

**For each protocol**:
- Understand frequency, range, power consumption
- Learn packet structure
- Know when to use

#### Day 27-30: MQTT + Cloud Integration Basics
**Learning Resources**:
- **YouTube**: "MQTT Protocol" - IBM (20 min)
- **Free Broker**: test.mosquitto.org
- **Tools**: MQTT.fx (free MQTT client)

**Topics**:
- Publish-Subscribe model
- MQTT topics and QoS levels
- Client libraries (PubSubClient)
- Integration with cloud

**Simulation Project**:
- Set up free MQTT broker
- Create virtual MQTT client
- Publish sensor data
- Subscribe to control commands
- Create dashboard visualization

**Deliverable**: MQTT traffic logs + Dashboard screenshots

---

### END OF PHASE 1 CHECKLIST (Day 30)

✅ Advanced C proficiency  
✅ RTOS concepts (3+ programs)  
✅ 4 Communication protocols understood  
✅ 5 Microcontroller peripherals simulated  
✅ IoT architecture comprehension  
✅ MQTT project working  
✅ 20+ GitHub commits with clean code  
✅ Ready to discuss embedded systems in interviews

---

## PHASE 2: IoT STACK MASTERY (Days 31-60)
### Goal: Build Real IoT Projects Using Laptops

### Week 5: Cloud Platform Mastery (Days 31-37)

#### Day 31-33: ThingSpeak Deep Dive
**Learning Resources**:
- **ThingSpeak Official**: Getting Started (1 hour)
- **YouTube**: ThingSpeak Complete Tutorial (30 min)

**Project: Virtual Weather Station**
- Create ThingSpeak channel (free)
- Write Python script to simulate weather data
- Send temperature, humidity, pressure to cloud
- Create visualization and analysis charts
- Set up alerts

**Code Template** (Python):
```python
import requests
import time
import random

API_KEY = "your_thingspeak_api_key"
URL = "https://api.thingspeak.com/update"

while True:
    # Simulate sensor readings
    temp = 20 + random.uniform(-5, 5)
    humidity = 50 + random.uniform(-10, 10)
    pressure = 1013 + random.uniform(-5, 5)
    
    # Send to ThingSpeak
    payload = {
        'api_key': API_KEY,
        'field1': temp,
        'field2': humidity,
        'field3': pressure
    }
    requests.get(URL, params=payload)
    time.sleep(20)
```

#### Day 34-35: Blynk IoT Platform
**Learning Resources**:
- **Blynk Official**: Getting Started
- **YouTube**: Blynk Mobile App Tutorial (20 min)

**Project: Virtual Smart Home Dashboard**
- Create Blynk account
- Design mobile app layout
- Add virtual pins for lights, temperature, humidity
- Create simple Python backend
- Connect virtual devices to Blynk

#### Day 36-37: Azure IoT Hub OR AWS IoT Core
**Learning Resources**:
- **Microsoft Learn**: Azure IoT basics (free course, 2 hours)
- **AWS**: IoT Core getting started

**Choose one platform and build**:
- Device registration
- Send telemetry data
- Receive commands
- Store data in cloud storage
- Create basic dashboard

#### Week 6: Advanced IoT Concepts (Days 38-44)

#### Day 38-40: Edge Computing & Local Processing
**Learning Resources**:
- **YouTube**: "Edge Computing vs Cloud" (20 min)
- **Simulation**: Local data processing architecture

**Project: Smart Sensor Hub**
- Collect data from multiple virtual sensors
- Process data locally (filtering, aggregation)
- Send only processed data to cloud
- Reduce cloud bandwidth by 80%+
- Document results

#### Day 41-42: Data Formats & Serialization
**Topics**:
- JSON (human-readable)
- Protocol Buffers (efficient)
- MessagePack
- CBOR
- Choosing right format for IoT

**Practical**: 
- Serialize same data in all formats
- Compare size and transmission time
- Benchmark encoding/decoding speed

#### Day 43-44: Security Fundamentals
**Learning Resources**:
- **YouTube**: "IoT Security" - IIT Videos (1 hour)
- **OWASP**: IoT Top 10 Vulnerabilities

**Topics**:
- API key management
- TLS/SSL encryption
- Device authentication
- Secure firmware updates (OTA)
- Rate limiting and throttling

**Exercise**: 
- Understand common IoT attacks
- Implement basic authentication
- Study secure coding practices

### Week 7-8: Project-Based Learning (Days 45-60)

#### Days 45-52: MAJOR PROJECT 1 - Complete IoT System (Simulation-Based)

**Project: Multi-Sensor IoT Monitoring System**

**Architecture**:
```
Virtual Sensors (5x) 
    ↓
Embedded Device Simulator (ESP32 emulation)
    ↓
MQTT Broker (local + cloud)
    ↓
Data Processing (Python backend)
    ↓
Cloud Storage (Firebase/ThingSpeak)
    ↓
Dashboard (Web UI or Mobile)
    ↓
Alerts & Notifications
```

**Virtual Sensors to Simulate**:
1. Temperature (LM35 behavior)
2. Humidity (DHT22 behavior)
3. Distance (HC-SR04 ultrasonic)
4. Motion (PIR sensor)
5. Light Level (LDR)

**Components of Project**:

1. **Sensor Simulator** (Python)
   - Realistic sensor behavior
   - Noise and calibration
   - Failure scenarios

2. **Embedded Device Firmware** (C simulation)
   - Read sensors
   - Apply filters
   - MQTT publish
   - Error handling

3. **MQTT Communication**
   - Multiple topics
   - QoS levels
   - Subscribe to control commands

4. **Cloud Integration**
   - Data storage
   - Time-series database
   - Historical analysis

5. **Dashboard** (Web-based, free Grafana/Node-RED)
   - Real-time sensor display
   - Historical graphs
   - Alerts visualization

6. **Mobile/Web Interface**
   - Control simulation
   - View alerts
   - Set thresholds

**GitHub Documentation**:
- README with system architecture
- Setup instructions (free tools)
- API documentation
- Data flow diagrams
- Performance metrics

**Expected Outcome**:
- 500+ lines of well-documented code
- Deployable on cloud (free tier)
- Professional portfolio piece
- Interview talking point (30 minutes of discussion)

#### Days 53-60: Portfolio Projects Planning + Interview Prep

**Day 53**: 
- Finalize Project 1 documentation
- Create project demo video (5-10 min)
- Write technical blog post (1000+ words)
- Push to GitHub with all resources

**Day 54-56**:
- Start collecting interview questions
- Research target companies
- Study 50+ embedded systems interview questions
- Practice on LeetCode/HackerRank

**Day 57-60**:
- Prepare elevator pitch (30 sec, 1 min, 2 min versions)
- Practice talking about projects
- Mock interviews with ChatGPT/Claude
- Resume polish and LinkedIn update

---

## PHASE 3: PORTFOLIO PROJECTS + JOB LAUNCH (Days 61-90)
### Goal: 5 Impressive Projects + Secure Job Offers

### Week 9: PROJECT 2 - Firmware Development with Simulation (Days 61-68)

#### PROJECT 2: "Bootloader + Firmware Update System"

**Why Important for Jobs**:
- Shows low-level programming skills
- OTA updates are critical in IoT
- Demonstrates security understanding

**Project Scope**:
1. **Bootloader Simulation**
   - STM32 bootloader behavior
   - Firmware validation
   - Secure boot concepts

2. **Firmware Update Mechanism**
   - Version management
   - Delta updates (reduce size)
   - Rollback capability
   - Signature verification

3. **Update Protocol**
   - Implement update over UART/MQTT
   - Checksum verification
   - Progress tracking
   - Error recovery

4. **Testing**
   - Simulate update failures
   - Recovery scenarios
   - Version mismatch handling

**Deliverables**:
- Complete bootloader code (C)
- Firmware updater tool (Python)
- Test suite with 20+ test cases
- Documentation with diagrams
- Security analysis document

**Portfolio Value**: Shows you understand production embedded systems

---

### Week 10: PROJECT 3 - RTOS Application (Days 69-75)

#### PROJECT 3: "Real-Time Home Automation Controller"

**Scenario**: 
Apartment lighting, temperature, and security system with multiple concurrent tasks

**Tasks** (FreeRTOS):
1. **Sensor Monitor Task** - Read virtual sensors every 100ms
2. **Decision Task** - Apply automation logic
3. **Control Task** - Send commands to actuators
4. **Communication Task** - MQTT publish-subscribe
5. **Safety Task** - Watchdog and error handling
6. **Logging Task** - Record all events

**Features**:
- Task priority demonstration
- Inter-task communication (queues)
- Mutual exclusion (mutexes)
- Deadlock prevention
- Power-aware scheduling
- Real-time constraints

**Advanced Concepts**:
- Use FreeRTOS simulator
- Demonstrate priority inversion
- Show context switching
- Task profiling

**Code Structure**:
```
├── tasks/
│   ├── sensor_task.c
│   ├── control_task.c
│   └── comm_task.c
├── middleware/
│   ├── mqtt_handler.c
│   └── sensor_fusion.c
├── tests/
│   └── timing_analysis.c
└── README.md (detailed explanation)
```

**Interview Value**: Demonstrates understanding of concurrent systems and real-time constraints

---

### Week 11: PROJECT 4 - Data Processing & Analytics (Days 76-82)

#### PROJECT 4: "IoT Data Pipeline with ML Integration"

**Advanced Concept**: Shows you can work with data science + embedded systems

**Components**:

1. **Data Collection**
   - Simulate IoT sensor stream
   - Multiple data sources
   - Different rates and formats

2. **Data Processing**
   - Cleaning (remove outliers)
   - Normalization
   - Feature engineering
   - Time-series analysis

3. **Machine Learning** (TinyML concept)
   - Train simple model on synthetic data
   - Export to C format
   - Run inference on simulated device
   - Prediction accuracy measurement

4. **Anomaly Detection**
   - Detect unusual sensor readings
   - Alert generation
   - Root cause analysis

5. **Visualization**
   - Live data dashboard
   - Prediction accuracy charts
   - Anomaly timeline
   - Performance metrics

**Tools**:
- Python (pandas, numpy, scikit-learn)
- TensorFlow Lite
- Matplotlib/Plotly for visualization

**Job Appeal**: 
- Growing demand for "Embedded AI/ML Engineer"
- Shows modern skills
- Demonstrates full stack capability

---

### Week 12: PROJECT 5 + Job Applications (Days 83-90)

#### PROJECT 5: "Production-Ready Device Driver Development"

**Scenario**: Develop drivers for common IoT sensors

**Implement Drivers For**:

1. **I2C Device Driver** (OLED Display)
   - Register structure definitions
   - Device initialization
   - Read/write functions
   - Error handling
   - DMA support

2. **SPI Device Driver** (SD Card / Flash)
   - Bus protocol implementation
   - File system interface
   - Write protect handling
   - Wear leveling basics

3. **UART Driver** (GPS/GSM)
   - Circular buffer implementation
   - Interrupt handling
   - Flow control
   - Protocol parsing

4. **ADC Driver** (Multiple sensors)
   - Channel multiplexing
   - Calibration
   - Averaging/filtering
   - Interrupt vs polling modes

**Advanced Features**:
- Device tree configurations
- Platform abstraction layer
- Comprehensive error handling
- Performance benchmarks
- Unit tests

**Code Quality**:
- MISRA C compliance
- Static analysis (cppcheck)
- Code coverage > 80%
- Documentation comments (Doxygen)

**Job Appeal**: 
- Production-ready code
- Industry standard practices
- Shows maturity and experience

---

### Days 83-90: Job Hunt Launch

#### Resume Building
**Your Resume Should Include**:

```
PROJECTS (with GitHub links & live demos)
1. IoT Monitoring System - 500+ GitHub stars appeal
   - Deployed on Cloud (live link)
   - Real-time data visualization
   - MQTT + Cloud integration

2. Bootloader & Firmware Updates
   - Secure boot implementation
   - Over-the-air updates
   - Version management

3. RTOS Home Automation
   - FreeRTOS application
   - 6 concurrent tasks
   - Inter-task communication

4. IoT Data Pipeline + ML
   - Data collection & processing
   - Machine learning inference
   - Anomaly detection

5. Device Driver Development
   - I2C, SPI, UART drivers
   - MISRA C compliant
   - Unit tested
```

#### Technical Interview Preparation

**Must Know Topics** (for ₹3-5 LPA jobs):
1. **Embedded C** - Memory management, pointers, bit manipulation
2. **Microcontrollers** - GPIO, ADC, Timer, UART basics
3. **RTOS** - Task scheduling, synchronization, queues
4. **Communication** - UART, I2C, SPI, MQTT basics
5. **IoT** - Cloud platforms, data handling
6. **Debugging** - GDB, serial debugging, common issues
7. **Projects** - Deep knowledge of your portfolio projects

**Practice**:
- 50 LeetCode embedded systems problems
- Mock interviews (use Pramp or peer groups)
- Explain each project in 5-10 minutes
- Study company-specific tech stack

#### Job Search Strategy

**Target Companies** (for entry-level roles):
1. **Indian Startups**
   - ArrowOS, RoboScience, Skyfi, etc.
   - Fresher-friendly
   - ₹3-5 LPA range
   - Remote work likely

2. **MNCs in India**
   - TCS, Infosys (IoT divisions)
   - Bosch, Siemens (embedded divisions)
   - Philips, Samsung (consumer electronics)
   - ₹3-6 LPA entry level

3. **Hardware Companies**
   - Microchip, STMicroelectronics (technical support)
   - Qualcomm, MediaTek (design roles)
   - ₹5-8 LPA fresher roles

4. **IoT Platforms**
   - AWS IoT, Azure IoT teams
   - ThingsBoard
   - Blynk team
   - ₹6-8 LPA

#### Day-by-Day Execution (Days 83-90)

**Day 83**:
- Polish GitHub profiles
- Create professional GitHub README
- Add project showcase page

**Day 84-85**:
- Send 20 applications to target companies
- Connect with recruiters on LinkedIn
- Apply via platforms: Indeed, LinkedIn, NAUKRI

**Day 86-87**:
- Phone screen prep (technical questions)
- Research company tech stacks
- Prepare questions to ask

**Day 88-89**:
- Interview mock sessions
- Final project cleanup
- Update portfolio website

**Day 90**:
- Celebrate progress
- Continue applying
- Prepare for offers

---

## TOOLS & PLATFORMS (All Free or Freemium)

### Development
- **VS Code** - Free IDE
- **Git/GitHub** - Version control
- **PlatformIO** - Embedded IDE
- **Cortex-M Simulator** - STM32 simulation

### Simulation
- **Proteus** - Circuit simulation (free version limited)
- **Wokwi.com** - Online Arduino/ESP32 simulator (free)
- **Renode** - Open-source emulator
- **QEMU** - General emulator
- **TinkerCAD** - Online breadboard simulator (free)

### IoT Platforms
- **ThingSpeak** - Data visualization (free tier)
- **Blynk** - IoT app (free tier)
- **Azure IoT Hub** - Free tier available
- **AWS IoT Core** - 12 months free tier
- **Firebase** - Real-time database (free tier)
- **Mosquitto** - MQTT broker (free, open-source)

### Cloud Deployment
- **GitHub Pages** - Free web hosting
- **Heroku** - Free tier for small apps
- **Replit** - Online coding environment
- **Vercel** - Free deployment

### Collaboration
- **Discord** - Join embedded systems communities
- **Reddit** - r/embedded community
- **GitHub Discussions** - Ask questions

---

## SUCCESS METRICS FOR EACH PHASE

### After Phase 1 (Day 30)
- ✅ Can explain RTOS concepts from memory
- ✅ Can implement FreeRTOS tasks without tutorials
- ✅ Know all 4 communication protocols deeply
- ✅ 20+ GitHub commits
- ✅ Can pass embedded systems quiz (80%+)

### After Phase 2 (Day 60)
- ✅ Complete IoT project running on cloud (live)
- ✅ Can explain architecture in detail
- ✅ 50+ GitHub commits
- ✅ 4 different platforms used
- ✅ Ready for phone screening interviews

### After Phase 3 (Day 90)
- ✅ 5 portfolio projects with live demos
- ✅ 100+ GitHub commits
- ✅ 5 job applications submitted
- ✅ Technical interview-ready
- ✅ Networking with embedded systems community
- ✅ 1-3 offers received (realistic goal)

---

## LAPTOP-ONLY ADVANTAGE: Why You CAN Get Jobs Without Hardware

### Reality Check for Recruiters
When interviewing entry-level candidates, companies evaluate:
1. **Problem-solving ability** (✅ Your projects show this)
2. **Code quality** (✅ GitHub demonstrates this)
3. **Understanding of concepts** (✅ Your explanations prove this)
4. **Communication skills** (✅ Project documentation)
5. **Learning ability** (✅ Fast progress on roadmap)

**They DO NOT evaluate**: Whether you own hardware

### Actual Interview Questions (NOT Asked):
- "Where's your oscilloscope?" ❌
- "Did you use a real STM32 board?" ❌
- "Show me your hardware setup" ❌

### Actual Interview Questions (WILL Be Asked):
- "Explain your RTOS architecture" ✅
- "How did you handle data serialization?" ✅
- "Walk me through your IoT system" ✅
- "How would you debug this embedded issue?" ✅
- "Tell me about a technical challenge you faced" ✅

### Your Strategy
**For interviews**: 
- Focus on software architecture
- Discuss algorithms and optimization
- Explain embedded systems concepts
- Show problem-solving methodology
- Don't mention lack of hardware - focus on accomplishments

**On the job** (first day onboarded):
- Hardware is provided
- Training on real tools is given
- You already understand concepts
- Much faster onboarding than others

---

## DAY-BY-DAY QUICK REFERENCE

### PHASE 1: Foundation (Days 1-30)
- Days 1-7: C + RTOS theory
- Days 8-14: Communication protocols
- Days 15-22: Microcontroller peripherals
- Days 23-30: IoT + MQTT basics

### PHASE 2: IoT Stack (Days 31-60)
- Days 31-37: ThingSpeak + Blynk + Cloud
- Days 38-44: Edge computing + Security
- Days 45-60: MAJOR PROJECT 1 (IoT System)

### PHASE 3: Portfolio + Jobs (Days 61-90)
- Days 61-68: PROJECT 2 (Bootloader)
- Days 69-75: PROJECT 3 (RTOS Application)
- Days 76-82: PROJECT 4 (ML + IoT)
- Days 83-90: PROJECT 5 (Drivers) + Job Hunt

---

## INTERVIEW QUESTIONS YOU'LL MASTER

### Technical Core
1. What is the difference between microcontroller and microprocessor?
2. Explain memory layout (stack, heap, BSS, text)
3. What is a volatile keyword and why use it?
4. Explain UART, I2C, SPI differences
5. What is RTOS and why do we need it?
6. Explain task scheduling in FreeRTOS
7. How do you prevent deadlock?
8. What is DMA and when to use it?
9. Explain interrupt priority and NVIC
10. What is watchdog timer?

### IoT Specific
11. Explain IoT architecture layers
12. What is MQTT and publish-subscribe model?
13. How do you reduce power consumption in IoT?
14. Explain data serialization in IoT
15. What security considerations in IoT?
16. How do you implement OTA (Over-The-Air) updates?
17. Explain edge computing vs cloud
18. What wireless protocols do you know?
19. How do you handle unreliable networks?
20. Design an IoT system for smart home

### Your Projects
21-30. Deep questions about your 5 projects (30 min discussion)

---

## RECOMMENDED DAILY SCHEDULE

### Weekdays (2.5-3 hours)
- **30 min**: Theory video or article
- **60 min**: Hands-on coding/simulation
- **45 min**: Project work or documentation
- **15 min**: GitHub commit and notes

### Weekends (4-5 hours)
- **90 min**: Deep learning (course module or book)
- **120 min**: Project development
- **60 min**: Documentation, testing, GitHub
- **30 min**: Interview prep or networking

---

## FINAL NOTES FOR SUCCESS

### Your Unique Advantages
1. ✅ Diploma in CSE - Fast C programming progress
2. ✅ B.Tech in ECE - Easy to understand hardware concepts
3. ✅ Laptop-only - Can start TODAY
4. ✅ 90 days - Concentrated learning beats slow approach
5. ✅ Portfolio-focused - Projects matter more than certifications

### What Will Make You Stand Out
1. **Quality over Quantity** - 5 excellent projects > 20 mediocre ones
2. **Clean Code** - MISRA C, documentation, unit tests
3. **End-to-End Thinking** - From sensor to cloud to user
4. **Problem-Solving** - Show how you overcame challenges
5. **Communication** - Write blogs, document thoroughly

### Realistic First Job Expectations
- **Salary**: ₹3-5 LPA starting (grows to ₹8-12 by year 2)
- **Role**: Embedded Software Engineer / IoT Developer
- **Company Size**: Startup (more learning) or MNC (more stability)
- **Work Location**: Bangalore/Pune/Hyderabad (tech hubs) or remote
- **Learning Opportunity**: Get hands-on with real hardware, production systems

### Beyond 90 Days
- Continue building projects
- Contribute to open-source embedded projects
- Read embedded systems books deeply
- Pursue certifications (NIELET, NSDC)
- Move to ₹8-10 LPA within 1-2 years
- Specialize in IoT/Automotive/Medical embedded systems

---

## YOU GOT THIS! 🚀

**Remember**: 
- The best embedded engineer is one who learns by doing
- Projects beat certifications every time
- Your enthusiasm matters more than your hardware budget
- 90 days from now, you'll be in your first embedded systems role

**Start today. Push consistently. Get hired.**

Amit, this roadmap is YOUR path to success. It's designed specifically for someone with your background, your laptop, and your goal to land a job in 60-90 days.

**Go build something amazing!**

---

**Questions?**
- Join r/embedded on Reddit
- Follow embedded systems channels on YouTube
- Connect with other learners on Discord
- Review this roadmap regularly and adjust as needed
