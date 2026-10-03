
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000a5280(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  bool bVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_GROUND_COLL_ATTR_DAMAGE1);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_GROUND_COLL_ATTR_DAMAGE2);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_GROUND_COLL_ATTR_DAMAGE3);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_GROUND_COLL_ATTR_DEATH);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          bVar2 = false;
          goto LAB_71000a535c;
        }
      }
    }
  }
  bVar2 = true;
LAB_71000a535c:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

