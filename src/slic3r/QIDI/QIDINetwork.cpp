#include "QIDINetwork.hpp"

namespace Slic3r {

wxString QIDINetwork::get_maker_host() {
    return wxString();
}

wxString QIDINetwork::get_qidi_host() {
    return wxString();
}

std::string QIDINetwork::user_info(wxString& msg) {
    return std::string();
}

bool QIDINetwork::get_device_list(wxString& msg) {
    return false;
}

bool QIDINetwork::unbind(wxString& msg, const std::string& device_id) {
    return false;
}

bool QIDINetwork::get_box_state(wxString& msg, const std::string& printer_url, const std::string& api_key) {
    return false;
}

GUI::Box_info QIDINetwork::get_box_info(wxString& msg, const std::string& printer_url, const std::string& api_key) {
    return GUI::Box_info();
}

void QIDINetwork::get_color_filament_str(wxString& msg, GUI::Box_info& filament_info, const std::string& printer_url, const std::string& api_key) {
}

void QIDINetwork::check_new_version(bool show_tips, int by_user) {
}

// MakerHttpHandle Implementation
MakerHttpHandle& MakerHttpHandle::getInstance() {
    static MakerHttpHandle instance;
    return instance;
}

std::string MakerHttpHandle::get_maker_user_name() {
    return std::string();
}

std::string MakerHttpHandle::refresh_token() {
    return std::string();
}

std::string MakerHttpHandle::httpPostTask(const HttpData& data, bool& success) {
    success = false;
    return std::string();
}

void MakerHttpHandle::closeSSEClient() {
}

void MakerHttpHandle::setSSEHandle(std::function<void(const std::string&, const std::string&)> cb) {
}

bool MakerHttpHandle::get_maker_device_list() {
    return false;
}

std::string MakerHttpHandle::getUploadUrl(const HttpData& data, bool& success) {
    success = false;
    return std::string();
}

std::string MakerHttpHandle::httpUploadTask(const HttpData& data, bool& success, std::function<void(Http::Progress, bool&)> progress_callback) {
    success = false;
    return std::string();
}

bool MakerHttpHandle::isSSEConnected() {
    return false;
}

} // namespace Slic3r
