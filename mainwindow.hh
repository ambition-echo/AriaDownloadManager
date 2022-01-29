#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include "aboutpage.hh"
#include "newtaskpage.hh"
#include "settingpage.hh"
#include <QAction>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

  public:
    SettingPage *settingPage;
    NewTaskPage *newTaskPage;
    AboutPage *aboutPage;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void init();

  private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_HH
