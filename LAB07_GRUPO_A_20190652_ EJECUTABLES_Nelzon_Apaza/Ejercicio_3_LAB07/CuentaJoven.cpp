#include "CuentaJoven.h"
#include "ProductoBancario.h"

CuentaJoven::CuentaJoven(string _cliente, double _saldo, int _numproductos):Cuenta(_cliente, _saldo, _numproductos){}
CuentaJoven::~CuentaJoven(){}