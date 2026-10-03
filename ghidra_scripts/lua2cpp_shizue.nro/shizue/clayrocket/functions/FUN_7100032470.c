
void FUN_7100032470(L2CValue *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0x4d27eea40);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack144,0x10d78ab4d3);
  lib::L2CValue::L2CValue(aLStack160,0x7d7541ea4);
  uVar1 = lib::L2CValue::as_integer(aLStack144);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::operator-(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  uVar7 = lib::L2CValue::as_number(aLStack176);
  local_40 = CONCAT44(uVar6,uVar5);
  uStack56 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_translate_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3,(Vector3f *)&local_40,false,
             false);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

