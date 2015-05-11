#pragma once
#include <string>
#include <vector>
#include <array>

#include <BW/Offsets.h>

namespace BWAPI
{

  class AutoMenuManager
  {
  public:
    AutoMenuManager();

    void reloadConfig();
    void chooseNewRandomMap();
    void onMenuFrame();

    const char* interceptFindFirstFile(const char *lpFileName);

    std::string autoMenuSaveReplay;
  private:
    void pressDialogKey(BW::dialog *pDlg);

    std::string autoMenuMode;
    std::string autoMenuLanMode;
    std::string autoMenuRestartGame;
    std::string autoMenuGameType;
    std::string autoMenuGameName;
    unsigned lastAutoMapEntry = 0;
    std::string lastMapGen;
    std::vector<std::string> autoMapPool;
    std::string autoMenuMapPath;
    std::string autoMapIteration;

    std::string autoMenuRace;
    std::array<std::string, PLAYABLE_PLAYER_COUNT> autoMenuEnemyRace;
    unsigned autoMenuEnemyCount = 0;
    unsigned autoMenuMinPlayerCount = 0;
    unsigned autoMenuMaxPlayerCount = 0;
    unsigned autoMenuWaitPlayerTime = 0;

    unsigned autoMapTryCount = 0;

    bool actStartedGame = false;
    bool actRaceSel = false;
    bool isHost = false;

#ifdef _DEBUG
    std::string autoMenuPause;
#endif
  };




}
