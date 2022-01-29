#ifndef SETTINGPAHE_HH
#define SETTINGPAHE_HH

#include <QMainWindow>

namespace Ui
{
class SettingPahe;
}

class SettingPahe : public QMainWindow
{
    Q_OBJECT

  public:
    explicit SettingPahe(QWidget *parent = nullptr);
    ~SettingPahe();

  private:
    Ui::SettingPahe *ui;
};

#endif // SETTINGPAHE_HH
