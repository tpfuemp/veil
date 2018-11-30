#include <qt/veil/tutorialcreatewalletwidget.h>
#include <qt/veil/forms/ui_tutorialcreatewalletwidget.h>

TutorialCreateWalletWidget::TutorialCreateWalletWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TutorialCreateWalletWidget)
{
    ui->setupUi(this);

    ui->groupBox->setFocusPolicy(Qt::NoFocus);
    ui->btnCreate->setFocusPolicy(Qt::NoFocus);
    ui->btnImport->setFocusPolicy(Qt::NoFocus);
    ui->btnRestore->setFocusPolicy(Qt::NoFocus);
}

TutorialCreateWalletWidget::~TutorialCreateWalletWidget()
{
    delete ui;
}
