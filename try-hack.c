
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


void egg(int fd) {
  char *message = "\x20\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f"
    "\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x20\x0a\x7c\x3a\x3a\x3a"
    "\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3b\x3b\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a"
    "\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x3a\x3a"
    "\x3a\x3a\x3a\x3a\x27\x7e\x7c\x7c\x7e\x7e\x7e\x60\x60\x3a\x3a\x3a\x3a\x3a\x3a\x3a"
    "\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x27\x20\x20"
    "\x20\x2e\x27\x3a\x20\x20\x20\x20\x20\x6f\x60\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a"
    "\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x27\x20\x6f\x6f\x20\x7c\x20\x7c"
    "\x6f\x20\x20\x6f\x20\x20\x20\x20\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a"
    "\x7c\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x20\x38\x20\x20\x2e\x27\x2e\x27\x20\x20\x20\x20"
    "\x38\x20\x6f\x20\x20\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a"
    "\x3a\x3a\x3a\x3a\x20\x38\x20\x20\x7c\x20\x7c\x20\x20\x20\x20\x20\x38\x20\x20\x20"
    "\x20\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x3a\x3a"
    "\x20\x5f\x2e\x5f\x7c\x20\x7c\x5f\x2c\x2e\x2e\x2e\x38\x20\x20\x20\x20\x3a\x3a\x3a"
    "\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x3a\x27\x7e\x2d\x2d\x2e"
    "\x20\x20\x20\x2e\x2d\x2d\x2e\x20\x60\x2e\x20\x20\x20\x60\x3a\x3a\x3a\x3a\x3a\x3a"
    "\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x27\x20\x20\x20\x20\x20\x3d\x38\x20\x20"
    "\x20\x20\x20\x7e\x20\x20\x5c\x20\x6f\x20\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a"
    "\x7c\x3a\x3a\x3a\x3a\x27\x20\x20\x20\x20\x20\x20\x20\x38\x2e\x5f\x20\x38\x38\x2e"
    "\x20\x20\x20\x5c\x20\x6f\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a"
    "\x27\x20\x20\x20\x5f\x5f\x2e\x20\x2c\x2e\x6f\x6f\x6f\x7e\x7e\x2e\x20\x20\x20\x20"
    "\x5c\x20\x6f\x60\x3a\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x20\x20\x20\x2e"
    "\x20\x2d\x2e\x20\x38\x38\x60\x37\x38\x6f\x2f\x3a\x20\x20\x20\x20\x20\x5c\x20\x20"
    "\x60\x3a\x3a\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x27\x20\x20\x20\x20\x20\x2f\x2e\x20"
    "\x6f\x20\x6f\x20\x5c\x20\x3a\x3a\x20\x20\x20\x20\x20\x20\x5c\x38\x38\x60\x3a\x3a"
    "\x3a\x3a\x7c\x0a\x7c\x3a\x3b\x20\x20\x20\x20\x20\x6f\x7c\x7c\x20\x38\x20\x38\x20"
    "\x7c\x64\x2e\x20\x20\x20\x20\x20\x20\x20\x20\x60\x38\x20\x60\x3a\x3a\x3a\x7c\x0a"
    "\x7c\x3a\x2e\x20\x20\x20\x20\x20\x20\x20\x2d\x20\x5e\x20\x5e\x20\x2d\x27\x20\x20"
    "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x60\x2d\x60\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x2e"
    "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
    "\x20\x20\x20\x20\x20\x20\x2e\x3a\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x2e\x2e"
    "\x2e\x2e\x2e\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x3a\x3a\x27\x20\x20\x20"
    "\x20\x20\x60\x60\x3a\x3a\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x3a\x2d\x27\x60"
    "\x2d\x20\x20\x20\x20\x20\x20\x20\x20\x38\x38\x20\x20\x20\x20\x20\x20\x20\x20\x20"
    "\x20\x60\x7c\x0a\x7c\x3a\x3a\x3a\x3a\x3a\x2d\x27\x2e\x20\x20\x20\x20\x20\x20\x20"
    "\x20\x20\x20\x2d\x20\x20\x20\x20\x20\x20\x20\x3a\x3a\x20\x20\x20\x20\x20\x7c\x0a"
    "\x7c\x3a\x2d\x7e\x2e\x20\x2e\x20\x2e\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
    "\x20\x20\x20\x20\x20\x20\x20\x20\x3a\x20\x20\x20\x20\x20\x7c\x0a\x7c\x20\x2e\x2e"
    "\x20\x2e\x20\x20\x20\x2e\x2e\x3a\x20\x20\x20\x6f\x3a\x38\x20\x20\x20\x20\x20\x20"
    "\x38\x38\x6f\x20\x20\x20\x20\x20\x20\x20\x7c\x0a\x7c\x2e\x20\x2e\x20\x20\x20\x20"
    "\x20\x3a\x3a\x3a\x20\x20\x20\x38\x3a\x50\x20\x20\x20\x20\x20\x64\x38\x38\x38\x2e"
    "\x20\x2e\x20\x2e\x20\x20\x7c\x0a\x7c\x2e\x20\x20\x20\x2e\x20\x20\x20\x3a\x38\x38"
    "\x20\x20\x20\x38\x38\x20\x20\x20\x20\x20\x20\x38\x38\x38\x27\x20\x20\x2e\x20\x2e"
    "\x20\x20\x7c\x0a\x7c\x20\x20\x20\x6f\x38\x20\x20\x64\x38\x38\x50\x20\x2e\x20\x38"
    "\x38\x20\x20\x20\x27\x20\x64\x38\x38\x50\x20\x20\x20\x2e\x2e\x20\x20\x20\x7c\x0a"
    "\x7c\x20\x20\x38\x38\x50\x20\x20\x38\x38\x38\x20\x20\x20\x64\x38\x50\x20\x20\x20"
    "\x27\x20\x38\x38\x38\x20\x20\x20\x20\x20\x20\x20\x20\x20\x7c\x0a\x7c\x20\x20\x20"
    "\x38\x20\x20\x64\x38\x38\x50\x2e\x27\x64\x3a\x38\x20\x20\x2e\x2d\x20\x64\x50\x7e"
    "\x20\x6f\x38\x20\x20\x20\x20\x20\x20\x20\x7c\x0a\x7c\x20\x20\x20\x20\x20\x20\x38"
    "\x38\x38\x20\x20\x20\x38\x38\x38\x20\x20\x20\x20\x64\x7e\x20\x6f\x38\x38\x38\x20"
    "\x20\x20\x20\x4c\x53\x20\x7c\x0a\x7c\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f"
    "\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f\x5f"
    "\x5f\x5f\x7c";
  send(fd, message, strlen(message), 0);
}


