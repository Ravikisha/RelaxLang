# Use a base image with OpenJDK
FROM openjdk:17.0.1-jdk-slim

# Set the working directory
WORKDIR /app

# Copy the JAR file to the container
COPY ./lox.jar .

# Copy the readme file
COPY ./README.md .

# Specify the command to run the JAR file
ENTRYPOINT ["java", "-jar", "lox.jar"]
