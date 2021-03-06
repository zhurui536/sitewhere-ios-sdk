// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sitewhere.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30000
#error This file was generated by a different version of protoc-gen-objc which is incompatible with your Protocol Buffer sources.
#endif

// @@protoc_insertion_point(imports)

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum SiteWhere_Command

typedef GPB_ENUM(SiteWhere_Command) {
  SiteWhere_Command_SendRegistration = 1,
  SiteWhere_Command_SendAcknowledgement = 2,
  SiteWhere_Command_SendDeviceLocation = 3,
  SiteWhere_Command_SendDeviceAlert = 4,
  SiteWhere_Command_SendDeviceMeasurements = 5,
  SiteWhere_Command_SendDeviceStream = 6,
  SiteWhere_Command_SendDeviceStreamData = 7,
  SiteWhere_Command_RequestDeviceStreamData = 8,
};

GPBEnumDescriptor *SiteWhere_Command_EnumDescriptor(void);

BOOL SiteWhere_Command_IsValidValue(int32_t value);

#pragma mark - Enum Device_Command

typedef GPB_ENUM(Device_Command) {
  Device_Command_AckRegistration = 1,
  Device_Command_AckDeviceStream = 2,
  Device_Command_ReceiveDeviceStreamData = 3,
};

GPBEnumDescriptor *Device_Command_EnumDescriptor(void);

BOOL Device_Command_IsValidValue(int32_t value);

#pragma mark - Enum Device_RegistrationAckState

// Enumeration of registation state responses.
typedef GPB_ENUM(Device_RegistrationAckState) {
  Device_RegistrationAckState_NewRegistration = 1,
  Device_RegistrationAckState_AlreadyRegistered = 2,
  Device_RegistrationAckState_RegistrationError = 3,
};

GPBEnumDescriptor *Device_RegistrationAckState_EnumDescriptor(void);

BOOL Device_RegistrationAckState_IsValidValue(int32_t value);

#pragma mark - Enum Device_RegistrationAckError

typedef GPB_ENUM(Device_RegistrationAckError) {
  Device_RegistrationAckError_InvalidSpecification = 1,
  Device_RegistrationAckError_SiteTokenRequired = 2,
  Device_RegistrationAckError_NewDevicesNotAllowed = 3,
};

GPBEnumDescriptor *Device_RegistrationAckError_EnumDescriptor(void);

BOOL Device_RegistrationAckError_IsValidValue(int32_t value);

#pragma mark - Enum Device_DeviceStreamAckState

// Enumeration of device stream creation responses.
typedef GPB_ENUM(Device_DeviceStreamAckState) {
  Device_DeviceStreamAckState_StreamCreated = 1,
  Device_DeviceStreamAckState_StreamExists = 2,
  Device_DeviceStreamAckState_StreamFailed = 3,
};

GPBEnumDescriptor *Device_DeviceStreamAckState_EnumDescriptor(void);

BOOL Device_DeviceStreamAckState_IsValidValue(int32_t value);

#pragma mark - SitewhereRoot

@interface SitewhereRoot : GPBRootObject

// The base class provides:
//   + (GPBExtensionRegistry *)extensionRegistry;
// which is an GPBExtensionRegistry that includes all the extensions defined by
// this file and all files that it depends on.

@end

#pragma mark - Model

// Model Objects
@interface Model : GPBMessage

@end

#pragma mark - Model_Metadata

typedef GPB_ENUM(Model_Metadata_FieldNumber) {
  Model_Metadata_FieldNumber_Name = 1,
  Model_Metadata_FieldNumber_Value = 2,
};

// A single piece of metadata.
@interface Model_Metadata : GPBMessage

@property(nonatomic, readwrite) BOOL hasName;
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite) BOOL hasValue;
@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@end

#pragma mark - Model_DeviceLocation

