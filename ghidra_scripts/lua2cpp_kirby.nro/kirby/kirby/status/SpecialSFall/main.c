
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialSFall_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar2 & 1U) != 0) {
      FUN_7100225cb0(this);
    }
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_71002262d0);
  lib::L2CValue::operator_(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xe5d54c96e);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xe5d54c96e);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
  GVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialSFall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

