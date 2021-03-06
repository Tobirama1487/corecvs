#ifndef RGB_COLOR_PARAMETERS_H_
#define RGB_COLOR_PARAMETERS_H_
/**
 * \file rgbColorParameters.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from parameters.xml
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
 * \brief rgb Color Parameters 
 * rgb Color Parameters 
 **/
class RgbColorParameters : public corecvs::BaseReflection<RgbColorParameters>
{
public:
    enum FieldId {
        R_ID,
        G_ID,
        B_ID,
        RGB_COLOR_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief R 
     * R 
     */
    int mR;

    /** 
     * \brief G 
     * G 
     */
    int mG;

    /** 
     * \brief B 
     * B 
     */
    int mB;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    int r() const
    {
        return mR;
    }

    int g() const
    {
        return mG;
    }

    int b() const
    {
        return mB;
    }

    /** Section with setters */
    void setR(int r)
    {
        mR = r;
    }

    void setG(int g)
    {
        mG = g;
    }

    void setB(int b)
    {
        mB = b;
    }

    /** Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mR,                         static_cast<const corecvs::IntField *>(fields()[R_ID]));
        visitor.visit(mG,                         static_cast<const corecvs::IntField *>(fields()[G_ID]));
        visitor.visit(mB,                         static_cast<const corecvs::IntField *>(fields()[B_ID]));
    }

    RgbColorParameters()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    RgbColorParameters(
          int r
        , int g
        , int b
    )
    {
        mR = r;
        mG = g;
        mB = b;
    }

    /** Exact match comparator **/ 
    bool operator ==(const RgbColorParameters &other) const 
    {
        if ( !(this->mR == other.mR)) return false;
        if ( !(this->mG == other.mG)) return false;
        if ( !(this->mB == other.mB)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, RgbColorParameters &toSave)
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
#endif  //RGB_COLOR_PARAMETERS_H_
