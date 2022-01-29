#ifndef NEWTASKPAGE_HH
#define NEWTASKPAGE_HH

#include <QDialog>

namespace Ui {
class NewTaskPage;
}

class NewTaskPage : public QDialog
{
    Q_OBJECT

public:
    explicit NewTaskPage(QWidget *parent = nullptr);
    ~NewTaskPage();

private:
    Ui::NewTaskPage *ui;
};

#endif // NEWTASKPAGE_HH
