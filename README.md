Route Assistance by IoT based AQI Monitoring System 🗺️

This project focuses on the design and implementation of an IoT-based air quality monitoring system to address the growing concern of air pollution. The system utilizes sensor nodes to collect real-time data on temperature, humidity, pressure, and CO2 levels. The data is transmitted via a LoRaWAN network to a central server for processing and analysis. A web-based interface provides users with access to real-time air quality data, historical trends, and even route assistance based on air quality indices. Through evaluations, the system demonstrates accuracy, reliability, and scalability. By promoting public health, environmental sustainability, and contributing to various sustainable development goals, this project showcases the potential of IoT technology in improving air quality monitoring.

- Problem Statement ❓
Air pollution is a serious threat to public health, particularly in urban areas where large populations are exposed to high levels of pollutants from transportation, industry, and other sources. Exposure to air pollutants has been linked to a range of health problems, including respiratory diseases, cardiovascular diseases, and cancer. The World Health Organization has estimated that outdoor air pollution causes 4.2 million premature deaths each year.
The project is motivated by the need for more effective air quality monitoring and management systems that can help protect public health and promote sustainable development. The development of a route assistance system based on real-time air quality monitoring represents a significant step forward in the field of air quality monitoring and management, and has the potential to contribute to a more sustainable and healthy future for all.

- Proposed Solution 💡
This project aims to develop a route assistance system that utilizes real-time air quality monitoring. By leveraging sensor data, the system provides accurate and timely information about air quality conditions in the user's immediate environment. Sensor data is transmitted to a central controller via LoraWAN/Wifi and processed in the cloud. The system generates alternative routes based on air quality conditions, which are continuously updated. Users can access this information through a mobile application, receiving real-time updates on air quality and recommendations for routes that minimize pollutant exposure. The system also sends alerts when air quality reaches dangerous levels, promoting public health and sustainable transportation practices.

- Overview of Implementation ⚒️
The implementation process involved the design and construction of both the hardware and software components of the air quality monitoring system. To gather data on key pollutants such as carbon monoxide, temperature, pressure, and humidity, four sensors were strategically placed at three different locations within the city. These sensors were connected to a LoRaWAN network, enabling them to transmit real-time data to a central database.

- Hardware Implementation ⚙️
The hardware implementation of our real-time air quality monitoring system involves setting up sensors. After testing each of the components individually we dived into combining all of the sensors and ensured their working through a single controller. The sensor used are give above in the things section.
Afterwards the PCB for our node was developed given below:

Then a 3D model was made which allowed us to create an enclosure that protects the PCB and sensors from environmental factors. The enclosure is designed to be compact and durable, ensuring that the node can withstand harsh outdoor conditions.

In the case of our project, we will be replicating our air quality monitoring nodes three times, with each node placed in a different location.


- Software Implementation 💻
  -- Use of Grandeur API
The Grandeur platform provides a powerful solution for hardware developers to connect devices to the cloud and securely store data without needing to provision servers or write custom APIs. In this project, we utilized the Grandeur API to collect data from our air quality monitoring nodes and store it in the cloud for further analysis. This allowed us to easily access and visualize data from multiple nodes, as well as automate the process of data collection and storage. Three nodes have been established to collect the concentrations of pollutants from different locations at the same time. The Data collected from these 3 nodes is mapped onto the Grandeur API.

  -- Front-End Development
The first step in application development was to create a wireframe design of the dashboard. Once the design was finalized, we started working on the implementation of the dashboard. We used various React JS libraries such as Material UI, Chart JS, and Mapbox to create an interactive dashboard that could display data from multiple nodes simultaneously. The dashboard provided real-time data analysis, which helped in monitoring air quality levels in different areas

  -- Back-End Development
We integrated the Google Maps API into the Web application to provide real-time route assistance based on the air quality levels in different areas. The application used the data collected from the nodes and stored on the Grandeur platform to calculate the AQI for different locations and suggest the least polluted route to the user.
We integrated the Google Maps API into the Web application to provide real-time route assistance based on the air quality levels in different areas. The application used the data collected from the nodes and stored on the Grandeur platform to calculate the AQI for different locations and suggest the least polluted route to the user.

- Conclusion 🎯
In conclusion, our project successfully utilized IoT devices and cloud platforms to monitor and analyze air quality data. We developed a system that collects data from multiple sensor nodes, transmits it to the cloud platform Grandeur via LoRaWAN communication, and presents the data on a web application using React JS. The web application not only visualizes real-time air quality data but also provides users with route assistance based on the current air quality index (AQI) integrated with the Google Maps API.
Our project highlights the significance of technology in addressing urban air pollution. By offering real-time air quality information, our system can support urban planners in making informed decisions regarding pollution control measures. Additionally, by providing route assistance based on AQI, the system promotes informed commuting choices, leading to reduced exposure to harmful air pollutants.
