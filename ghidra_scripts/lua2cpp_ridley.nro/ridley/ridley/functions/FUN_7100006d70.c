
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006d70(long param_1)

{
  L2CValue *this;
  ulong uVar1;
  Hash40 HVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_END);
  uVar1 = lib::L2CValue::operator==(this,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    HVar2 = lib::L2CValue::as_hash(aLStack64);
    uVar3 = lib::L2CValue::as_number(aLStack80);
    uVar4 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    local_30 = CONCAT44(uVar4,uVar3);
    uStack40 = (ulong)uVar5;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,(Vector3f *)&local_30,0,0);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