typedef GPB_ENUM(Model_DeviceLocation_FieldNumber) {
  Model_DeviceLocation_FieldNumber_HardwareId = 1,
  Model_DeviceLocation_FieldNumber_Latitude = 2,
  Model_DeviceLocation_FieldNumber_Longitude = 3,
  Model_DeviceLocation_FieldNumber_Elevation = 4,
  Model_DeviceLocation_FieldNumber_EventDate = 5,
  Model_DeviceLocation_FieldNumber_MetadataArray = 6,
  Model_DeviceLocation_FieldNumber_UpdateState = 7,
};

// Report device location.
@interface Model_DeviceLocation : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

@property(nonatomic, readwrite) BOOL hasLatitude;
@property(nonatomic, readwrite) uint64_t latitude;

@property(nonatomic, readwrite) BOOL hasLongitude;
@property(nonatomic, readwrite) uint64_t longitude;

@property(nonatomic, readwrite) BOOL hasElevation;
@property(nonatomic, readwrite) uint64_t elevation;

@property(nonatomic, readwrite) BOOL hasEventDate;
@property(nonatomic, readwrite) uint64_t eventDate;

// |metadataArray| contains |Model_Metadata|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *metadataArray;
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@property(nonatomic, readwrite) BOOL hasUpdateState;
@property(nonatomic, readwrite) BOOL updateState;

@end

#pragma mark - Model_DeviceAlert

typedef GPB_ENUM(Model_DeviceAlert_FieldNumber) {
  Model_DeviceAlert_FieldNumber_HardwareId = 1,
  Model_DeviceAlert_FieldNumber_AlertType = 2,
  Model_DeviceAlert_FieldNumber_AlertMessage = 3,
  Model_DeviceAlert_FieldNumber_EventDate = 4,
  Model_DeviceAlert_FieldNumber_MetadataArray = 5,
  Model_DeviceAlert_FieldNumber_UpdateState = 6,
};

// Report device alert.
@interface Model_DeviceAlert : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

@property(nonatomic, readwrite) BOOL hasAlertType;
@property(nonatomic, readwrite, copy, null_resettable) NSString *alertType;

@property(nonatomic, readwrite) BOOL hasAlertMessage;
@property(nonatomic, readwrite, copy, null_resettable) NSString *alertMessage;

@property(nonatomic, readwrite) BOOL hasEventDate;
@property(nonatomic, readwrite) uint64_t eventDate;

// |metadataArray| contains |Model_Metadata|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *metadataArray;
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@property(nonatomic, readwrite) BOOL hasUpdateState;
@property(nonatomic, readwrite) BOOL updateState;

@end

#pragma mark - Model_Measurement

typedef GPB_ENUM(Model_Measurement_FieldNumber) {
  Model_Measurement_FieldNumber_MeasurementId = 1,
  Model_Measurement_FieldNumber_MeasurementValue = 2,
};

// A single measurement.
@interface Model_Measurement : GPBMessage

@property(nonatomic, readwrite) BOOL hasMeasurementId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *measurementId;

@property(nonatomic, readwrite) BOOL hasMeasurementValue;
@property(nonatomic, readwrite) uint64_t measurementValue;

@end

#pragma mark - Model_DeviceMeasurements

typedef GPB_ENUM(Model_DeviceMeasurements_FieldNumber) {
  Model_DeviceMeasurements_FieldNumber_HardwareId = 1,
  Model_DeviceMeasurements_FieldNumber_MeasurementArray = 2,
  Model_DeviceMeasurements_FieldNumber_EventDate = 3,
  Model_DeviceMeasurements_FieldNumber_MetadataArray = 4,
  Model_DeviceMeasurements_FieldNumber_UpdateState = 5,
};

// Event message for device measurements.
@interface Model_DeviceMeasurements : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

// |measurementArray| contains |Model_Measurement|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *measurementArray;
@property(nonatomic, readonly) NSUInteger measurementArray_Count;

@property(nonatomic, readwrite) BOOL hasEventDate;
@property(nonatomic, readwrite) uint64_t eventDate;

