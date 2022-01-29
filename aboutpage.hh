#ifndef ABOUTPAGE_HH
#define ABOUTPAGE_HH

#include <QDialog>

namespace Ui {
class AboutPage;
}

class AboutPage : public QDialog
{
    Q_OBJECT

public:
    explicit AboutPage(QWidget *parent = nullptr);
    ~AboutPage();

private:
    Ui::AboutPage *ui;
};

#endif // ABOUTPAGE_HH
