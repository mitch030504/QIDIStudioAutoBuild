#ifndef QIDI_NETWORK_HPP
#define QIDI_NETWORK_HPP

#include <string>
#include <functional>
#include <wx/string.h>
#include "QIDINetworkTypes.hpp"
#include "slic3r/Utils/Http.hpp"

namespace Slic3r {

class QIDINetwork {
public:
    QIDINetwork() = default;
    ~QIDINetwork() = default;

    wxString get_maker_host();
    wxString get_qidi_host();
    std::string user_info(wxString& msg);
    bool get_device_list(wxString& msg);
    bool unbind(wxString& msg, const std::string& device_id);

    bool get_box_state(wxString& msg, const std::string& printer_url, const std::string& api_key);
    GUI::Box_info get_box_info(wxString& msg, const std::string& printer_url, const std::string& api_key);
    void get_color_filament_str(wxString& msg, GUI::Box_info& filament_info, const std::string& printer_url, const std::string& api_key);

    void check_new_version(bool show_tips, int by_user);
};

class MakerHttpHandle {
public:
    static MakerHttpHandle& getInstance();

    std::string get_maker_user_name();
    std::string refresh_token();
    std::string httpPostTask(const HttpData& data, bool& success);
    void closeSSEClient();
    void setSSEHandle(std::function<void(const std::string&, const std::string&)> cb);
    bool get_maker_device_list();
    std::string getUploadUrl(const HttpData& data, bool& success);
    std::string httpUploadTask(const HttpData& data, bool& success, std::function<void(Http::Progress, bool&)> progress_callback);
    bool isSSEConnected();

private:
    MakerHttpHandle() = default;
    ~MakerHttpHandle() = default;
    MakerHttpHandle(const MakerHttpHandle&) = delete;
    MakerHttpHandle& operator=(const MakerHttpHandle&) = delete;
};

} // namespace Slic3r

#endif // QIDI_NETWORK_HPP