// |metadataArray| contains |Model_Metadata|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *metadataArray;
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@property(nonatomic, readwrite) BOOL hasUpdateState;
@property(nonatomic, readwrite) BOOL updateState;

@end

#pragma mark - Model_DeviceStream

typedef GPB_ENUM(Model_DeviceStream_FieldNumber) {
  Model_DeviceStream_FieldNumber_HardwareId = 1,
  Model_DeviceStream_FieldNumber_StreamId = 2,
  Model_DeviceStream_FieldNumber_ContentType = 3,
  Model_DeviceStream_FieldNumber_MetadataArray = 4,
};

// Create a device stream.
@interface Model_DeviceStream : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

@property(nonatomic, readwrite) BOOL hasStreamId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *streamId;

@property(nonatomic, readwrite) BOOL hasContentType;
@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;

// |metadataArray| contains |Model_Metadata|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *metadataArray;
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@end

#pragma mark - Model_DeviceStreamData

typedef GPB_ENUM(Model_DeviceStreamData_FieldNumber) {
  Model_DeviceStreamData_FieldNumber_HardwareId = 1,
  Model_DeviceStreamData_FieldNumber_StreamId = 2,
  Model_DeviceStreamData_FieldNumber_SequenceNumber = 3,
  Model_DeviceStreamData_FieldNumber_Data_p = 4,
  Model_DeviceStreamData_FieldNumber_EventDate = 5,
  Model_DeviceStreamData_FieldNumber_MetadataArray = 6,
};

// A chunk of streaming data.
@interface Model_DeviceStreamData : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

@property(nonatomic, readwrite) BOOL hasStreamId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *streamId;

@property(nonatomic, readwrite) BOOL hasSequenceNumber;
@property(nonatomic, readwrite) uint64_t sequenceNumber;

@property(nonatomic, readwrite) BOOL hasData_p;
@property(nonatomic, readwrite, copy, null_resettable) NSData *data_p;

@property(nonatomic, readwrite) BOOL hasEventDate;
@property(nonatomic, readwrite) uint64_t eventDate;

// |metadataArray| contains |Model_Metadata|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *metadataArray;
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@end

#pragma mark - SiteWhere

// Commands sent from a device to SiteWhere.
@interface SiteWhere : GPBMessage

@end

#pragma mark - SiteWhere_Header

typedef GPB_ENUM(SiteWhere_Header_FieldNumber) {
  SiteWhere_Header_FieldNumber_Command = 1,
  SiteWhere_Header_FieldNumber_Originator = 2,
};

// Header contains the command and originator.
@interface SiteWhere_Header : GPBMessage

@property(nonatomic, readwrite) BOOL hasCommand;
@property(nonatomic, readwrite) SiteWhere_Command command;

@property(nonatomic, readwrite) BOOL hasOriginator;
@property(nonatomic, readwrite, copy, null_resettable) NSString *originator;

@end

#pragma mark - SiteWhere_RegisterDevice

typedef GPB_ENUM(SiteWhere_RegisterDevice_FieldNumber) {
  SiteWhere_RegisterDevice_FieldNumber_HardwareId = 1,
  SiteWhere_RegisterDevice_FieldNumber_SpecificationToken = 2,
  SiteWhere_RegisterDevice_FieldNumber_MetadataArray = 3,
  SiteWhere_RegisterDevice_FieldNumber_SiteToken = 4,
};

// Register a device with SiteWhere.
@interface SiteWhere_RegisterDevice : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

@property(nonatomic, readwrite) BOOL hasSpecificationToken;
@property(nonatomic, readwrite, copy, null_resettable) NSString *specificationToken;

// |metadataArray| contains |Model_Metadata|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *metadataArray;
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@property(nonatomic, readwrite) BOOL hasSiteToken;
@property(nonatomic, readwrite, copy, null_resettable) NSString *siteToken;

@end

#pragma mark - SiteWhere_Acknowledge

