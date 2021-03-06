#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>

class Settings : public QSettings
{
    Q_OBJECT
public:
    static Settings* instance();

    explicit Settings(QObject *parent = 0);
    virtual ~Settings();

    void setPlayerName(const QString& name);
    const QString playerName() const;

    void setPlayerColor(const QColor& color);
    const QColor playerColor() const;

    void setAiName(const QString& name);
    const QString aiName() const;

    void setAiNameList(const QString& name);
    const QString aiNameList() const;

    void setAiColor(const QColor& color);
    const QColor aiColor() const;

    void setAiLevel(int aiLevel);
    int aiLevel() const;

    void setPlayerLevel(int playerLevel);
    int playerLevel() const;

    void setCameraWidth(int cameraWidth);
    int cameraWidth() const;

    void setCameraHeight(int cameraHeight);
    int cameraHeight() const;

    void setQuickSave(const QString& save);
    const QString quickSave() const;

signals:
    void settingsChanged();

private:
    static Settings* s_instance;
};

#endif // SETTINGS_H
