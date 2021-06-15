#include "pch.h"
#include <thread>
#include <memory>
std::shared_ptr<httplib::Server> server;
void entry() {
	std::thread([] {
		server = std::make_shared<httplib::Server>();
		server->Get("/hi", [](const httplib::Request& req, httplib::Response& res) {
			});
	}).detach();
}