
void FUN_7100031110(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  uVar1 = lib::L2CValue::as_integer(param_3);
  uVar3 = app::lua_bind::GroundModule__get_touch_normal_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1);
  lib::L2CValue::L2CValue(aLStack128,(float)uVar3);
  lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar3 >> 0x20));
  lib::L2CValue::operator=(aLStack80,aLStack128);
  lib::L2CValue::operator=(aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::operator*(param_4,aLStack80);
  lib::L2CValue::operator*(param_5,aLStack96);
  lib::L2CValue::operator+(aLStack144,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  uVar2 = lib::L2CValue::operator<(aLStack128,param_6);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

