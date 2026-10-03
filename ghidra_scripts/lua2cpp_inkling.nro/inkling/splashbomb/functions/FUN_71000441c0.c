
void FUN_71000441c0(L2CValue *param_1,BattleObjectModuleAccessor *param_2)

{
  ulong uVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  fVar2 = (float)app::lua_bind::MotionModule__frame_impl(param_2);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::L2CValue(aLStack48,5);
  uVar1 = lib::L2CValue::operator<(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack48,5);
    uVar1 = lib::L2CValue::operator<=(aLStack48,aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack48,0x13);
      uVar1 = lib::L2CValue::operator<(aLStack64,aLStack48);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar1 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack48,9);
        lib::L2CValue::operator=(param_1,aLStack48);
        goto LAB_7100044390;
      }
    }
    lib::L2CValue::L2CValue(aLStack48,0x13);
    uVar1 = lib::L2CValue::operator<=(aLStack48,aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack48,0x23);
      uVar1 = lib::L2CValue::operator<(aLStack64,aLStack48);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar1 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack48,0x1e);
        lib::L2CValue::operator=(param_1,aLStack48);
        goto LAB_7100044390;
      }
    }
    lib::L2CValue::L2CValue(aLStack48,0x23);
    uVar1 = lib::L2CValue::operator<=(aLStack48,aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack48,0x31);
      uVar1 = lib::L2CValue::operator<(aLStack64,aLStack48);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar1 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack48,0x27);
        lib::L2CValue::operator=(param_1,aLStack48);
        goto LAB_7100044390;
      }
    }
    lib::L2CValue::L2CValue(aLStack48,0x3c);
    lib::L2CValue::operator=(param_1,aLStack48);
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,0);
    lib::L2CValue::operator=(param_1,aLStack48);
  }
LAB_7100044390:
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

