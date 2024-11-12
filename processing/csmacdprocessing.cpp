#include "csmacdprocessing.h"

bool isChannelBusy() {
    return QRandomGenerator::global()->bounded(100) < 50;
}

bool isCollisionDetected() {
    return QRandomGenerator::global()->bounded(100) < 60;
}

int calculateBackoffDelay(int attempt) {
    int maxDelay = (1 << qMin(attempt, 10));
    return QRandomGenerator::global()->bounded(maxDelay);
}

void distortMultipleBytes(QByteArray& data, int bytesToDistort) {
    if (data.isEmpty()) {
        return;
    }
    for (int i = 0; i < bytesToDistort; ++i) {
        data[i] = 'f';
    }
}

QByteArray createJamSignal() {
    return QByteArray::fromHex("FF FF FF"); // Пример jam-сигнала из трех байтов
}
