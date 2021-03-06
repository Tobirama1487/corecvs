#ifndef BETAFLIGHT_PID_PARAMETERS_H_
#define BETAFLIGHT_PID_PARAMETERS_H_
/**
 * \file betaflightPIDParameters.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from physics.xml
 */

#include "core/reflection/reflection.h"
#include "core/reflection/defaultSetter.h"
#include "core/reflection/printerVisitor.h"

/*
 *  Embed includes.
 */
/*
 *  Additional includes for Composite Types.
 */
#include "pIDParameters.h"
#include "rateParameters.h"

// using namespace corecvs;

/*
 *  Additional includes for Pointer Types.
 */

// namespace corecvs {
// }
/*
 *  Additional includes for enum section.
 */

/**
 * \brief Betaflight PID Parameters 
 * Betaflight PID Parameters 
 **/
class BetaflightPIDParameters : public corecvs::BaseReflection<BetaflightPIDParameters>
{
public:
    enum FieldId {
        ROLL_PID_ID,
        PITCH_PID_ID,
        YAW_PID_ID,
        ROLL_RATE_ID,
        PITCH_RATE_ID,
        YAW_RATE_ID,
        BETAFLIGHT_PID_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief Roll PID 
     * Roll PID 
     */
    PIDParameters mRollPID;

    /** 
     * \brief Pitch PID 
     * Pitch PID 
     */
    PIDParameters mPitchPID;

    /** 
     * \brief Yaw PID 
     * Yaw PID 
     */
    PIDParameters mYawPID;

    /** 
     * \brief Roll Rate 
     * Roll Rate 
     */
    RateParameters mRollRate;

    /** 
     * \brief Pitch Rate 
     * Pitch Rate 
     */
    RateParameters mPitchRate;

    /** 
     * \brief Yaw Rate 
     * Yaw Rate 
     */
    RateParameters mYawRate;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    PIDParameters rollPID() const
    {
        return mRollPID;
    }

    PIDParameters pitchPID() const
    {
        return mPitchPID;
    }

    PIDParameters yawPID() const
    {
        return mYawPID;
    }

    RateParameters rollRate() const
    {
        return mRollRate;
    }

    RateParameters pitchRate() const
    {
        return mPitchRate;
    }

    RateParameters yawRate() const
    {
        return mYawRate;
    }

    /* Section with setters */
    void setRollPID(PIDParameters const &rollPID)
    {
        mRollPID = rollPID;
    }

    void setPitchPID(PIDParameters const &pitchPID)
    {
        mPitchPID = pitchPID;
    }

    void setYawPID(PIDParameters const &yawPID)
    {
        mYawPID = yawPID;
    }

    void setRollRate(RateParameters const &rollRate)
    {
        mRollRate = rollRate;
    }

    void setPitchRate(RateParameters const &pitchRate)
    {
        mPitchRate = pitchRate;
    }

    void setYawRate(RateParameters const &yawRate)
    {
        mYawRate = yawRate;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mRollPID,                   static_cast<const corecvs::CompositeField *>(fields()[ROLL_PID_ID]));
        visitor.visit(mPitchPID,                  static_cast<const corecvs::CompositeField *>(fields()[PITCH_PID_ID]));
        visitor.visit(mYawPID,                    static_cast<const corecvs::CompositeField *>(fields()[YAW_PID_ID]));
        visitor.visit(mRollRate,                  static_cast<const corecvs::CompositeField *>(fields()[ROLL_RATE_ID]));
        visitor.visit(mPitchRate,                 static_cast<const corecvs::CompositeField *>(fields()[PITCH_RATE_ID]));
        visitor.visit(mYawRate,                   static_cast<const corecvs::CompositeField *>(fields()[YAW_RATE_ID]));
    }

    BetaflightPIDParameters()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    BetaflightPIDParameters(
          PIDParameters rollPID
        , PIDParameters pitchPID
        , PIDParameters yawPID
        , RateParameters rollRate
        , RateParameters pitchRate
        , RateParameters yawRate
    )
    {
        mRollPID = rollPID;
        mPitchPID = pitchPID;
        mYawPID = yawPID;
        mRollRate = rollRate;
        mPitchRate = pitchRate;
        mYawRate = yawRate;
    }

    bool operator ==(const BetaflightPIDParameters &other) const 
    {
        if ( !(this->mRollPID == other.mRollPID)) return false;
        if ( !(this->mPitchPID == other.mPitchPID)) return false;
        if ( !(this->mYawPID == other.mYawPID)) return false;
        if ( !(this->mRollRate == other.mRollRate)) return false;
        if ( !(this->mPitchRate == other.mPitchRate)) return false;
        if ( !(this->mYawRate == other.mYawRate)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, BetaflightPIDParameters &toSave)
    {
        corecvs::PrinterVisitor printer(out);
        toSave.accept<corecvs::PrinterVisitor>(printer);
        return out;
    }

    void print ()
    {
        std::cout << *this;
    }
};
#endif  //BETAFLIGHT_PID_PARAMETERS_H_
