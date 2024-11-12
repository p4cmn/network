#pragma once

#include <QRandomGenerator>
#include <QThread>

bool isChannelBusy();
bool isCollisionDetected();
int calculateBackoffDelay(int attempt);
void distortMultipleBytes(QByteArray& data, int bytesToDistort = 2);
QByteArray createJamSignal();
