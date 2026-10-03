
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100219ea0(L2CFighterCommon *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *this;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,_GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(param_1,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    param_2 = param_3;
    if ((bVar2 & 1U) == 0) goto LAB_710021a19c;
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(param_3);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CLIFF_CHECK_KIND_NONE);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(param_1,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
LAB_710021a19c:
      HVar6 = lib::L2CValue::as_hash(param_2);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
      goto LAB_710021a1c0;
    }
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(param_2);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710021a1c0:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

