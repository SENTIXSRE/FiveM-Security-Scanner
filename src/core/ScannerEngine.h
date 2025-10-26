#ifndef SCANNERENGINE_H
#define SCANNERENGINE_H

#include <QString>
#include <QObject>

class ScannerEngine : public QObject {
    Q_OBJECT
public:
    explicit ScannerEngine(QObject *parent = nullptr);
    ~ScannerEngine();

    void scanDirectory(const QString &path);
};

#endif // SCANNERENGINE_H
