#include <iostream>
#include <string>

int main() {
  // Set the response content type to HTML
  std::cout << "Content-Type: text/html\n\n";

  // Write the HTML content
  std::cout << "<!DOCTYPE html>\n";
  std::cout << "<html>\n";
  std::cout << "<head>\n";
  std::cout << "<title>Web Page Design</title>\n";
  std::cout << "</head>\n";
  std::cout << "<body>\n";
  std::cout << "<h1>Welcome to our web page!</h1>\n";
  std::cout << "<p>This is a simple web page designed using C++ and CGI.</p>\n";
  std::cout << "</body>\n";
  std::cout << "</html>\n";

  return 0;
}
