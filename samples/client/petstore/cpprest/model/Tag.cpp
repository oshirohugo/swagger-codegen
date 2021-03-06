/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Tag.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Tag::Tag()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
}

Tag::~Tag()
{
}

void Tag::validate()
{
    // TODO: implement validation
}

web::json::value Tag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }

    return val;
}

void Tag::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
}

void Tag::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
}

void Tag::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
}

int64_t Tag::getId() const
{
    return m_Id;
}


void Tag::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Tag::idIsSet() const
{
    return m_IdIsSet;
}

void Tag::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Tag::getName() const
{
    return m_Name;
}


void Tag::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Tag::nameIsSet() const
{
    return m_NameIsSet;
}

void Tag::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

