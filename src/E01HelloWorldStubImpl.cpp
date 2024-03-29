/* Copyright (C) 2014 BMW Group
 * Author: Manfred Bathelt (manfred.bathelt@bmw.de)
 * Author: Juergen Gehring (juergen.gehring@bmw.de)
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "../src/E01HelloWorldStubImpl.h"

E01HelloWorldStubImpl::E01HelloWorldStubImpl() {
}

E01HelloWorldStubImpl::~E01HelloWorldStubImpl() {
}

void E01HelloWorldStubImpl::sayHello(const std::shared_ptr<CommonAPI::ClientId> clientId,
                                     std::string name,
									 int32_t size,
                                     std::string& message) {
    std::stringstream messageStream;

    for (int32_t times=0; times < size; ++times)
    {
    	messageStream << "Hello " << name << "! ";
    }
    message = messageStream.str();

    std::cout << "sayHello('" << name << "'): '" << message << "'\n";
};
