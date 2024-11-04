# Use a base image with OpenJDK
FROM openjdk:11-jre-slim

# Set the working directory
WORKDIR /app

# Copy the JAR file to the container
COPY ./lox.jar .

# Copy the readme file
COPY ./README.md .

# Specify the command to run the JAR file
ENTRYPOINT ["java", "-jar", "jlox.jar"]
