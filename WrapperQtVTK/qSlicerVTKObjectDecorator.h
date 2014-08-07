
#ifndef __qSlicerVTKObjectDecorator_h
#define __qSlicerVTKObjectDecorator_h

#include "qSlicerPerkEvaluatorModuleWrapperQtVTKExport.h"

#include "QMetaType.h"
#include "QObject.h"

#include "vtkObject.h"

// Create a PythonQt decorator class, so we can pass "this" logic to the python metrics
class Q_SLICER_MODULE_PERKEVALUATOR_WRAPPERQTVTK_EXPORT
qSlicerVTKObjectDecorator : public QObject
{
  Q_OBJECT

public:
  // Create appropriate constructors and destructors
  qSlicerVTKObjectDecorator();
  qSlicerVTKObjectDecorator( const qSlicerVTKObjectDecorator& source );
  ~qSlicerVTKObjectDecorator();

public slots:
  vtkObject* GetObject();
  void SetObject( vtkObject* newObject );

private:
  vtkObject* Object;

};
Q_DECLARE_METATYPE( qSlicerVTKObjectDecorator );

#endif
