
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001b41a0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::operator=(param_8,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar4 = lib::L2CValue::operator==(param_2,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar5 = (L2CValue *)(param_1 + 200);
  if ((uVar4 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
    lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
      lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) goto LAB_71001b423c;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
    lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) goto LAB_71001b4564;
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
    lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) goto LAB_71001b4564;
  }
LAB_71001b423c:
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar5,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    iVar3 = lib::L2CValue::as_integer(param_6);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::operator=(aLStack144,param_4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    GVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    iVar3 = lib::L2CValue::as_integer(param_5);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::operator=(aLStack144,param_3);
  }
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar4 = lib::L2CValue::operator==(param_2,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack128,param_7);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack144);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      fVar9 = (float)lib::L2CValue::as_number(param_8);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,fVar8,fVar9,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      fVar8 = (float)lib::L2CValue::as_number(param_7);
      app::lua_bind::MotionModule__set_frame_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8,true);
      HVar7 = lib::L2CValue::as_hash(aLStack144);
      fVar8 = (float)lib::L2CValue::as_number(param_7);
      fVar9 = (float)lib::L2CValue::as_number(param_8);
      app::lua_bind::FighterMotionModuleImpl__change_motion_force_inherit_frame_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,fVar8,fVar9,0.0);
      fVar8 = (float)lib::L2CValue::as_number(param_8);
      app::lua_bind::MotionModule__set_rate_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8);
    }
  }
  else {
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,-1.0,1.0,0.0,false,false);
    fVar8 = (float)lib::L2CValue::as_number(param_8);
    app::lua_bind::MotionModule__set_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8);
  }
LAB_71001b4564:
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

