# Use specify Ubuntu version image as the base
FROM ubuntu:22.04
# Update APT
RUN apt-get update
# Upgrade all existing packages
RUN apt-get upgrade -y
# Install python3 and pip, then clean up in a single RUN command
RUN apt-get install -y python3 python3-pip && \
apt-get clean && \
rm -rf /var/lib/apt/lists/* /tmp/* /var/temp/*


# Set the working directory inside the container
WORKDIR /app

# Copy the api file into the container
COPY api.py .
# Copy the project_files directory into the container
COPY project_files ./project_files
# Use pip to install flask and flask-cors
RUN pip3 install flask flask-cors

# Expose port for flask
EXPOSE 5252
# Run flask on exposed port
CMD python3 api.py
