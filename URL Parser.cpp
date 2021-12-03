// Code Created by Bouraoui Elfeghih
#include <iostream>
#include <string>

int main() {
	std::string url, scheme, authority, path;
	int position, position1, position2, alpha;
	position = 0;
	std::cout << "Please Enter a URL: ";
	std::cin >> url;
	position2 = url.find(":");

	for (int x = 0; x < url.size(); x++) {
		if (url[x] == '/' && url[x + 1] == '/') {
			position = x;
			x++;
		}
		else if (url[x] == '/' && url[x + 1] != '/') {
			position1 = x;
			break;
		}
	}
	scheme = url.substr(0, position2 + 1);
	alpha = ((url.size() - position2) - (url.size() - position1)) - 1;
	authority = url.substr(position, alpha);

	path = url.substr(position1);

	std::cout << std::endl;
	std::cout << "Scheme: " << scheme << std::endl;
	std::cout << "Authority: " << authority << std::endl;
	std::cout << "Path: " << path << std::endl;
	return 0;
}
