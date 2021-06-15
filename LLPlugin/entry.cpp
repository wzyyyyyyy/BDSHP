#include "pch.h"
#include <thread>
void entry() {
	std::thread([] {
		httplib::Server server;
		server.Get("/hi", [](const httplib::Request& req, httplib::Response& res) {
			res.status = 200;
			res.set_content("", "application / json");
			});
	}).detach();
}