This folder is empty.

Relax, its just a demonstration folder.

If everything goes well, you can read this from
your new Docker Container.

This means anything else you placed in this folder
was also transferred and is all ready for your
application to use.

Oh, and here's a presentation!
https://www.canva.com/design/DAGTuc_C-88/KT6cxYbSjkNPKuZ51jjkkg/view

# Introduction to Docker

 Welcome to our introduction to Docker. Today, we'll explore 
	what Docker is, 
	why it's useful, and 
	how to get started with it.



## Slide 1: What is Docker?
Docker is a platform
     that allows developers to
           package applications with all their    
                  dependencies
           run them in isolated environments    
                  called containers.


## Slide 2: What Does Docker Do?
- Creates lightweight,
          portable
          self-sufficient containers
- Ensures consistency across different environments
          Once deployed, everyone
                    On the same page


## Slide 3: Problems Docker Solves
Docker addresses common
        development and deployment
         Issues by providing a
                - consistent environment
                - simplifying the deployment and    
                - improving resource utilization.


## Slide 4: Virtual Machines vs Docker
Unlike virtual machines which
      -  include a full OS,
Docker containers
      - share the host OS kernel
        making them more
             -- lightweight
             -- efficient.


## Slide 6: Creating Docker Images with Dockerfiles
     - Dockerfile: Text file with instructions
               -- Defines steps to create an image
               -- Automates image creation
A Dockerfile is a recipe-card
     - containing instructions
     - for building a Docker image.
 	It automates the process of 
	creating consistent images.

An Image is a machine-code blueprint
     - for spawning identical containers

A Container is an instance of the image
     - can be started, stopped,
       Moved, and deleted
     - multiple instances can be run    
        simultaneously

QUESTIONS?


## Slide 8: Key Docker Commands
	These commands are essential for working with Docker.

	We'll demonstrate their use in our live coding session.

REGISTRY like GitHub for docker images

     - `docker build`: Creates an image from a
                                  Dockerfile
     - `docker run`: Starts a container from an
                               image


## Slide 9: Dockerfile Syntax and Concepts

	These are some of the key instructions
	used in Dockerfiles.

	Each serves a specific purpose in
		defining how the image should be built
		and what it should contain.

- `FROM`: Base image

- `RUN`: Execute commands

- `COPY`: Copy files

- `WORKDIR`: Set/change working directory

- `EXPOSE`: Declare port

- `CMD`: Default command to run on start


### LIVE CODE ###

	Check docker installation
     		- sudo docker version

	List Available Images
     		- sudo docker images

	List Available containers
    		- sudo docker ps

	Open API.py

PREDICT:
     - will uninstalled dependencies like flask be
        a problem?

Have we been over flask?

	An API (Application Programming Interface)
		is a set rules and protocols that
      		- allows applications to communicate
      		- enabling them to
                	-- request and
                	-- exchange data or functionality

	Flask
     		a lightweight Python web framework
               	- provides tools and libraries
                       -- for building web applications
                          and APIs with minimal code,
		making it easy to handle HTTP requests
		and responses.

	CORS (Cross-Origin Resource Sharing)
    		a security mechanism
              	- controls web domain access 
              	- preventing unauthorized websites
                    from making requests to your API.


FILL OUT DOCKERFILE

# Use specify Ubuntu version image as the base
FROM ubuntu:22.04

# Update APT
RUN apt-get update
RUN apt-get upgrade -y

# Install python3 and pip, then clean up in a single RUN command
RUN apt-get install -y python3 python3-pip && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

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



## Build the Image
	sudo docker build -t my-flask-app .
     		-- notice the layers executing

	sudo docker run -p 5252:5252 my-flask-app

OPEN A TERMINAL IN YOUR CONTAINER
	docker exec -it container_name /bin/bash

	http://localhost:5252/api/hello

















