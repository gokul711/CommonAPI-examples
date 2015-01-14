/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "E02AttributesDBusStubAdapter.h"
#include <commonapi/attributes/E02Attributes.h>

namespace commonapi {
namespace attributes {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createE02AttributesDBusStubAdapter(
                   const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                   const std::string& commonApiAddress,
                   const std::string& interfaceName,
                   const std::string& busName,
                   const std::string& objectPath,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                   const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
    return std::make_shared<E02AttributesDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
}

INITIALIZER(registerE02AttributesDBusStubAdapter) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(E02Attributes::getInterfaceId(),
                                                               &createE02AttributesDBusStubAdapter);
}



E02AttributesDBusStubAdapterInternal::~E02AttributesDBusStubAdapterInternal() {
    deactivateManagedInstances();
    E02AttributesDBusStubAdapterHelper::deinit();
}

void E02AttributesDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* E02AttributesDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getXAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setXAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onXAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"i\" />\n"
        "</signal>\n"
        "<method name=\"getA1Attribute\">\n"
            "<arg name=\"value\" type=\"(s(bd))\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setA1Attribute\">\n"
            "<arg name=\"requestedValue\" type=\"(s(bd))\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"(s(bd))\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onA1AttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"(s(bd))\" />\n"
        "</signal>\n"
        "<method name=\"getFAttribute\">\n"
            "<arg name=\"value\" type=\"d\" direction=\"out\" />"
        "</method>\n"
        "<signal name=\"onFAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"d\" />\n"
        "</signal>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        E02AttributesStub,
        CommonAPI::Version
        > E02AttributesDBusStubAdapterInternal::getE02AttributesInterfaceVersionStubDispatcher(&E02AttributesStub::getInterfaceVersion, "uu");

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        E02AttributesStub,
        int32_t
        > E02AttributesDBusStubAdapterInternal::getXAttributeStubDispatcher(&E02AttributesStub::getXAttribute, "i");
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        E02AttributesStub,
        int32_t
        > E02AttributesDBusStubAdapterInternal::setXAttributeStubDispatcher(
                &E02AttributesStub::getXAttribute,
                &E02AttributesStubRemoteEvent::onRemoteSetXAttribute,
                &E02AttributesStubRemoteEvent::onRemoteXAttributeChanged
                ,&E02AttributesStubAdapter::fireXAttributeChanged
                ,"i"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        E02AttributesStub,
        CommonTypes::a1Struct
        > E02AttributesDBusStubAdapterInternal::getA1AttributeStubDispatcher(&E02AttributesStub::getA1Attribute, "(s(bd))");
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        E02AttributesStub,
        CommonTypes::a1Struct
        > E02AttributesDBusStubAdapterInternal::setA1AttributeStubDispatcher(
                &E02AttributesStub::getA1Attribute,
                &E02AttributesStubRemoteEvent::onRemoteSetA1Attribute,
                &E02AttributesStubRemoteEvent::onRemoteA1AttributeChanged
                ,&E02AttributesStubAdapter::fireA1AttributeChanged
                ,"(s(bd))"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        E02AttributesStub,
        float
        > E02AttributesDBusStubAdapterInternal::getFAttributeStubDispatcher(&E02AttributesStub::getFAttribute, "d");




void E02AttributesDBusStubAdapterInternal::fireXAttributeChanged(const int32_t& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t>>
        ::sendSignal(
            *this,
            "onXAttributeChanged",
            "i",
            value
    );
}
void E02AttributesDBusStubAdapterInternal::fireA1AttributeChanged(const CommonTypes::a1Struct& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<CommonTypes::a1Struct>>
        ::sendSignal(
            *this,
            "onA1AttributeChanged",
            "(s(bd))",
            value
    );
}
void E02AttributesDBusStubAdapterInternal::fireFAttributeChanged(const float& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<float>>
        ::sendSignal(
            *this,
            "onFAttributeChanged",
            "d",
            value
    );
}



const E02AttributesDBusStubAdapterHelper::StubDispatcherTable& E02AttributesDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& E02AttributesDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

E02AttributesDBusStubAdapterInternal::E02AttributesDBusStubAdapterInternal(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        CommonAPI::DBus::DBusStubAdapter(
                factory,
                commonApiAddress,
                dbusInterfaceName,
                dbusBusName,
                dbusObjectPath,
                dbusConnection,
                false),
        E02AttributesDBusStubAdapterHelper(
            factory,
            commonApiAddress,
            dbusInterfaceName,
            dbusBusName,
            dbusObjectPath,
            dbusConnection,
            std::dynamic_pointer_cast<E02AttributesStub>(stub),
            false),
        stubDispatcherTable_({
            { { "getXAttribute", "" }, &commonapi::attributes::E02AttributesDBusStubAdapterInternal::getXAttributeStubDispatcher }
            , { { "setXAttribute", "i" }, &commonapi::attributes::E02AttributesDBusStubAdapterInternal::setXAttributeStubDispatcher },
            { { "getA1Attribute", "" }, &commonapi::attributes::E02AttributesDBusStubAdapterInternal::getA1AttributeStubDispatcher }
            , { { "setA1Attribute", "(s(bd))" }, &commonapi::attributes::E02AttributesDBusStubAdapterInternal::setA1AttributeStubDispatcher },
            { { "getFAttribute", "" }, &commonapi::attributes::E02AttributesDBusStubAdapterInternal::getFAttributeStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &commonapi::attributes::E02AttributesDBusStubAdapterInternal::getE02AttributesInterfaceVersionStubDispatcher });
}

const bool E02AttributesDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace attributes
} // namespace commonapi
