
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020f80(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  BattleObjectModuleAccessor *local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_FLOOR_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) goto LAB_71000213cc;
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xaae2714fc);
  lib::L2CValue::L2CValue(aLStack96,0x912cbb1e4);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xaae2714fc);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0x11e4d3abf8);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ROT_ANGLE_AXIS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),fVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)auStack128);
  uVar8 = lib::L2CValue::as_number(aLStack80);
  uVar9 = lib::L2CValue::as_number(aLStack144);
  uVar10 = lib::L2CValue::as_number(aLStack160);
  local_40 = (BattleObjectModuleAccessor *)CONCAT44(uVar9,uVar8);
  uStack56 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5,(Vector3f *)&local_40,0,0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0x41c2526cb);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  pLVar6 = (L2CValue *)lib::L2CValue::as_hash((L2CValue *)auStack128);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  uVar9 = lib::L2CValue::as_number((L2CValue *)(auStack128 + 0x10));
  uVar10 = lib::L2CValue::as_number(aLStack160);
  local_40 = (BattleObjectModuleAccessor *)CONCAT44(uVar9,uVar8);
  uStack56 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Hash40)pLVar6,(Vector3f *)&local_40,0
             ,0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CAgent::math_rad((L2CAgent *)(auStack128 + 0x10),pLVar6);
  lib::L2CAgent::math_cos((L2CAgent *)auStack128,pLVar6);
  pLVar6 = aLStack96;
  lib::L2CValue::operator*((L2CValue *)&local_40,pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CAgent::math_sin((L2CAgent *)auStack128,pLVar6);
  lib::L2CValue::operator*((L2CValue *)&local_40,aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
  uVar3 = lib::L2CValue::operator==((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0xb4);
    lib::L2CValue::operator%((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
    uVar3 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar3 & 1) != 0) goto LAB_7100021320;
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x5a);
    lib::L2CValue::operator%((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
    uVar3 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_40);
      goto LAB_7100021338;
    }
  }
  else {
LAB_7100021320:
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_40);
LAB_7100021338:
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  uVar9 = lib::L2CValue::as_number(aLStack176);
  uVar10 = lib::L2CValue::as_number(aLStack160);
  local_40 = (BattleObjectModuleAccessor *)CONCAT44(uVar9,uVar8);
  uStack56 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_render_offset_position_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Vector3f *)&local_40);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_71000213cc:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

