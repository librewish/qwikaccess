#ifndef QWIKACCESS_H
#define QWIKACCESS_H

#include <QMainWindow>
#include <cprime/cplugininterface.h>

QT_BEGIN_NAMESPACE
namespace Ui { class qwikaccess; }
QT_END_NAMESPACE

class qwikaccess : public QMainWindow
{
    Q_OBJECT

public:
    qwikaccess(QWidget *parent = nullptr);
    ~qwikaccess();

private slots:

    void on_toolButton_wifi_clicked(bool checked);

    void on_toolButton_quickhotspot_clicked(bool checked);

    void on_toolButton_bluetooth_clicked(bool checked);

    void on_toolButton_gps_clicked(bool checked);

private:
    Ui::qwikaccess *ui;
};

#endif // QWIKACCESS_H
class qwikaccessPlugin : public plugininterface {

    Q_OBJECT

    Q_PLUGIN_METADATA(IID COREACTION_PLUGININTERFACE/*"com.coreaction.plugininterface"*/)
    Q_INTERFACES(plugininterface)

public:
    /* Name of the plugin */
    QString name();

    /* The plugin version */
    QString version();

    /* The Widget */
    QWidget *widget(QWidget *);
};
