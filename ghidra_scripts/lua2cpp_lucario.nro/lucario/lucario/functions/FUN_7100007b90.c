
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007b90(long param_1)

{
  byte bVar1;
  MotionNodeRotateCompose MVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  Hash40MapEntry **local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(int)pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CAgent::math_abs((L2CAgent *)auStack128,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.5);
  lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  pLVar3 = aLStack192;
  lib::L2CValue::operator-(aLStack176,pLVar3);
  lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,1e-05);
  pLVar3 = (L2CValue *)(auStack160 + 0x10);
  uVar4 = lib::L2CValue::operator<((L2CValue *)&local_40,pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)&local_40,(L2CValue *)auStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      lib::L2CValue::operator=((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      lib::L2CValue::operator=((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
    }
  }
  else {
    lib::L2CAgent::math_abs((L2CAgent *)auStack128,pLVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.5);
    lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    uVar4 = lib::L2CValue::operator<((L2CValue *)(auStack160 + 0x10),(L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      uVar4 = lib::L2CValue::operator<((L2CValue *)&local_40,(L2CValue *)auStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::operator-((L2CValue *)auStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_40,1.5);
        lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
        lib::L2CValue::operator-((L2CValue *)auStack160,aLStack176);
        lib::L2CValue::operator=(aLStack80,(L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue((L2CValue *)auStack160);
        lib::L2CValue::operator-((L2CValue *)auStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_40,1.5);
        lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
        lib::L2CValue::operator-((L2CValue *)auStack160,aLStack176);
        lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue(aLStack176);
        pLVar3 = (L2CValue *)auStack160;
      }
      else {
        lib::L2CValue::operator-((L2CValue *)auStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_40,0.5);
        lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
        lib::L2CValue::operator+((L2CValue *)auStack160,aLStack176);
        lib::L2CValue::operator=(aLStack80,(L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue((L2CValue *)auStack160);
        lib::L2CValue::L2CValue((L2CValue *)&local_40,0.5);
        lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
        lib::L2CValue::operator-((L2CValue *)auStack128,aLStack176);
        lib::L2CValue::operator-((L2CValue *)auStack160);
        lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack160);
        pLVar3 = aLStack176;
      }
      lib::L2CValue::~L2CValue(pLVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      lib::L2CValue::operator=((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.5);
      lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::operator-((L2CValue *)auStack160,(L2CValue *)auStack128);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::operator-((L2CValue *)auStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.5);
      lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::operator+((L2CValue *)auStack160,aLStack176);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      lib::L2CValue::operator=((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
    }
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  pLVar3 = (L2CValue *)0x31d39a761;
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x31d39a761);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack80,pLVar3);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)(auStack160 + 0x10));
  uVar7 = lib::L2CValue::as_number((L2CValue *)auStack160);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  uVar9 = lib::L2CValue::as_number(aLStack192);
  local_40 = (Hash40MapEntry **)CONCAT44(uVar8,uVar7);
  uStack56 = (ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,(Vector3f *)&local_40,0,0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  pLVar3 = (L2CValue *)0x35dbfe258;
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x35dbfe258);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar3);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)(auStack160 + 0x10));
  uVar7 = lib::L2CValue::as_number((L2CValue *)auStack160);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  uVar9 = lib::L2CValue::as_number(aLStack192);
  local_40 = (Hash40MapEntry **)CONCAT44(uVar8,uVar7);
  uStack56 = (ulong)uVar9;
  MVar2 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,(Vector3f *)&local_40,MVar2,0);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  bVar1 = app::lua_bind::TurnModule__is_turn_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  uVar4 = lib::L2CValue::operator==((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    uVar4 = lib::L2CValue::operator==((L2CValue *)(auStack128 + 0x10),(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar4 & 1) == 0) {
      fVar6 = (float)lib::L2CValue::as_number((L2CValue *)(auStack128 + 0x10));
      app::lua_bind::PostureModule__set_lr_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6);
      app::lua_bind::PostureModule__update_rot_y_lr_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    }
  }
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

