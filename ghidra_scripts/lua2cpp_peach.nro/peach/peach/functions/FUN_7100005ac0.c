
void FUN_7100005ac0(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,param_2);
  do {
    lib::L2CValue::L2CValue(aLStack64,360.0);
    uVar1 = lib::L2CValue::operator<(aLStack64,param_1);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar1 = lib::L2CValue::operator<(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        return;
      }
      lib::L2CValue::L2CValue(aLStack64,360.0);
      lib::L2CValue::operator+(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(param_1,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,360.0);
      lib::L2CValue::operator-(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(param_1,aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  } while( true );
}

