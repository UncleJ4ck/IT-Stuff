#pragma once

#include <deque>
#include <array>
#include <thread>
#include <cstring>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
#include <chrono>
#include <ctime>
#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <mutex>
#include <algorithm>
#include <iomanip>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>
#include <boost/bind/bind.hpp>

#define BOOST_BIND_GLOBAL_PLACEHOLDERS

enum : unsigned
{
	MAX_IP_PACK_SIZE = 512,
	MAX_NICKNAME = 16,
	PADDING = 24
};

