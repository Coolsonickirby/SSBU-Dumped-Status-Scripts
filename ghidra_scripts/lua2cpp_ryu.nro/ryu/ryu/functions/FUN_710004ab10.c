
void FUN_710004ab10(undefined8 param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  uint uVar1;
  Hash40 HVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  HVar2 = lib::L2CValue::as_hash(param_3);
  uVar1 = app::lua_bind::MotionModule__end_frame_from_hash_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar1);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::operator+(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,param_4);
  lib::L2CValue::operator/(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

