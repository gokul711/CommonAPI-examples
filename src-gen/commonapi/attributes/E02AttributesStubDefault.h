/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_ATTRIBUTES_E02_Attributes_STUB_DEFAULT_H_
#define COMMONAPI_ATTRIBUTES_E02_Attributes_STUB_DEFAULT_H_


#include <commonapi/attributes/E02AttributesStub.h>
#include <sstream>

namespace commonapi {
namespace attributes {

/**
 * Provides a default implementation for E02AttributesStubRemoteEvent and
 * E02AttributesStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class E02AttributesStubDefault : public virtual E02AttributesStub {
public:
    E02AttributesStubDefault();

    E02AttributesStubRemoteEvent* initStubAdapter(const std::shared_ptr<E02AttributesStubAdapter>& stubAdapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId);

    virtual const int32_t& getXAttribute();
    virtual const int32_t& getXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setXAttribute(int32_t value);
    virtual void setXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value);
    virtual const CommonTypes::a1Struct& getA1Attribute();
    virtual const CommonTypes::a1Struct& getA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setA1Attribute(CommonTypes::a1Struct value);
    virtual void setA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId, CommonTypes::a1Struct value);
    virtual const float& getFAttribute();
    virtual const float& getFAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setFAttribute(float value);




protected:
    virtual bool trySetXAttribute(int32_t value);
    virtual bool validateXAttributeRequestedValue(const int32_t& value);
    virtual void onRemoteXAttributeChanged();
    virtual bool trySetA1Attribute(CommonTypes::a1Struct value);
    virtual bool validateA1AttributeRequestedValue(const CommonTypes::a1Struct& value);
    virtual void onRemoteA1AttributeChanged();
    virtual bool trySetFAttribute(float value);
    virtual bool validateFAttributeRequestedValue(const float& value);
    class RemoteEventHandler: public virtual E02AttributesStubRemoteEvent {
     public:
        RemoteEventHandler(E02AttributesStubDefault* defaultStub);

        virtual bool onRemoteSetXAttribute(int32_t value);
        virtual bool onRemoteSetXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value);
        virtual void onRemoteXAttributeChanged();

        virtual bool onRemoteSetA1Attribute(CommonTypes::a1Struct value);
        virtual bool onRemoteSetA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId, CommonTypes::a1Struct value);
        virtual void onRemoteA1AttributeChanged();



     private:
        E02AttributesStubDefault* defaultStub_;
    };
private:
    E02AttributesStubDefault::RemoteEventHandler remoteEventHandler_;

    int32_t xAttributeValue_;
    CommonTypes::a1Struct a1AttributeValue_;
    float fAttributeValue_;

    CommonAPI::Version interfaceVersion_;
};

} // namespace attributes
} // namespace commonapi

#endif // COMMONAPI_ATTRIBUTES_E02_Attributes_STUB_DEFAULT_H_