/* auto-generated by genmsg_cpp from /home/blazz/myStacks/irobot/msg/Battery.msg.  Do not edit! */
#ifndef IROBOT_BATTERY_H
#define IROBOT_BATTERY_H

#include <string>
#include <vector>
#include "ros/message.h"
#include "ros/debug.h"
#include "ros/assert.h"
#include "ros/time.h"

#include "roslib/Header.h"

namespace irobot
{

//! \htmlinclude Battery.msg.html

class Battery : public ros::Message
{
public:
  typedef boost::shared_ptr<Battery> Ptr;
  typedef boost::shared_ptr<Battery const> ConstPtr;

  typedef roslib::Header _header_type;
  typedef std::string _charging_source_type;
  typedef float _level_type;
  typedef uint32_t _time_remaining_type;

  roslib::Header header;
  std::string charging_source;
  float level;
  uint32_t time_remaining;

  Battery() : ros::Message(),
    level(0),
    time_remaining(0)
  {
  }
  Battery(const Battery &copy) : ros::Message(),
    header(copy.header),
    charging_source(copy.charging_source),
    level(copy.level),
    time_remaining(copy.time_remaining)
  {
    (void)copy;
  }
  Battery &operator =(const Battery &copy)
  {
    if (this == &copy)
      return *this;
    header = copy.header;
    charging_source = copy.charging_source;
    level = copy.level;
    time_remaining = copy.time_remaining;
    return *this;
  }
  virtual ~Battery() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("irobot/Battery"); }
  inline static std::string __s_getMD5Sum() { return std::string("488db710899c775e90d4a84cb189b94e"); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "Header header\n"
    "string charging_source\n"
    "float32 level			# in %\n"
    "uint32 time_remaining		# in minutes\n"
    "\n"
    "\n"
    "================================================================================\n"
    "MSG: roslib/Header\n"
    "# Standard metadata for higher-level stamped data types.\n"
    "# This is generally used to communicate timestamped data \n"
    "# in a particular coordinate frame.\n"
    "# \n"
    "# sequence ID: consecutively increasing ID \n"
    "uint32 seq\n"
    "#Two-integer timestamp that is expressed as:\n"
    "# * stamp.secs: seconds (stamp_secs) since epoch\n"
    "# * stamp.nsecs: nanoseconds since stamp_secs\n"
    "# time-handling sugar is provided by the client library\n"
    "time stamp\n"
    "#Frame this data is associated with\n"
    "# 0: no frame\n"
    "# 1: global frame\n"
    "string frame_id\n"
    "\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += header.serializationLength(); // header
    __l += 4 + charging_source.length(); // charging_source
    __l += 4; // level
    __l += 4; // time_remaining
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
                             uint32_t seq) const
  {
    roslib::Header _ser_header = header;
    bool __reset_seq = (header.seq == 0);
    if (__reset_seq) _ser_header.seq = seq;
    write_ptr = _ser_header.serialize(write_ptr, seq);
    unsigned __ros_charging_source_len = charging_source.length();
    SROS_SERIALIZE_PRIMITIVE(write_ptr, __ros_charging_source_len);
    SROS_SERIALIZE_BUFFER(write_ptr, charging_source.c_str(), __ros_charging_source_len);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, level);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, time_remaining);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    read_ptr = header.deserialize(read_ptr);
    unsigned __ros_charging_source_len;
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, __ros_charging_source_len);
    charging_source = std::string((const char *)read_ptr, __ros_charging_source_len);
    read_ptr += __ros_charging_source_len;
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, level);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, time_remaining);
    return read_ptr;
  }
};

typedef boost::shared_ptr<Battery> BatteryPtr;
typedef boost::shared_ptr<Battery const> BatteryConstPtr;


}

#endif