int checkAuth(char *secret) {
  char secret_buffer[42];
  int auth_flag = 0;

  strcpy(secret_buffer, secret);

  if (strcmp(secret_buffer, "You don't know the power of the dark side") == 0)
    auth_flag = 1;

  return auth_flag;
}


void handleConnection(int sock) {
  struct sockaddr_in client;
  socklen_t len;
  char *message;
  int fd, recv_size;
  char secret_buffer[1024];

  len = sizeof(client);
  fd = accept(sock, (struct sockaddr*) &client, &len);
  if (fd < 0) {
    printf("Error acepting\n");
    exit(-1);
  }

  printf("Got connection!\n");
  message = "Welcome! Please hack meee:\n";
  send(fd, message, strlen(message), 0);
  recv_size = recv(fd, secret_buffer, 1024, 0);

  if (recv_size <= 0) {
    printf("Connection close!\n");
    close(fd);
    return;
  }
  
  secret_buffer[recv_size-1] = '\0';
  
  while (!checkAuth(secret_buffer)) {
    message = "Cuaakssssss:\n";
    send(fd, message, strlen(message), 0);
    recv_size = recv(fd, secret_buffer, 1024, 0);

    if (recv_size <= 0) {
      printf("Connection close!\n");
      close(fd);
      return;
    }

    secret_buffer[recv_size-1] = '\0';
  }

  egg(fd);

  printf("Connection close!\n");
  close(fd);
}


void start(int port) {
  struct sockaddr_in server;
  int sock;
  
  sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (sock < 0) {
    printf("Error opening socket\n");
    exit(-1);
  }

  server.sin_port = htons(port);
  server.sin_addr.s_addr = INADDR_ANY;
  server.sin_family = AF_INET;

  if (bind(sock, (struct sockaddr*) &server, sizeof(server)) < 0) {
    printf("Error binding socket\n");
    exit(-1);
  }

  if (listen(sock, 5) == -1) {
    printf("Error listening\n");
    exit(-1);
  }

  printf("Inject shellcode to me please...\n");
  
  while (1) {
    fflush(stdout);
    handleConnection(sock);
  }
}


int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s PORT \n", argv[0]);
    return 0;
  }

  start(atoi(argv[1]));

  return 0;
}