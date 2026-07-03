import socket

HOST = 'localhost'
PORT = 5501

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()

    conn, addr = s.accept()
    with conn:
        print(f"Connexion etablie avec {addr}")
        while True:
            data = conn.recv(1024)
            if not data:
                break
            print(f"Reception: {data.decode()}")
            conn.sendall(b"Message recu: " + data)
    conn.close()
s.close()