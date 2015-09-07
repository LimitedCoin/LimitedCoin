#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define limitedcoin-qt message queue name
#define BITCOINURI_QUEUE_NAME "LimitedCoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
