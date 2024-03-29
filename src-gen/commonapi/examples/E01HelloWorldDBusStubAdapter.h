/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_EXAMPLES_E01_Hello_World_DBUS_STUB_ADAPTER_H_
#define COMMONAPI_EXAMPLES_E01_Hello_World_DBUS_STUB_ADAPTER_H_

#include <commonapi/examples/E01HelloWorldStub.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusStubAdapterHelper.h>
#include <CommonAPI/DBus/DBusStubAdapter.h>
#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusServicePublisher.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace examples {

typedef CommonAPI::DBus::DBusStubAdapterHelper<E01HelloWorldStub> E01HelloWorldDBusStubAdapterHelper;

class E01HelloWorldDBusStubAdapterInternal: public virtual E01HelloWorldStubAdapter, public E01HelloWorldDBusStubAdapterHelper {
 public:
    E01HelloWorldDBusStubAdapterInternal(
            const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
            const std::string& commonApiAddress,
            const std::string& dbusInterfaceName,
            const std::string& dbusBusName,
            const std::string& dbusObjectPath,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
            const std::shared_ptr<CommonAPI::StubBase>& stub);

    ~E01HelloWorldDBusStubAdapterInternal();

    virtual const bool hasFreedesktopProperties();




    const E01HelloWorldDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    const CommonAPI::DBus::StubAttributeTable& getStubAttributeTable();

    void deactivateManagedInstances();


static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        E01HelloWorldStub,
        CommonAPI::Version
        > getE01HelloWorldInterfaceVersionStubDispatcher;



static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    E01HelloWorldStub,
    std::tuple<std::string, int32_t>,
    std::tuple<std::string>
    > sayHelloStubDispatcher;




 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;

 private:
    E01HelloWorldDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
    CommonAPI::DBus::StubAttributeTable stubAttributeTable_;
};

class E01HelloWorldDBusStubAdapter: public E01HelloWorldDBusStubAdapterInternal, public std::enable_shared_from_this<E01HelloWorldDBusStubAdapter> {
public:
    E01HelloWorldDBusStubAdapter(
                         const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                         const std::string& commonApiAddress,
                         const std::string& dbusInterfaceName,
                         const std::string& dbusBusName,
                         const std::string& dbusObjectPath,
                         const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
                         const std::shared_ptr<CommonAPI::StubBase>& stub) :
            CommonAPI::DBus::DBusStubAdapter(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            false),
            E01HelloWorldDBusStubAdapterInternal(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            stub) { }
};

} // namespace examples
} // namespace commonapi

#endif // COMMONAPI_EXAMPLES_E01_Hello_World_DBUS_STUB_ADAPTER_H_
