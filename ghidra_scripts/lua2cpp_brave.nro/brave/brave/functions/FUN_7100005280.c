
void FUN_7100005280(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0xc4643915e);
  lib::L2CValue::L2CValue(aLStack80,0x139803a069);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0xc4643915e);
  lib::L2CValue::L2CValue(aLStack96,0x13ef0490ff);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0xc4643915e);
  lib::L2CValue::L2CValue(aLStack112,0x13760dc145);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue(aLStack112,0xdbc400ef7);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack64);
  uVar6 = lib::L2CValue::as_number(aLStack80);
  uVar7 = lib::L2CValue::as_number(aLStack96);
  local_30 = CONCAT44(uVar6,uVar5);
  uStack40 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,(Vector3f *)&local_30);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1299039904);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack64);
  uVar6 = lib::L2CValue::as_number(aLStack80);
  uVar7 = lib::L2CValue::as_number(aLStack96);
  local_30 = CONCAT44(uVar6,uVar5);
  uStack40 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,(Vector3f *)&local_30);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

