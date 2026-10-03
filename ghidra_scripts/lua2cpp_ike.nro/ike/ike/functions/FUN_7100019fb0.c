
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019fb0(L2CFighterCommon *param_1)

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
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack160,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(param_1,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x1158d0953d);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x1158d0953d);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CLIFF_CHECK_KIND_NONE);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(param_1,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xdb8bd3614);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xdb8bd3614);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

