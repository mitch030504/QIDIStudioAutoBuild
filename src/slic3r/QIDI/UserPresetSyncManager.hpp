#ifndef USER_PRESET_SYNC_MANAGER_HPP
#define USER_PRESET_SYNC_MANAGER_HPP

namespace Slic3r {

class UserPresetSyncManager {
public:
    static UserPresetSyncManager& instance();

    void start(bool with_progress_dlg = false);
    void stop();

private:
    UserPresetSyncManager() = default;
    ~UserPresetSyncManager() = default;
    UserPresetSyncManager(const UserPresetSyncManager&) = delete;
    UserPresetSyncManager& operator=(const UserPresetSyncManager&) = delete;
};

} // namespace Slic3r

#endif // USER_PRESET_SYNC_MANAGER_HPP
