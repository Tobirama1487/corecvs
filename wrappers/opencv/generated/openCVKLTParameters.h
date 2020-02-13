#ifndef OPENCV_KLT_PARAMETERS_H_
#define OPENCV_KLT_PARAMETERS_H_
/**
 * \file openCVKLTParameters.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from opencv.xml
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
 * \brief OpenCV KLT Parameters 
 * OpenCV KLT Parameters 
 **/
class OpenCVKLTParameters : public corecvs::BaseReflection<OpenCVKLTParameters>
{
public:
    enum FieldId {
        MAXCORNERS_ID,
        SELECTORQUALITY_ID,
        SELECTORDISTANCE_ID,
        SELECTORSIZE_ID,
        USEHARRIS_ID,
        HARRISK_ID,
        KLTSIZE_ID,
        TRACE_ID,
        OPENCV_KLT_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief MaxCorners 
     * MaxCorners 
     */
    int mMaxCorners;

    /** 
     * \brief SelectorQuality 
     * SelectorQuality 
     */
    double mSelectorQuality;

    /** 
     * \brief SelectorDistance 
     * SelectorDistance 
     */
    double mSelectorDistance;

    /** 
     * \brief SelectorSize 
     * SelectorSize 
     */
    int mSelectorSize;

    /** 
     * \brief UseHarris 
     * UseHarris 
     */
    int mUseHarris;

    /** 
     * \brief HarrisK 
     * HarrisK 
     */
    double mHarrisK;

    /** 
     * \brief kltSize 
     * kltSize 
     */
    int mKltSize;

    /** 
     * \brief trace 
     * trace 
     */
    bool mTrace;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    int maxCorners() const
    {
        return mMaxCorners;
    }

    double selectorQuality() const
    {
        return mSelectorQuality;
    }

    double selectorDistance() const
    {
        return mSelectorDistance;
    }

    int selectorSize() const
    {
        return mSelectorSize;
    }

    int useHarris() const
    {
        return mUseHarris;
    }

    double harrisK() const
    {
        return mHarrisK;
    }

    int kltSize() const
    {
        return mKltSize;
    }

    bool trace() const
    {
        return mTrace;
    }

    /** Section with setters */
    void setMaxCorners(int maxCorners)
    {
        mMaxCorners = maxCorners;
    }

    void setSelectorQuality(double selectorQuality)
    {
        mSelectorQuality = selectorQuality;
    }

    void setSelectorDistance(double selectorDistance)
    {
        mSelectorDistance = selectorDistance;
    }

    void setSelectorSize(int selectorSize)
    {
        mSelectorSize = selectorSize;
    }

    void setUseHarris(int useHarris)
    {
        mUseHarris = useHarris;
    }

    void setHarrisK(double harrisK)
    {
        mHarrisK = harrisK;
    }

    void setKltSize(int kltSize)
    {
        mKltSize = kltSize;
    }

    void setTrace(bool trace)
    {
        mTrace = trace;
    }

    /** Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mMaxCorners,                static_cast<const corecvs::IntField *>(fields()[MAXCORNERS_ID]));
        visitor.visit(mSelectorQuality,           static_cast<const corecvs::DoubleField *>(fields()[SELECTORQUALITY_ID]));
        visitor.visit(mSelectorDistance,          static_cast<const corecvs::DoubleField *>(fields()[SELECTORDISTANCE_ID]));
        visitor.visit(mSelectorSize,              static_cast<const corecvs::IntField *>(fields()[SELECTORSIZE_ID]));
        visitor.visit(mUseHarris,                 static_cast<const corecvs::IntField *>(fields()[USEHARRIS_ID]));
        visitor.visit(mHarrisK,                   static_cast<const corecvs::DoubleField *>(fields()[HARRISK_ID]));
        visitor.visit(mKltSize,                   static_cast<const corecvs::IntField *>(fields()[KLTSIZE_ID]));
        visitor.visit(mTrace,                     static_cast<const corecvs::BoolField *>(fields()[TRACE_ID]));
    }

    OpenCVKLTParameters()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    OpenCVKLTParameters(
          int maxCorners
        , double selectorQuality
        , double selectorDistance
        , int selectorSize
        , int useHarris
        , double harrisK
        , int kltSize
        , bool trace
    )
    {
        mMaxCorners = maxCorners;
        mSelectorQuality = selectorQuality;
        mSelectorDistance = selectorDistance;
        mSelectorSize = selectorSize;
        mUseHarris = useHarris;
        mHarrisK = harrisK;
        mKltSize = kltSize;
        mTrace = trace;
    }

    /** Exact match comparator **/ 
    bool operator ==(const OpenCVKLTParameters &other) const 
    {
        if ( !(this->mMaxCorners == other.mMaxCorners)) return false;
        if ( !(this->mSelectorQuality == other.mSelectorQuality)) return false;
        if ( !(this->mSelectorDistance == other.mSelectorDistance)) return false;
        if ( !(this->mSelectorSize == other.mSelectorSize)) return false;
        if ( !(this->mUseHarris == other.mUseHarris)) return false;
        if ( !(this->mHarrisK == other.mHarrisK)) return false;
        if ( !(this->mKltSize == other.mKltSize)) return false;
        if ( !(this->mTrace == other.mTrace)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, OpenCVKLTParameters &toSave)
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
#endif  //OPENCV_KLT_PARAMETERS_H_
