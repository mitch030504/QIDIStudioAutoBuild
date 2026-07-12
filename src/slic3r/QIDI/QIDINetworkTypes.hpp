#ifndef QIDI_NETWORK_TYPES_HPP
#define QIDI_NETWORK_TYPES_HPP

#include <vector>
#include <string>

namespace Slic3r {

enum Environment {
    PRODUCTIONENV,
    FOREIGNENV
};

enum TargetType {
    PRINTERTYPE,
    NONETYPE,
    DEVICE
};

struct HttpData {
    Environment env;
    TargetType target;
    std::string taskPath;
    std::string body;
};

namespace GUI {

struct Box_info {
    int box_count = 0;
    std::vector<int> slot_state;
    std::vector<int> slot_id;
    std::vector<std::string> filament_id;
    std::vector<std::string> filament_colors;
    std::vector<std::string> filament_type;
    int auto_reload_detect = 0;

    std::vector<int> filament_vendor;
    std::vector<int> filament_index;
};

struct NetDevice {
    std::string id;
    std::string mac_address;
    std::string local_ip;
    std::string device_name;
    std::string machine_type;
    std::string link_url;
    std::string url;
    bool isSpecialMachine = false;
};

struct QIDIVersion {
    std::string url;
    std::string version_str;
    std::string description;
    bool force_upgrade = false;
};

} // namespace GUI

// Make types accessible directly under Slic3r namespace
using GUI::Box_info;
using GUI::NetDevice;
using GUI::QIDIVersion;

} // namespace Slic3r

#endif // QIDI_NETWORK_TYPES_HPP
