/* auto-generated by genmsg_cpp from /home/blazz/myStacks/plumesim/msg/NoseSniff.msg.  Do not edit! */
#ifndef PLUMESIM_NOSESNIFF_H
#define PLUMESIM_NOSESNIFF_H

#include <string>
#include <vector>
#include "ros/message.h"
#include "ros/debug.h"
#include "ros/assert.h"
#include "ros/time.h"

#include "roslib/Header.h"

namespace plumesim
{

//! \htmlinclude NoseSniff.msg.html

class NoseSniff : public ros::Message
{
public:
  typedef boost::shared_ptr<NoseSniff> Ptr;
  typedef boost::shared_ptr<NoseSniff const> ConstPtr;

  typedef roslib::Header _header_type;
  typedef std::vector<std::string> _sensor_model_type;
  typedef std::vector<float> _reading_type;
  typedef float _temperature_c_type;
  typedef float _temperature_f_type;
  typedef float _relative_humidity_type;

  roslib::Header header;
  std::vector<std::string> sensor_model;
  std::vector<float> reading;
  float temperature_c;
  float temperature_f;
  float relative_humidity;

  NoseSniff() : ros::Message(),
    temperature_c(0),
    temperature_f(0),
    relative_humidity(0)
  {
  }
  NoseSniff(const NoseSniff &copy) : ros::Message(),
    header(copy.header),
    temperature_c(copy.temperature_c),
    temperature_f(copy.temperature_f),
    relative_humidity(copy.relative_humidity)
  {
    (void)copy;
    sensor_model = copy.sensor_model;
    reading = copy.reading;
  }
  NoseSniff &operator =(const NoseSniff &copy)
  {
    if (this == &copy)
      return *this;
    sensor_model.clear();
    reading.clear();
    header = copy.header;
    sensor_model = copy.sensor_model;
    reading = copy.reading;
    temperature_c = copy.temperature_c;
    temperature_f = copy.temperature_f;
    relative_humidity = copy.relative_humidity;
    return *this;
  }
  virtual ~NoseSniff() 
  {
    sensor_model.clear();
    reading.clear();
  }
  inline static std::string __s_getDataType() { return std::string("plumesim/NoseSniff"); }
  inline static std::string __s_getMD5Sum() { return std::string("206c81c40780de88c30ff719c4c4ae33"); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "Header header\n"
    "string[] sensor_model\n"
    "float32[] reading\n"
    "float32 temperature_c		# temperature in celsius\n"
    "float32 temperature_f		# temperature in fahrenheit\n"
    "float32 relative_humidity	# humidity in %\n"
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
  void set_sensor_model_size(uint32_t __ros_new_size)
  {
    this->sensor_model.resize(__ros_new_size);
  }
  inline uint32_t get_sensor_model_size() const { return sensor_model.size(); }
  uint32_t calc_sensor_model_array_serialization_len() const
  {
    uint32_t l = 0;
    uint32_t sensor_model_size = sensor_model.size();
    for (size_t i = 0; i < sensor_model_size; i++)
      l += 4 + sensor_model[i].length();
    return l;
  }
  inline void get_sensor_model_vec (std::vector<std::string> &__ros_vec) const
  {
    __ros_vec = this->sensor_model;
  }
  inline void set_sensor_model_vec(const std::vector<std::string> &__ros_vec)
  {
    this->sensor_model = __ros_vec;
  }
  void set_reading_size(uint32_t __ros_new_size)
  {
    this->reading.resize(__ros_new_size);
  }
  inline uint32_t get_reading_size() const { return reading.size(); }
  inline void get_reading_vec (std::vector<float> &__ros_vec) const
  {
    __ros_vec = this->reading;
  }
  inline void set_reading_vec(const std::vector<float> &__ros_vec)
  {
    this->reading = __ros_vec;
  }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += header.serializationLength(); // header
    __l += 4 + calc_sensor_model_array_serialization_len(); // sensor_model
    __l += 4 + (reading.size() ? reading.size() * 4 : 0); // reading
    __l += 4; // temperature_c
    __l += 4; // temperature_f
    __l += 4; // relative_humidity
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
                             uint32_t seq) const
  {
    roslib::Header _ser_header = header;
    bool __reset_seq = (header.seq == 0);
    if (__reset_seq) _ser_header.seq = seq;
    write_ptr = _ser_header.serialize(write_ptr, seq);
    uint32_t __sensor_model_size = sensor_model.size();
    SROS_SERIALIZE_PRIMITIVE(write_ptr, __sensor_model_size);
    for (size_t i = 0; i < __sensor_model_size; i++)
    {
      unsigned __ros_sensor_model_i__len = sensor_model[i].length();
    SROS_SERIALIZE_PRIMITIVE(write_ptr, __ros_sensor_model_i__len);
    SROS_SERIALIZE_BUFFER(write_ptr, sensor_model[i].c_str(), __ros_sensor_model_i__len);
    }
    uint32_t __reading_size = reading.size();
    SROS_SERIALIZE_PRIMITIVE(write_ptr, __reading_size);
    memcpy(write_ptr, &reading[0], sizeof(float) * __reading_size);
    write_ptr += sizeof(float) * __reading_size;
    SROS_SERIALIZE_PRIMITIVE(write_ptr, temperature_c);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, temperature_f);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, relative_humidity);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    read_ptr = header.deserialize(read_ptr);
    uint32_t __sensor_model_size;
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, __sensor_model_size);
    set_sensor_model_size(__sensor_model_size);
    for (size_t i = 0; i < __sensor_model_size; i++)
    {
      unsigned __ros_sensor_model_i__len;
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, __ros_sensor_model_i__len);
    sensor_model[i] = std::string((const char *)read_ptr, __ros_sensor_model_i__len);
    read_ptr += __ros_sensor_model_i__len;
    }
    uint32_t __reading_size;
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, __reading_size);
    set_reading_size(__reading_size);
    memcpy(&reading[0], read_ptr, sizeof(float) * __reading_size);
    read_ptr += sizeof(float) * __reading_size;
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, temperature_c);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, temperature_f);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, relative_humidity);
    return read_ptr;
  }
};

typedef boost::shared_ptr<NoseSniff> NoseSniffPtr;
typedef boost::shared_ptr<NoseSniff const> NoseSniffConstPtr;


}

#endif