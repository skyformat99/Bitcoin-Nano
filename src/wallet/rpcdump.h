// Copyright (c) 2017 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BTCNANO_WALLET_RPCDUMP_H
#define BTCNANO_WALLET_RPCDUMP_H

#include <univalue.h>

class Config;
class CRPCTable;
class JSONRPCRequest;

void RegisterDumpRPCCommands(CRPCTable &t);

UniValue importmulti(const Config &config, const JSONRPCRequest &request);

#endif // BTCNANO_WALLET_RPCDUMP_H
