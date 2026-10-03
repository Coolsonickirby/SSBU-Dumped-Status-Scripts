
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e100(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  Hash40 HVar5;
  float fVar6;
  uint uVar7;
  undefined8 uVar8;
  float in_register_00005008;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack144,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack160,0xe22a27e23);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  lVar4 = app::lua_bind::WorkModule__get_param_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,lVar4);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_X);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack208,fVar6);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_Z);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack240,fVar6);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  uVar2 = lib::L2CValue::as_number(aLStack176);
  lVar4 = lib::L2CValue::as_number(aLStack208);
  uVar7 = lib::L2CValue::as_number(aLStack240);
  local_40 = uVar2 & 0xffffffff | lVar4 << 0x20;
  uStack56 = (ulong)uVar7;
  uVar8 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,(Vector3f *)&local_40);
  lib::L2CValue::L2CValue(aLStack112,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,in_register_00005008);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

