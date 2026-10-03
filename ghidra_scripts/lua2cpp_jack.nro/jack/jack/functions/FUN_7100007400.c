
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007400(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *this;
  ulong uVar4;
  code *pcVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar4 = lib::L2CValue::operator==(param_5,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      pcVar5 = (code *)lib::L2CValue::as_pointer(param_5);
      (*pcVar5)(param_1);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    param_3 = param_4;
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(param_4);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,
                 (bool)(bVar1 & 1),0.0,false,false);
      goto LAB_71000076d4;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(param_3);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,
                 (bool)(bVar1 & 1),0.0,false,false);
LAB_71000076d4:
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      return;
    }
  }
  HVar6 = lib::L2CValue::as_hash(param_3);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,-1.0,1.0,0.0,false,false);
  return;
}

