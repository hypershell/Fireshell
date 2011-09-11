/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIDataBuffer.idl
 */

#ifndef __gen_hyIDataBuffer_h__
#define __gen_hyIDataBuffer_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIDataBuffer */
#define HYIDATABUFFER_IID_STR "ffbf773b-89f8-4028-af84-ba7d847bfd05"

#define HYIDATABUFFER_IID \
  {0xffbf773b, 0x89f8, 0x4028, \
    { 0xaf, 0x84, 0xba, 0x7d, 0x84, 0x7b, 0xfd, 0x05 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIDataBuffer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIDATABUFFER_IID)

  /* unsigned long long getLength (); */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *_retval NS_OUTPARAM) = 0;

  /* voidPtr getBuffer (); */
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(void **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIDataBuffer, HYIDATABUFFER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIDATABUFFER \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(void **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIDATABUFFER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *_retval NS_OUTPARAM) { return _to GetLength(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(void **_retval NS_OUTPARAM) { return _to GetBuffer(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIDATABUFFER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(void **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBuffer(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyDataBuffer : public hyIDataBuffer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIDATABUFFER

  hyDataBuffer();

private:
  ~hyDataBuffer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyDataBuffer, hyIDataBuffer)

hyDataBuffer::hyDataBuffer()
{
  /* member initializers and constructor code */
}

hyDataBuffer::~hyDataBuffer()
{
  /* destructor code */
}

/* unsigned long long getLength (); */
NS_IMETHODIMP hyDataBuffer::GetLength(PRUint64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* voidPtr getBuffer (); */
NS_IMETHODIMP hyDataBuffer::GetBuffer(void **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIDataBuffer_h__ */
