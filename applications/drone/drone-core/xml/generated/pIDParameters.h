#ifndef PID_PARAMETERS_H_
#define PID_PARAMETERS_H_
/**
 * \file pIDParameters.h
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
 * \brief PID Parameters 
 * PID Parameters 
 **/
class PIDParameters : public corecvs::BaseReflection<PIDParameters>
{
public:
    enum FieldId {
        P_ID,
        I_ID,
        D_ID,
        PID_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief P 
     * P 
     */
    double mP;

    /** 
     * \brief I 
     * I 
     */
    double mI;

    /** 
     * \brief D 
     * D 
     */
    double mD;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    double p() const
    {
        return mP;
    }

    double i() const
    {
        return mI;
    }

    double d() const
    {
        return mD;
    }

    /* Section with setters */
    void setP(double p)
    {
        mP = p;
    }

    void setI(double i)
    {
        mI = i;
    }

    void setD(double d)
    {
        mD = d;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mP,                         static_cast<const corecvs::DoubleField *>(fields()[P_ID]));
        visitor.visit(mI,                         static_cast<const corecvs::DoubleField *>(fields()[I_ID]));
        visitor.visit(mD,                         static_cast<const corecvs::DoubleField *>(fields()[D_ID]));
    }

    PIDParameters()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    PIDParameters(
          double p
        , double i
        , double d
    )
    {
        mP = p;
        mI = i;
        mD = d;
    }

    bool operator ==(const PIDParameters &other) const 
    {
        if ( !(this->mP == other.mP)) return false;
        if ( !(this->mI == other.mI)) return false;
        if ( !(this->mD == other.mD)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, PIDParameters &toSave)
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
#endif  //PID_PARAMETERS_H_
