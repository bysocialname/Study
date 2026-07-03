import socket

HOST = 'localhost'
PORT = 5501

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    message = "Bienvenue Mr NGOM !"
    s.sendall(message.encode())
    data = s.recv(1024)

print(f"Recu du serveur: {data.decode()}")

s.close()