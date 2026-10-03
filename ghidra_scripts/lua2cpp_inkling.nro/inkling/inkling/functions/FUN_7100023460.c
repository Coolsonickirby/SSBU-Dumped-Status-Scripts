
void FUN_7100023460(L2CValue *param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  float fVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    bVar2 = false;
LAB_710002350c:
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,fVar3);
    lib::L2CValue::L2CValue(aLStack64,-1.0);
    uVar1 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      fVar3 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack128,fVar3);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar1 = lib::L2CValue::operator<(aLStack128,aLStack64);
      uVar1 = uVar1 & 0xffffffff;
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    if (bVar2) {
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar1 & 1) == 0) {
      bVar2 = false;
      goto LAB_71000235bc;
    }
  }
  else {
    fVar3 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar1 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      bVar2 = true;
      goto LAB_710002350c;
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  bVar2 = true;
LAB_71000235bc:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

