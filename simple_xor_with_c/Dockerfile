# useing python image
FROM python:latest
#install dependencies 
RUN apt update && apt install -y netcat-traditional && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /app

# Copy python code
COPY xor.py /app/
# Expose port 9999
EXPOSE 9999

# Run the C program as the entrypoint
CMD ["sh", "-c", "while true; do nc -l -p 9999 -c 'python3 /app/xor.py'; done"]

