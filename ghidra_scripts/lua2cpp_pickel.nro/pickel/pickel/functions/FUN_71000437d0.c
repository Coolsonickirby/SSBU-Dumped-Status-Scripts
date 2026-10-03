
void FUN_71000437d0(long param_1)

{
  byte bVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_90;
  ulong uStack136;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
  app::lua_bind::MotionModule__set_reverse_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  pfVar2 = (float *)app::lua_bind::PostureModule__rot_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,*pfVar2);
  lib::L2CValue::L2CValue(aLStack128,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack112,pfVar2[2]);
  lib::L2CValue::operator=(aLStack64,(L2CValue *)&local_90);
  lib::L2CValue::operator=(aLStack80,aLStack128);
  lib::L2CValue::operator=(aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
  lib::L2CValue::operator=(aLStack64,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  uVar3 = lib::L2CValue::as_number(aLStack64);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  local_90 = CONCAT44(uVar4,uVar3);
  uStack136 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_90,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
  app::lua_bind::MotionModule__set_no_comp_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