typedef GPB_ENUM(SiteWhere_Acknowledge_FieldNumber) {
  SiteWhere_Acknowledge_FieldNumber_HardwareId = 1,
  SiteWhere_Acknowledge_FieldNumber_Message = 2,
};

// Acknowledge previous command.
@interface SiteWhere_Acknowledge : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

@property(nonatomic, readwrite) BOOL hasMessage;
@property(nonatomic, readwrite, copy, null_resettable) NSString *message;

@end

#pragma mark - SiteWhere_DeviceStreamDataRequest

typedef GPB_ENUM(SiteWhere_DeviceStreamDataRequest_FieldNumber) {
  SiteWhere_DeviceStreamDataRequest_FieldNumber_HardwareId = 1,
  SiteWhere_DeviceStreamDataRequest_FieldNumber_StreamId = 2,
  SiteWhere_DeviceStreamDataRequest_FieldNumber_SequenceNumber = 3,
};

// Request for a chunk of data from a device stream.
@interface SiteWhere_DeviceStreamDataRequest : GPBMessage

@property(nonatomic, readwrite) BOOL hasHardwareId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *hardwareId;

@property(nonatomic, readwrite) BOOL hasStreamId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *streamId;

@property(nonatomic, readwrite) BOOL hasSequenceNumber;
@property(nonatomic, readwrite) uint64_t sequenceNumber;

@end

#pragma mark - Device

// Commands sent from SiteWhere to a device.
@interface Device : GPBMessage

@end

#pragma mark - Device_Header

typedef GPB_ENUM(Device_Header_FieldNumber) {
  Device_Header_FieldNumber_Command = 1,
  Device_Header_FieldNumber_Originator = 2,
  Device_Header_FieldNumber_NestedPath = 3,
  Device_Header_FieldNumber_NestedSpec = 4,
};

// Header contains the command and originator.
@interface Device_Header : GPBMessage

@property(nonatomic, readwrite) BOOL hasCommand;
@property(nonatomic, readwrite) Device_Command command;

@property(nonatomic, readwrite) BOOL hasOriginator;
@property(nonatomic, readwrite, copy, null_resettable) NSString *originator;

@property(nonatomic, readwrite) BOOL hasNestedPath;
@property(nonatomic, readwrite, copy, null_resettable) NSString *nestedPath;

@property(nonatomic, readwrite) BOOL hasNestedSpec;
@property(nonatomic, readwrite, copy, null_resettable) NSString *nestedSpec;

@end

#pragma mark - Device_RegistrationAck

typedef GPB_ENUM(Device_RegistrationAck_FieldNumber) {
  Device_RegistrationAck_FieldNumber_State = 1,
  Device_RegistrationAck_FieldNumber_ErrorType = 2,
  Device_RegistrationAck_FieldNumber_ErrorMessage = 3,
};

// Acknowledges registration.
@interface Device_RegistrationAck : GPBMessage

@property(nonatomic, readwrite) BOOL hasState;
@property(nonatomic, readwrite) Device_RegistrationAckState state;

@property(nonatomic, readwrite) BOOL hasErrorType;
@property(nonatomic, readwrite) Device_RegistrationAckError errorType;

@property(nonatomic, readwrite) BOOL hasErrorMessage;
@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMessage;

@end

#pragma mark - Device_DeviceStreamAck

typedef GPB_ENUM(Device_DeviceStreamAck_FieldNumber) {
  Device_DeviceStreamAck_FieldNumber_StreamId = 1,
  Device_DeviceStreamAck_FieldNumber_State = 2,
};

// Acknowledges creation of device stream.
@interface Device_DeviceStreamAck : GPBMessage

@property(nonatomic, readwrite) BOOL hasStreamId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *streamId;

@property(nonatomic, readwrite) BOOL hasState;
@property(nonatomic, readwrite) Device_DeviceStreamAckState state;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

// @@protoc_insertion_point(global_scope)
