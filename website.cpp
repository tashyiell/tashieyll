projest structure

:{'main.cpp'}


neccessary libraries 

:{#include <iostream>
:{#include <boost/asio.hpp>
:{#include <boost/algorithm/string.hpp>


define request handler 

{std::string handleRequest(const std::string& request) {
    // Process the request and generate the response
    std::string response = "HTTP/1.1 200 OK\r\n\r\nHello, World!";
    return response;
}}

set up a TCP server 

{void startServer() {
    boost::asio::io_context ioContext;
    boost::asio::ip::tcp::acceptor acceptor(ioContext, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 8080));
while (true) {
    boost::asio::ip::tcp::socket socket(ioContext);
    acceptor.accept(socket);
    std::array<char, 4096> buffer;
    boost::system::error_code error;
    size_t bytesRead = socket.read_some(boost::asio::buffer(buffer), error);
    std::string request(buffer.data(), bytesRead);
    std::string response = handleRequest(request);
    boost::asio::write(socket, boost::asio::buffer(response));
 }
}
}#include <iostream>
#include <cppnetlib/http/server.hpp>

void handle_request(const cppnetlib::http::request& req, cppnetlib::http::response& res) {
    // Your server-side magic here!
}

int main() {
    cppnetlib::http::server server;
    server.set_http_handler(handle_request);
    server.listen("localhost", "8080");
    server.run();
    return 0;
}

run the sever

int main(){std::cout<< "starting the web service...\n"; 
     return 0;}

 frontened part desing 

<!DOCTYPE html>
<html>
<head>
    <title>C++ Web Magic</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
    <h1>Welcome to our C++ Web Wonderland! 🌟</h1>
    <p>This website is powered by C++!</p>
    <button onclick="sayHello()">Click me!</button>
    <script src="script.js"></script>
</body>
</html

socket

#include <iostream>
#include <boost/asio.hpp>

int main() {
    boost::asio::io_context io_context;
    boost::asio::ip::tcp::socket socket(io_context);
    boost::system::error_code ec;

    // Connect to a server
    socket.connect(boost::asio::ip::tcp::endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 12345), ec);
    if (ec) {
        std::cerr << "Failed to connect: " << ec.message() << std::endl;
        return 1;
    }

    std::cout << "Connected to server" << std::endl;

    return 0;
}



     bridging the gap 

function sayHello() {
    fetch('/api/hello')
        .then(response => response.text())
        .then(data => {
            alert(`Server says: ${data}`);
        });
}
