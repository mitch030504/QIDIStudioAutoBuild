#include "UserPresetSyncManager.hpp"

namespace Slic3r {

UserPresetSyncManager& UserPresetSyncManager::instance() {
    static UserPresetSyncManager instance;
    return instance;
}

void UserPresetSyncManager::start(bool with_progress_dlg) {
}

void UserPresetSyncManager::stop() {
}

} // namespace Slic3r
