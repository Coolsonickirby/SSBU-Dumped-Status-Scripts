
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000dc60(L2CFighterCommon *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(param_1,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      this = aLStack96;
      goto LAB_710000ded4;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(param_1);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_STATUS_SPECIAL_S_BREATH_FLAG_FIRST);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x12b6d89003);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (param_1->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_SPECIAL_S_BREATH_FLAG_FIRST);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x12b6d89003);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (param_1->moduleAccessor,HVar5,-1.0,1.0,0.0,false,false);
  }
  this = aLStack80;
LAB_710000ded4:
  lib::L2CValue::~L2CValue(this);
  return;
}

